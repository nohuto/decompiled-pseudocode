/*
 * XREFs of _RtlUpdateClonedSRWLock@8 @ 0x4B34A490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlUpdateClonedSRWLock(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2 != 0 ? 17 : 1;
  return result;
}
