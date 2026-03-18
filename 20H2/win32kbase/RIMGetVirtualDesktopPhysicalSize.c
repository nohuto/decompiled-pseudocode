/*
 * XREFs of RIMGetVirtualDesktopPhysicalSize @ 0x1C00B57A0
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0163F24 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetVirtualDesktopPhysicalSize(__int64 a1)
{
  int v1; // r10d
  __int64 v2; // r8
  unsigned __int64 v3; // xmm0_8

  *(_QWORD *)a1 = 0LL;
  v1 = *((unsigned __int16 *)gpsi + 3499);
  v2 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v3 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
  *(_DWORD *)(a1 + 8) = 2540 * ((int)v3 - (int)v2) / v1;
  *(_DWORD *)(a1 + 12) = 2540 * (HIDWORD(v3) - HIDWORD(v2)) / v1;
  return a1;
}
