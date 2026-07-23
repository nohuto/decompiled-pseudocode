/*
 * XREFs of _TpWaitForIoCompletion@8 @ 0x4B2ABF80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _TppETWCallbackCancel@24 @ 0x4B384938 (_TppETWCallbackCancel@24.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  __int32 v2; // edi
  int v3; // eax

  v2 = 0;
  if ( TppIopValidateIo(0) )
  {
    if ( CancelPendingCallbacks )
      v2 = _InterlockedExchange((volatile __int32 *)Io + 42, 0);
    TppBarrierAdjust(1);
    if ( v2 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v3 = (int)NtCurrentPeb()->SharedData + 556;
      else
        v3 = 2147353478;
      if ( *(_BYTE *)v3 )
        TppETWCallbackCancel((char *)Io + 48, *((_DWORD *)Io + 13), *((_DWORD *)Io + 15), v2);
    }
  }
}
