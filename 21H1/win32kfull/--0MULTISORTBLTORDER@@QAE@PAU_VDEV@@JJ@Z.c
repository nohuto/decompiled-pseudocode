/*
 * XREFs of ??0MULTISORTBLTORDER@@QAE@PAU_VDEV@@JJ@Z @ 0x20161B
 * Callers:
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vSortBltOrderWorker@@YGXPAPAU_SODISPSURF@@JJ@Z @ 0x206805 (-vSortBltOrderWorker@@YGXPAPAU_SODISPSURF@@JJ@Z.c)
 */

MULTISORTBLTORDER *__thiscall MULTISORTBLTORDER::MULTISORTBLTORDER(
        MULTISORTBLTORDER *this,
        struct _VDEV *a2,
        int a3,
        struct _SODISPSURF **a4)
{
  unsigned int v5; // esi
  void *v6; // eax
  _DWORD *v7; // edi
  struct _VDEV *v8; // edx
  _DWORD *v9; // ecx
  int v10; // edx
  int v12; // [esp+0h] [ebp-Ch]
  int v13; // [esp+4h] [ebp-8h]

  v5 = 0;
  v6 = PALLOCMEM2(8 * *((_DWORD *)a2 + 2), 1869835591, 0);
  *(_DWORD *)this = v6;
  v7 = (_DWORD *)((char *)this + 4);
  *((_DWORD *)this + 1) = v6;
  *((_DWORD *)this + 2) = 0;
  if ( v6 )
  {
    v8 = a2;
    v9 = *(_DWORD **)a2;
    if ( *(_DWORD *)a2 )
    {
      v10 = 0;
      do
      {
        *(_DWORD *)(v10 + *v7 + 4) = v9;
        *(_DWORD *)(v10 + *v7) = 0;
        v10 += 8;
        v9 = (_DWORD *)*v9;
      }
      while ( v9 );
      v8 = a2;
    }
    if ( *((_DWORD *)v8 + 2) != 1 )
    {
      do
      {
        *(_DWORD *)(*v7 + 8 * v5) = *v7 + 8 + 8 * v5;
        ++v5;
      }
      while ( v5 < *((_DWORD *)v8 + 2) - 1 );
    }
    vSortBltOrderWorker(a4, v12, v13);
    *((_DWORD *)this + 2) = *v7;
  }
  return this;
}
