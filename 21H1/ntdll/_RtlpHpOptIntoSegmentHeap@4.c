/*
 * XREFs of _RtlpHpOptIntoSegmentHeap@4 @ 0x4B358522
 * Callers:
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 * Callees:
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
 *     _RtlpQueryPackageIdentityAttributes@20 @ 0x4B2E4EE1 (_RtlpQueryPackageIdentityAttributes@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __wcsnicmp @ 0x4B2F7AC0 (__wcsnicmp.c)
 */

int __thiscall RtlpHpOptIntoSegmentHeap(_DWORD *this)
{
  int v2; // esi
  int v3; // ecx
  unsigned int v4; // edx
  _WORD *i; // eax
  const wchar_t *v6; // edx
  unsigned int v7; // eax
  wchar_t *v8; // edi
  wchar_t *v9; // ecx
  int v11; // edi
  size_t v13; // [esp-4h] [ebp-454h]
  ULONG_PTR *v14; // [esp+0h] [ebp-450h]
  ULONG_PTR PackageSize; // [esp+Ch] [ebp-444h] BYREF
  unsigned __int64 Flags; // [esp+18h] [ebp-438h] BYREF
  _BYTE v17[752]; // [esp+20h] [ebp-430h] BYREF
  wchar_t *String2[6]; // [esp+310h] [ebp-140h]
  WCHAR Buffer[16]; // [esp+328h] [ebp-128h] BYREF
  WCHAR PackageFullName[130]; // [esp+348h] [ebp-108h] BYREF

  String2[0] = L"svchost.exe";
  String2[1] = L"runtimebroker.exe";
  v2 = 0;
  String2[2] = L"csrss.exe";
  String2[3] = L"smss.exe";
  String2[4] = L"services.exe";
  String2[5] = L"lsass.exe";
  LODWORD(Flags) = NtCurrentPeb();
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    goto LABEL_27;
  if ( RtlQueryActivationContextApplicationSettings(
         0,
         0,
         (PWSTR)L"http://schemas.microsoft.com/SMI/2020/WindowsSettings",
         (PWSTR)L"heapType",
         Buffer,
         0xFuLL,
         v14) >= 0 )
  {
    LODWORD(v13) = 15;
    if ( !_wcsnicmp((const wchar_t *)Buffer, L"SegmentHeap", v13) )
      goto LABEL_27;
  }
  if ( (*(_BYTE *)(Flags + 3) & 0x10) != 0 )
  {
    if ( RtlpQueryPackageIdentityAttributes((HANDLE)0xFFFFFFFC, v17, (_DWORD *)&PackageSize + 1, 0) >= 0
      && (PackageSize & 0x800000000000LL) != 0 )
    {
      return v2;
    }
LABEL_27:
    RtlpHpAppCompatFlags = 0;
    return 1;
  }
  if ( *(_DWORD *)(*(_DWORD *)(Flags + 16) + 688) )
    goto LABEL_27;
  if ( this )
  {
    v3 = 0;
    v4 = this[1];
    for ( i = (_WORD *)(v4 + 2 * ((*(unsigned __int16 *)this >> 1) - 1)); ; --i )
    {
      HIDWORD(PackageSize) = v3;
      if ( (unsigned int)i <= v4 )
        break;
      if ( *i == 92 )
      {
        if ( v3 )
        {
          v6 = i + 1;
          LODWORD(PackageSize) = i + 1;
          if ( i != (_WORD *)-2 )
          {
            v7 = 0;
            LODWORD(Flags) = 0;
            while ( 1 )
            {
              v8 = String2[v7];
              LODWORD(v13) = v3;
              if ( _wcsnicmp(v6, v8, v13) )
              {
                v3 = HIDWORD(PackageSize);
              }
              else
              {
                v9 = v8 + 1;
                while ( *v8++ )
                  ;
                v11 = (char *)v8 - (char *)v9;
                v3 = HIDWORD(PackageSize);
                if ( HIDWORD(PackageSize) == v11 >> 1 )
                  goto LABEL_27;
              }
              v6 = (const wchar_t *)PackageSize;
              v7 = Flags + 1;
              LODWORD(Flags) = v7;
              if ( v7 >= 6 )
                goto LABEL_25;
            }
          }
        }
        break;
      }
      ++v3;
    }
LABEL_25:
    LODWORD(PackageSize) = 256;
    if ( RtlQueryPackageIdentityEx((HANDLE)0xFFFFFFFC, PackageFullName, &PackageSize, 0, 0, 0, &Flags) >= 0 )
    {
      LODWORD(v13) = 29;
      if ( !_wcsnicmp((const wchar_t *)PackageFullName, L"DefaultBrowser_NOPUBLISHERID", v13) )
        goto LABEL_27;
    }
  }
  return v2;
}
