/*
 * XREFs of ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18009504C
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x18008E62C (--1CTreeData@@UEAA@XZ.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z @ 0x18009507C (-UpdateScopeTransforms@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z.c)
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1800D36C0 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x1802429D8 (--1CTransform3DGroup@@MEAA@XZ.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180242BCC (--1CTransformGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<CMILMatrix>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2, 0x44uLL);
    *a1 = 0LL;
  }
}
