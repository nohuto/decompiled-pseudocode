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
  size_t v3; // ecx
  unsigned int v4; // edx
  _WORD *i; // eax
  const wchar_t *v6; // edx
  unsigned int p_ReadImageFileExecOptions; // eax
  wchar_t *v8; // edi
  wchar_t *v9; // ecx
  int v11; // edi
  int v13; // [esp+Ch] [ebp-444h] BYREF
  size_t v14[2]; // [esp+10h] [ebp-440h] BYREF
  struct _PEB *v15; // [esp+18h] [ebp-438h] BYREF
  _BYTE v16[752]; // [esp+20h] [ebp-430h] BYREF
  wchar_t *String2[6]; // [esp+310h] [ebp-140h]
  wchar_t String1[16]; // [esp+328h] [ebp-128h] BYREF
  wchar_t v19[130]; // [esp+348h] [ebp-108h] BYREF

  String2[0] = L"svchost.exe";
  String2[1] = L"runtimebroker.exe";
  v2 = 0;
  String2[2] = L"csrss.exe";
  String2[3] = L"smss.exe";
  String2[4] = L"services.exe";
  String2[5] = L"lsass.exe";
  v15 = NtCurrentPeb();
  if ( (RtlGetSuiteMask() & 0x10000) != 0
    || RtlQueryActivationContextApplicationSettings(
         0,
         0,
         L"http://schemas.microsoft.com/SMI/2020/WindowsSettings",
         L"heapType",
         String1,
         0xFu,
         0) >= 0
    && !_wcsnicmp(String1, L"SegmentHeap", 0xFu) )
  {
    goto LABEL_27;
  }
  if ( (v15->BitField & 0x10) != 0 )
  {
    if ( RtlpQueryPackageIdentityAttributes((void *)0xFFFFFFFC, (int)v16, v14, 0) >= 0 && (v14[0] & 0x8000) != 0 )
      return v2;
LABEL_27:
    RtlpHpAppCompatFlags = 0;
    return 1;
  }
  if ( v15->ProcessParameters->HeapPartitionName.Buffer )
    goto LABEL_27;
  if ( this )
  {
    v3 = 0;
    v4 = this[1];
    for ( i = (_WORD *)(v4 + 2 * ((*(unsigned __int16 *)this >> 1) - 1)); ; --i )
    {
      v14[0] = v3;
      if ( (unsigned int)i <= v4 )
        break;
      if ( *i == 92 )
      {
        if ( v3 )
        {
          v6 = i + 1;
          v13 = (int)(i + 1);
          if ( i != (_WORD *)-2 )
          {
            p_ReadImageFileExecOptions = 0;
            v15 = 0;
            while ( 1 )
            {
              v8 = String2[p_ReadImageFileExecOptions];
              if ( _wcsnicmp(v6, v8, v3) )
              {
                v3 = v14[0];
              }
              else
              {
                v9 = v8 + 1;
                while ( *v8++ )
                  ;
                v11 = (char *)v8 - (char *)v9;
                v3 = v14[0];
                if ( v14[0] == v11 >> 1 )
                  goto LABEL_27;
              }
              v6 = (const wchar_t *)v13;
              p_ReadImageFileExecOptions = (unsigned int)&v15->ReadImageFileExecOptions;
              v15 = (struct _PEB *)p_ReadImageFileExecOptions;
              if ( p_ReadImageFileExecOptions >= 6 )
                goto LABEL_25;
            }
          }
        }
        break;
      }
      ++v3;
    }
LABEL_25:
    v13 = 256;
    if ( RtlQueryPackageIdentityEx(-4, (int)v19, (int)&v13, 0, 0, 0, &v15) >= 0
      && !_wcsnicmp(v19, L"DefaultBrowser_NOPUBLISHERID", 0x1Du) )
    {
      goto LABEL_27;
    }
  }
  return v2;
}
