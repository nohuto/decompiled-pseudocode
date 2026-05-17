/*
 * XREFs of _TppIopCancelPendingCallbacks@4 @ 0x4B3834E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppETWCallbackCancel@24 @ 0x4B384938 (_TppETWCallbackCancel@24.c)
 */

int __stdcall TppIopCancelPendingCallbacks(int a1)
{
  int result; // eax
  __int32 v2; // edi

  result = a1 + 168;
  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  if ( v2 )
  {
    TppBarrierAdjust((signed __int64 *)(a1 + 32), -v2, 0);
    if ( RtlGetCurrentServiceSessionId() )
      result = (int)NtCurrentPeb()->SharedData + 556;
    else
      result = 2147353478;
    if ( *(_BYTE *)result )
      return TppETWCallbackCancel(a1 + 48, *(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 60), v2);
  }
  return result;
}
