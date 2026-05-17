/*
 * XREFs of _RtlUpdateClonedCriticalSection@4 @ 0x4B306F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall RtlUpdateClonedCriticalSection(_DWORD *a1)
{
  void *result; // eax

  result = NtCurrentTeb()->ClientId.UniqueThread;
  a1[3] = result;
  a1[1] = -2;
  a1[2] = 1;
  a1[4] = 0;
  return result;
}
