/*
 * XREFs of _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD
 * Callers:
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 * Callees:
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _RtlStringCbCatW@12 @ 0x4B2EACE3 (_RtlStringCbCatW@12.c)
 *     _ZwOpenKeyEx@16 @ 0x4B2F3B80 (_ZwOpenKeyEx@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 */

int __fastcall LdrpAppxGetRemediationRegistryKey(int a1, int a2, int a3)
{
  int result; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // [esp-Ch] [ebp-258h]
  int v9; // [esp+Ch] [ebp-240h] BYREF
  _BYTE v10[8]; // [esp+10h] [ebp-23Ch] BYREF
  _DWORD v11[2]; // [esp+18h] [ebp-234h] BYREF
  _BYTE *v12; // [esp+20h] [ebp-22Ch]
  int v13; // [esp+24h] [ebp-228h]
  int v14; // [esp+28h] [ebp-224h]
  int v15; // [esp+2Ch] [ebp-220h]
  _WORD v16[266]; // [esp+30h] [ebp-21Ch] BYREF

  result = RtlGetPersistedStateLocation(
             L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             0,
             v16,
             0x20Au,
             (size_t *)&v9);
  if ( result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      result = RtlUnicodeStringInitWorker(v6, v6);
      if ( result < 0 )
        return result;
      v12 = v10;
      v8 = 131097;
      goto LABEL_9;
    }
    result = RtlStringCbCatW(v16, 0x20Au, (int)L"\\PackageList\\");
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(v16, 0x20Au, a2);
      if ( result >= 0 )
      {
        result = RtlUnicodeStringInitWorker(v7, v7);
        if ( result >= 0 )
        {
          v12 = v10;
          v8 = 131353;
LABEL_9:
          v11[0] = 24;
          v11[1] = 0;
          v13 = 64;
          v14 = 0;
          v15 = 0;
          return ZwOpenKeyEx(a3, v8, (int)v11, 0);
        }
      }
    }
  }
  return result;
}
