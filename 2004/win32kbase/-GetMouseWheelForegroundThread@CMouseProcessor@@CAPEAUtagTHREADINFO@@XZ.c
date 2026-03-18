/*
 * XREFs of ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01BCC28
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01BB774 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01BD06C (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C01ADF88 (PtiKbdFromQ.c)
 */

struct tagTHREADINFO *CMouseProcessor::GetMouseWheelForegroundThread(void)
{
  struct tagTHREADINFO *result; // rax
  _QWORD *v1; // rcx
  __int64 v2; // rax

  if ( !gpqForeground )
    return 0LL;
  result = (struct tagTHREADINFO *)PtiKbdFromQ(gpqForeground);
  if ( !result )
  {
    v2 = v1[14];
    if ( v2 )
      return *(struct tagTHREADINFO **)(v2 + 16);
    v2 = v1[13];
    if ( v2 )
      return *(struct tagTHREADINFO **)(v2 + 16);
    else
      return (struct tagTHREADINFO *)v1[11];
  }
  return result;
}
