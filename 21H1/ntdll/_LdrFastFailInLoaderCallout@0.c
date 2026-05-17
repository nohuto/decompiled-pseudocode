/*
 * XREFs of _LdrFastFailInLoaderCallout@0 @ 0x4B32E860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall LdrFastFailInLoaderCallout()
{
  int result; // eax

  result = dword_4B3A339C;
  if ( (void *)dword_4B3A339C == NtCurrentTeb()->ClientId.UniqueThread || LdrpProcessInitialized < 2 )
    __fastfail(0x17u);
  return result;
}
