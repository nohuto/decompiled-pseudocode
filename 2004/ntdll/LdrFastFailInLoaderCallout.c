/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x180084750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( (void *)qword_180164508 == result->ClientId.UniqueThread || LdrpProcessInitialized < 2 )
    __fastfail(0x17u);
  return result;
}
