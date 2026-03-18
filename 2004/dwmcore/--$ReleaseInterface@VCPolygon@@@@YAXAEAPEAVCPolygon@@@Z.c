/*
 * XREFs of ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18019A984
 * Callers:
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800A26AC (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18019AACC (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18019ADFC (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801AF16C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F78DC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x1801FB6F0 (--1CBspNode@@UEAA@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FB904 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180202820 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x180211F4C (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802509E4 (--1CHolographicManager@@EEAA@XZ.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180258D60 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CPolygon>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
