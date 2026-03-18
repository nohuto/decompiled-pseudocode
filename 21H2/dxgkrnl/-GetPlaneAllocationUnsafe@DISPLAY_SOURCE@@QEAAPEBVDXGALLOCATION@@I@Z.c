/*
 * XREFs of ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C02C1278
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0319174 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C01E6CCC (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

const struct DXGALLOCATION *__fastcall DISPLAY_SOURCE::GetPlaneAllocationUnsafe(DISPLAY_SOURCE *this, unsigned int a2)
{
  __int64 v2; // rbx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  v2 = 0LL;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9484LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9484LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, a2);
  if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
    return *(const struct DXGALLOCATION **)LatestPlaneConfigInternal;
  return (const struct DXGALLOCATION *)v2;
}
