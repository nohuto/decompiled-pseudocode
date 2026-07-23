/*
 * XREFs of _LdrpGetFileDriverStoreRoot@12 @ 0x4B2E7D5F
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     __wcsnicmp @ 0x4B2F7AC0 (__wcsnicmp.c)
 *     RtlStringCopyWorkerW_3 @ 0x4B33FBA8 (RtlStringCopyWorkerW_3.c)
 */

char __fastcall LdrpGetFileDriverStoreRoot(const wchar_t *a1, int a2, _WORD *a3)
{
  char v4; // bl
  const wchar_t *v5; // edx
  _WORD *v6; // ecx
  int v8; // eax
  const wchar_t *v9; // esi
  int v10; // ecx
  unsigned int v12; // esi
  size_t v13; // [esp-4h] [ebp-10h]

  v4 = 0;
  v5 = a1;
  v6 = a1 + 1;
  while ( *v5++ )
    ;
  v8 = 0;
  v9 = &a1[v5 - v6];
  if ( v9 > a1 )
  {
    while ( *v9 != 92 || ++v8 != 4 )
    {
      if ( --v9 <= a1 )
        goto LABEL_9;
    }
    ++v9;
LABEL_9:
    if ( v8 == 4 )
    {
      LODWORD(v13) = 11;
      if ( !_wcsnicmp(L"DriverStore", v9, v13) )
      {
        v12 = v9 - a1 + 11;
        if ( v12 <= 0x7FFFFFFE )
        {
          if ( (int)RtlStringCopyWorkerW_3(v10, a1, v12) >= 0 )
            return 1;
        }
        else
        {
          *a3 = 0;
        }
      }
    }
  }
  return v4;
}
