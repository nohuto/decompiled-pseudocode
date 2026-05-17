/*
 * XREFs of _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290
 * Callers:
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 *     _LdrpAppxEtwGenericIntegrityFailure@4 @ 0x4B32C454 (_LdrpAppxEtwGenericIntegrityFailure@4.c)
 *     _LdrpAppxEtwIntegrityFailure@12 @ 0x4B32C4D5 (_LdrpAppxEtwIntegrityFailure@12.c)
 *     _LdrpAppxGetBinaryNameKeyInformation@12 @ 0x4B32C5D2 (_LdrpAppxGetBinaryNameKeyInformation@12.c)
 *     _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD (_LdrpAppxGetRemediationRegistryKey@12.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

int __stdcall LdrAppxHandleIntegrityFailure(int a1)
{
  int PackageIdentity; // esi
  int v2; // edi
  _DWORD v4[3]; // [esp+10h] [ebp-4A4h] BYREF
  _BYTE v5[4]; // [esp+1Ch] [ebp-498h] BYREF
  _WORD v6[2]; // [esp+20h] [ebp-494h] BYREF
  const wchar_t *v7; // [esp+24h] [ebp-490h]
  int v8; // [esp+28h] [ebp-48Ch] BYREF
  _DWORD v9[2]; // [esp+2Ch] [ebp-488h] BYREF
  HANDLE Handle; // [esp+34h] [ebp-480h] BYREF
  int v11[20]; // [esp+38h] [ebp-47Ch] BYREF
  CONTEXT ContextRecord; // [esp+88h] [ebp-42Ch] BYREF
  _BYTE v13[256]; // [esp+358h] [ebp-15Ch] BYREF
  _DWORD v14[21]; // [esp+458h] [ebp-5Ch] BYREF

  v6[0] = 20;
  v6[1] = 22;
  v9[0] = 256;
  v7 = L"BinaryHash";
  PackageIdentity = RtlQueryPackageIdentityEx(-4, (int)v13, (int)v9, 0, 0, 0, v4);
  if ( PackageIdentity < 0 )
    goto LABEL_12;
  PackageIdentity = LdrpAppxGetRemediationRegistryKey(&Handle);
  if ( PackageIdentity < 0 )
    goto LABEL_12;
  PackageIdentity = LdrpAppxGetBinaryNameKeyInformation(&v8);
  if ( PackageIdentity >= 0 )
  {
    v2 = v9[1];
    memset(v14, 0, 0x50u);
    PackageIdentity = ZwQueryValueKey((int)Handle, (int)v6, 2, (int)v14, 80, (int)v5);
    if ( PackageIdentity >= 0 )
    {
      if ( v14[1] != 3 || !v14[2] )
        PackageIdentity = -1073739509;
      if ( PackageIdentity >= 0 )
        LdrpAppxEtwIntegrityFailure(v2);
    }
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  NtClose(Handle);
  if ( PackageIdentity < 0 )
LABEL_12:
    LdrpAppxEtwGenericIntegrityFailure(PackageIdentity);
  if ( a1 != -1073740673 )
  {
    memset(v11, 0, sizeof(v11));
    v11[0] = 101457950;
    v11[1] = 1;
    v11[3] = (int)LdrAppxHandleIntegrityFailure;
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    RtlReportException(v11, &ContextRecord, 2);
    ZwTerminateProcess(-1, v11[0]);
  }
  return -1073741515;
}
