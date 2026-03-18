/*
 * XREFs of _EngMapModule@8 @ 0x1E914E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall EngMapModule(HANDLE h, PULONG pulSize)
{
  *pulSize = *((_DWORD *)h + 4);
  return (PVOID)*((_DWORD *)h + 2);
}
