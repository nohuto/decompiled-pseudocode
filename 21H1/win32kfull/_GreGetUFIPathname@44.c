/*
 * XREFs of _GreGetUFIPathname@44 @ 0x1D8ECA
 * Callers:
 *     _NtGdiGetUFIPathname@40 @ 0x213569 (_NtGdiGetUFIPathname@40.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?ppfeGetPFEFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D85FC (-ppfeGetPFEFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

int __fastcall GreGetUFIPathname(
        int a1,
        _DWORD *a2,
        char *a3,
        char *MappedBase,
        _DWORD *ViewSize,
        SIZE_T Length,
        int *a7,
        SIZE_T *a8,
        volatile void *Address,
        _DWORD *a10,
        unsigned int *a11)
{
  struct PFE *PFEFromUFI; // eax
  struct PFE *v13; // edi
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // esi
  SIZE_T v17; // eax
  char *i; // ecx
  SIZE_T v19; // eax
  volatile void *v20; // esi
  _DWORD *v21; // edx
  unsigned int *v22; // esi
  int v23; // ecx
  unsigned int v24; // eax
  int v26; // [esp+0h] [ebp-34h]
  int v27; // [esp+4h] [ebp-30h]
  int v28; // [esp+14h] [ebp-20h]

  PFEFromUFI = ppfeGetPFEFromUFI(Length & 5, (struct _UNIVERSAL_FONT_ID *)1, v26, v27);
  v13 = PFEFromUFI;
  if ( !PFEFromUFI )
    return 0;
  v14 = *(_DWORD *)PFEFromUFI;
  v28 = *(_DWORD *)PFEFromUFI;
  if ( ViewSize )
    *ViewSize = *(_DWORD *)(v14 + 20);
  if ( a2 )
    *a2 = *(_DWORD *)(v14 + 16);
  if ( a3 )
  {
    v15 = *(_DWORD *)(v14 + 16);
    Length = v15;
    if ( v15 > (unsigned int)MappedBase )
      return 0;
    v16 = 2 * v15;
    memcpy(a3, *(const void **)(v14 + 12), 2 * v15);
    v17 = 2 * (_DWORD)&MappedBase[-Length];
    for ( i = &a3[v16]; v17; --v17 )
      *i++ = 0;
  }
  if ( a7 )
    *a7 = *((_DWORD *)v13 + 2) & 0x40;
  if ( (*((_BYTE *)v13 + 8) & 0x40) == 0 )
    goto LABEL_18;
  ViewSize = 0;
  v19 = *(_DWORD *)(**(_DWORD **)(v28 + 120) + 16);
  Length = v19;
  if ( a8 )
    *a8 = v19;
  v20 = Address;
  if ( !Address )
    goto LABEL_18;
  MappedBase = 0;
  if ( MmMapViewInSessionSpace(*(PVOID *)(**(_DWORD **)(v28 + 120) + 20), (PVOID *)&MappedBase, (PSIZE_T)&ViewSize) < 0 )
    return 0;
  ProbeForWrite(v20, Length, 1u);
  memcpy((void *)v20, MappedBase + 16, Length);
  MmUnmapViewInSessionSpace(MappedBase);
LABEL_18:
  v21 = a10;
  if ( a10 )
  {
    v22 = a11;
    if ( a11 )
    {
      *a10 = 0;
      *v22 = 0;
      v23 = *(_DWORD *)v13;
      if ( *(_DWORD *)(*(_DWORD *)v13 + 60) == dword_2785B8 && !*(_DWORD *)(*(_DWORD *)(v23 + 56) + 4) )
      {
        v24 = *(_DWORD *)(v23 + 124);
        if ( v24 >= 4 && (v24 & 1) == 0 )
        {
          *v22 = (unsigned int)(*((_DWORD *)v13 + 14) - 1) >> 1;
          *v21 = 1;
        }
      }
    }
  }
  return 1;
}
