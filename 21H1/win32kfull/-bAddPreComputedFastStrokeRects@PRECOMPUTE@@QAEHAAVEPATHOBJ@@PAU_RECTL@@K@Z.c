/*
 * XREFs of ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QAEHAAVEPATHOBJ@@PAU_RECTL@@K@Z @ 0x238AEE
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@QAEHAAVEPATHOBJ@@0PAU_RECTL@@K@Z @ 0x23A136 (-bPreComputeFast@PRECOMPUTE@@QAEHAAVEPATHOBJ@@0PAU_RECTL@@K@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall PRECOMPUTE::bAddPreComputedFastStrokeRects(
        PRECOMPUTE *this,
        size_t Size,
        struct _RECTL *Src,
        unsigned int a4)
{
  size_t v4; // esi
  unsigned int v5; // ecx
  char *v6; // ebx
  const void *v7; // eax
  unsigned int v8; // edi
  PATHOBJ *v10; // [esp-4h] [ebp-10h]
  unsigned int v11; // [esp+0h] [ebp-Ch]
  ULONG *v12; // [esp+0h] [ebp-Ch]
  unsigned int *v13; // [esp+4h] [ebp-8h]

  v4 = Size;
  v5 = *(_DWORD *)(Size + 36);
  if ( v5 + a4 <= v5 )
  {
    if ( v5 )
    {
LABEL_13:
      v10 = *(PATHOBJ **)(v4 + 40);
      *(_DWORD *)(v4 + 36) = 0;
      Win32FreePool(v10);
      *(_DWORD *)(v4 + 40) = 0;
    }
    return 0;
  }
  Size = 0;
  if ( (ULongAdd(a4, v5, (int *)&Size, v11, v13) & 0x80000000) != 0
    || ULongLongToULong(16LL * Size, v12) < 0
    || (v6 = (char *)PALLOCMEM2(Size, 1734632775, 0)) == 0 )
  {
    if ( *(_DWORD *)(v4 + 36) )
      goto LABEL_13;
    return 0;
  }
  v7 = *(const void **)(v4 + 40);
  if ( v7 )
    memcpy(v6, v7, 16 * *(_DWORD *)(v4 + 36));
  v8 = a4;
  memcpy(&v6[16 * *(_DWORD *)(v4 + 36)], Src, 16 * a4);
  if ( *(_DWORD *)(v4 + 40) )
    Win32FreePool(*(PATHOBJ **)(v4 + 40));
  *(_DWORD *)(v4 + 36) += v8;
  *(_DWORD *)(v4 + 40) = v6;
  return 1;
}
