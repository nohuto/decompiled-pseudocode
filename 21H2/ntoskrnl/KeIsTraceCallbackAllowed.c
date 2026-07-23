/*
 * XREFs of KeIsTraceCallbackAllowed @ 0x14052408C
 * Callers:
 *     EtwpInvokeEventCallback @ 0x1405AB8A8 (EtwpInvokeEventCallback.c)
 *     KiTrackSystemCallEntry @ 0x1408BD250 (KiTrackSystemCallEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsTraceCallbackAllowed(char a1)
{
  _BOOL8 result; // rax
  unsigned __int64 SecureHandle; // rax

  result = 1;
  if ( (KiDynamicTraceEnabled & 2) == 0 )
  {
    if ( (KiDynamicTraceEnabled & 1) == 0 )
      return 0;
    if ( !a1 )
      return 0;
    SecureHandle = KeGetCurrentThread()->Process->SecureState.SecureHandle;
    if ( (SecureHandle & 1) != 0 || SecureHandle )
      return 0;
  }
  return result;
}
