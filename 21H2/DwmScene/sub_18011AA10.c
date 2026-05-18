/*
 * XREFs of sub_18011AA10 @ 0x18011AA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_18011AA10()
{
  ULONG result; // eax
  REGHANDLE v1; // rcx

  result = _InterlockedExchangeAdd(&dword_180221E68, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v1 = qword_180214BE8;
    qword_180214BE8 = 0LL;
    dword_180214BC8 = 0;
    return EventUnregister(v1);
  }
  return result;
}
