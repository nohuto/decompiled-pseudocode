/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x18007E170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackUnloadDllOnCompletion(PTP_CALLBACK_INSTANCE Instance, PVOID DllHandle)
{
  __int64 v2; // r8

  if ( !Instance || (char *)DllHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_QWORD *)Instance + 25) )
  {
    TppRaiseInvalidParameter(Instance, DllHandle, v2);
  }
  else
  {
    *((_DWORD *)Instance + 36) |= 0x80u;
    *((_QWORD *)Instance + 25) = DllHandle;
  }
}
