/*
 * XREFs of _TpCallbackUnloadDllOnCompletion@8 @ 0x4B2ED590
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpCallbackUnloadDllOnCompletion(PTP_CALLBACK_INSTANCE Instance, PVOID DllHandle)
{
  if ( !Instance || !DllHandle || DllHandle == (PVOID)-1 || *((_DWORD *)Instance + 29) )
    TppRaiseInvalidParameter();
  *((_DWORD *)Instance + 20) |= 0x80u;
  *((_DWORD *)Instance + 29) = DllHandle;
}
