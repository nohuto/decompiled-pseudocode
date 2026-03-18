/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C00302CC
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C0030240 (IsShellFrameHangResilient.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x1C00B19CC (PostInputMessage.c)
 *     EditionMouseMoveShellResilience @ 0x1C0111880 (EditionMouseMoveShellResilience.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0030344 (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x1C0030384 (IsIAMThread.c)
 */

_BOOL8 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _BOOL8 result; // rax

  v3 = *(_QWORD *)(a1 + 1384);
  result = 1;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 112);
    if ( (!v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16), a2, a3))
      && !(unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 416)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1384) + 112LL);
      if ( !v6 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL)) )
        return 0;
    }
  }
  return result;
}
