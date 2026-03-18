/*
 * XREFs of ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18019D534
 * Callers:
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18007CD4C (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18019D67C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18019D9AC (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801B1AC0 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801FA29C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x1801FE0B0 (--1CBspNode@@UEAA@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FE2C4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1802051E0 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18021491C (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x180253474 (--1CHolographicManager@@EEAA@XZ.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x18025B7D0 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
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
