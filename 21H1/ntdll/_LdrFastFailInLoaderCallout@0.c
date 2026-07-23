/*
 * XREFs of _LdrFastFailInLoaderCallout@0 @ 0x4B32E860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall LdrFastFailInLoaderCallout()
{
  void *result; // eax

  result = LdrpLoaderLock.OwningThread;
  if ( LdrpLoaderLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread || LdrpProcessInitialized < 2 )
    __fastfail(0x17u);
  return result;
}
