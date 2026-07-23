/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x1800F44C8
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800F2654 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18003CC10 (RtlGetSuiteMask.c)
 *     RtlQueryPackageIdentity @ 0x18006AA20 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageClaims @ 0x18006AAE0 (RtlQueryPackageClaims.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007AE00 (RtlQueryActivationContextApplicationSettings.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x18008E4B0 (_wcsnicmp.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(unsigned __int16 *a1)
{
  struct _PEB *v1; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  _WORD *i; // rcx
  const wchar_t *v7; // r14
  unsigned int v8; // edi
  size_t v9; // r15
  const wchar_t **v10; // rsi
  const wchar_t *v11; // r12
  __int64 v12; // rax
  _PS_PKG_CLAIM PkgClaim; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR PackageSize; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[6]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR String1[16]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR PackageFullName[128]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = NtCurrentPeb();
  v16[0] = L"svchost.exe";
  v3 = 0;
  v16[1] = L"runtimebroker.exe";
  v16[2] = L"csrss.exe";
  v16[3] = L"smss.exe";
  v16[4] = L"services.exe";
  v16[5] = L"lsass.exe";
  if ( (RtlGetSuiteMask() & 0x10000) != 0
    || RtlQueryActivationContextApplicationSettings(
         0,
         0LL,
         (PWSTR)L"http://schemas.microsoft.com/SMI/2020/WindowsSettings",
         (PWSTR)L"heapType",
         String1,
         0xFuLL,
         0LL) >= 0
    && !wcsnicmp(String1, L"SegmentHeap", 0xFuLL) )
  {
    goto LABEL_25;
  }
  if ( (v1->BitField & 0x10) == 0 )
  {
    if ( !v1->ProcessParameters->HeapPartitionName.Buffer )
    {
      if ( !a1 )
        return v3;
      v4 = 0;
      v5 = *((_QWORD *)a1 + 1);
      for ( i = (_WORD *)(v5 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v5; --i )
      {
        if ( *i == 92 )
        {
          if ( v4 )
          {
            v7 = i + 1;
            if ( i != (_WORD *)-2LL )
            {
              v8 = 0;
              v9 = v4;
              v10 = (const wchar_t **)v16;
              while ( 1 )
              {
                v11 = *v10;
                if ( !wcsnicmp(v7, *v10, v9) )
                {
                  v12 = -1LL;
                  do
                    ++v12;
                  while ( v11[v12] );
                  if ( v9 == v12 )
                    goto LABEL_25;
                }
                ++v8;
                ++v10;
                if ( v8 >= 6 )
                  goto LABEL_23;
              }
            }
          }
          break;
        }
        ++v4;
      }
LABEL_23:
      PackageSize = 256LL;
      if ( RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, 0LL, 0LL, 0LL) < 0
        || wcsnicmp(PackageFullName, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
      {
        return v3;
      }
    }
LABEL_25:
    RtlpHpAppCompatFlags = 0;
    return 1;
  }
  if ( RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL) < 0
    || (PkgClaim.Flags & 0x8000) == 0 )
  {
    goto LABEL_25;
  }
  return v3;
}
