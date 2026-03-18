/*
 * XREFs of _EngFindResource@16 @ 0x1DA0FE
 * Callers:
 *     <none>
 * Callees:
 *     _pvFindResource@20 @ 0xE621E (_pvFindResource@20.c)
 */

PVOID __stdcall EngFindResource(HANDLE h, INT iName, INT iType, PULONG pulSize)
{
  return (PVOID)pvFindResource(*((_DWORD *)h + 2) + 1, *((_DWORD *)h + 2) + *((_DWORD *)h + 4), iName, iType, pulSize);
}
