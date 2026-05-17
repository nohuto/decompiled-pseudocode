/*
 * XREFs of LdrpGetDataModulePath @ 0x18006A118
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x18006A28C (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x18006A350 (LdrFindEntryForAddress.c)
 *     wcsrchr @ 0x1800920A0 (wcsrchr.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall LdrpGetDataModulePath(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        wchar_t **a5,
        _DWORD *a6,
        _QWORD *a7)
{
  int EntryForAddress; // ebx
  wchar_t *v10; // rdi
  wchar_t *v11; // rcx
  wchar_t *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ecx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rdi
  unsigned int v19; // eax
  wchar_t *v20[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+40h] [rbp-28h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  if ( (a1 & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(a1, &v22);
    if ( EntryForAddress < 0 )
      return (unsigned int)EntryForAddress;
    v18 = v22;
    v19 = *(unsigned __int16 *)(v22 + 72) - *(unsigned __int16 *)(v22 + 88);
    *a4 = v19;
    if ( v19 <= *(unsigned __int16 *)(v18 + 72) && v19 < 0x2BE )
    {
      memmove(a2, *(const void **)(v18 + 80), v19);
      *a5 = *(wchar_t **)(v18 + 96);
      *a6 = *(unsigned __int16 *)(v18 + 88);
      v15 = a7;
      if ( !a7 )
        return (unsigned int)EntryForAddress;
      v16 = *(_QWORD *)(v18 + 136);
      goto LABEL_9;
    }
    return (unsigned int)-2147483643;
  }
  EntryForAddress = LdrpGetLoadAsEntry(a1, v20);
  if ( EntryForAddress < 0 )
    return (unsigned int)EntryForAddress;
  v10 = v20[1];
  v11 = wcsrchr(v20[1], 0x5Cu);
  if ( !v11 )
    return (unsigned int)-1073741767;
  v12 = v11 + 1;
  v13 = -1LL;
  *a5 = v12;
  do
    ++v13;
  while ( v12[v13] );
  v14 = 2 * (v12 - v10);
  *a6 = 2 * v13;
  *a4 = v14;
  if ( v14 >= 0x2BE )
    return (unsigned int)-2147483643;
  memmove(a2, v10, v14);
  v15 = a7;
  if ( a7 )
  {
    v16 = *((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) != -1LL )
LABEL_9:
      *v15 = v16;
  }
  return (unsigned int)EntryForAddress;
}
