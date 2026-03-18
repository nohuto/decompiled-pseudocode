/*
 * XREFs of ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C019B2FC
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01947A0 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C019495C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C019AE70 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CPointerInfoNode::IsTouchpad(CPointerInfoNode *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v3 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  LOBYTE(v3) = *((_DWORD *)this + 42) == 5;
  return v3;
}
