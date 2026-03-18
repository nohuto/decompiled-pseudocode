/*
 * XREFs of ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01C14D4
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01C18E0 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01C2988 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01C2D3C (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C01C2D90 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::AppCompatWheelRoutingRequested(CMouseProcessor *this)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  char v2; // bl
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rdx
  char HasThreadRequestedHittestMouseWheelRouting; // al
  __int64 v6; // rcx
  char v7; // dl

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
  v2 = 0;
  v3 = MouseWheelForegroundThread;
  if ( MouseWheelForegroundThread )
  {
    LOBYTE(v4) = (unsigned __int8)anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(MouseWheelForegroundThread) != 0;
    HasThreadRequestedHittestMouseWheelRouting = anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(
                                                   v3,
                                                   v4);
    if ( v7 )
    {
      if ( HasThreadRequestedHittestMouseWheelRouting )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      else
        v2 = 1;
    }
    LOBYTE(MouseWheelForegroundThread) = v2;
  }
  return (char)MouseWheelForegroundThread;
}
