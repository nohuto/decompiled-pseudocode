/*
 * XREFs of _LdrpGetDataModulePath@28 @ 0x4B2B8EDE
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 *     _LdrFindEntryForAddress@8 @ 0x4B2CF200 (_LdrFindEntryForAddress@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 */

int __fastcall LdrpGetDataModulePath(char a1, void *a2, int a3, size_t *a4, wchar_t **a5, _DWORD *a6, wchar_t **a7)
{
  int EntryForAddress; // esi
  wchar_t *v8; // edx
  wchar_t *v9; // edx
  wchar_t *v10; // ecx
  wchar_t *v11; // edi
  size_t v13; // edx
  wchar_t **v14; // ecx
  wchar_t *v15; // eax
  int v17; // edi
  size_t v18; // edx
  int v19; // [esp+10h] [ebp-20h] BYREF
  void *v20; // [esp+14h] [ebp-1Ch]
  wchar_t *v21[6]; // [esp+18h] [ebp-18h] BYREF

  v19 = 0;
  v20 = a2;
  memset(v21, 0, sizeof(v21));
  if ( (a1 & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(a1, &v19);
    if ( EntryForAddress < 0 )
      return EntryForAddress;
    v17 = v19;
    v18 = *(unsigned __int16 *)(v19 + 36) - *(unsigned __int16 *)(v19 + 44);
    *a4 = v18;
    if ( v18 <= *(unsigned __int16 *)(v17 + 36) && v18 < 0x2BE )
    {
      memcpy(v20, *(const void **)(v17 + 40), v18);
      *a5 = *(wchar_t **)(v17 + 48);
      *a6 = *(unsigned __int16 *)(v17 + 44);
      v14 = a7;
      if ( !a7 )
        return EntryForAddress;
      v15 = *(wchar_t **)(v17 + 72);
      goto LABEL_9;
    }
    return -2147483643;
  }
  EntryForAddress = LdrpGetLoadAsEntry(a1, v21);
  if ( EntryForAddress < 0 )
    return EntryForAddress;
  v8 = wcsrchr(v21[1], 0x5Cu);
  if ( !v8 )
    return -1073741767;
  v9 = v8 + 1;
  v10 = v9;
  *a5 = v9;
  v11 = v9 + 1;
  while ( *v10++ )
    ;
  v13 = ((char *)v9 - (char *)v21[1]) & 0xFFFFFFFE;
  *a6 = 2 * (v10 - v11);
  *a4 = v13;
  if ( v13 >= 0x2BE )
    return -2147483643;
  memcpy(v20, v21[1], v13);
  v14 = a7;
  if ( a7 )
  {
    v15 = v21[5];
    if ( v21[5] != (wchar_t *)-1 )
LABEL_9:
      *v14 = v15;
  }
  return EntryForAddress;
}
