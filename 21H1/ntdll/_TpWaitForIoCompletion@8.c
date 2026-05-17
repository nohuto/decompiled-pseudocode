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

int __stdcall TpWaitForIoCompletion(int a1, int a2)
{
  __int32 v2; // edi
  int result; // eax

  v2 = 0;
  result = TppIopValidateIo(0);
  if ( result )
  {
    if ( a2 )
      v2 = _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
    result = TppBarrierAdjust(1);
    if ( v2 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        result = (int)NtCurrentPeb()->SharedData + 556;
      else
        result = 2147353478;
      if ( *(_BYTE *)result )
        return TppETWCallbackCancel(a1 + 48, *(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 60), v2);
    }
  }
  return result;
}
