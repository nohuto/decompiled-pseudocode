/*
 * XREFs of ?RemoveAll@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAXXZ @ 0x180174630
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180170090 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1801B6774 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x18024C0EC (--1CD2DCommandList@@MEAA@XZ.c)
 *     ?ReleaseD2DResources@CD2DCommandList@@UEAAXXZ @ 0x18024C480 (-ReleaseD2DResources@CD2DCommandList@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 */

void __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    operator delete(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
