/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C01C2D90
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01C14D4 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01C2DCC (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01C439C (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 */

char __fastcall anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 416) + 820LL) & 0x10000) != 0 )
    return 1;
  else
    return *(_BYTE *)(*(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread() + 416) + 822LL) & 1;
}
