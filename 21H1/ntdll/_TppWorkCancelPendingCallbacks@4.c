/*
 * XREFs of _TppWorkCancelPendingCallbacks@4 @ 0x4B384450
 * Callers:
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppETWCallbackCancel@24 @ 0x4B384938 (_TppETWCallbackCancel@24.c)
 */

unsigned __int32 __stdcall TppWorkCancelPendingCallbacks(int a1)
{
  unsigned __int32 result; // eax
  unsigned __int32 v2; // edi

  result = *(_DWORD *)(a1 + 140);
  if ( result >= 2 )
  {
    result = _InterlockedAnd((volatile signed __int32 *)(a1 + 140), 1u);
    v2 = result >> 1;
    if ( result >> 1 )
    {
      TppBarrierAdjust((signed __int64 *)(a1 + 32), -v2, 0);
      if ( RtlGetCurrentServiceSessionId() )
        result = (unsigned __int32)NtCurrentPeb()->SharedData + 556;
      else
        result = 2147353478;
      if ( *(_BYTE *)result )
        return TppETWCallbackCancel(*(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 60), v2);
    }
  }
  return result;
}
