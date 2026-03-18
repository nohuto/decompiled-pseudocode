/*
 * XREFs of _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01C439C
 * Callers:
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C01C2D90 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::ResolveApplicationFrameChildThread(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (*(_DWORD *)(a1 + 1216) & 0x40000) != 0 && (v1 = *(_QWORD *)(a1 + 1384)) != 0 )
    return *(_QWORD *)(v1 + 16);
  else
    return a1;
}
