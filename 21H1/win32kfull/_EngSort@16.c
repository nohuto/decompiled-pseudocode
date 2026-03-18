/*
 * XREFs of _EngSort@16 @ 0x1EE3A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngSort(PBYTE pjBuf, ULONG c, ULONG cjElem, SORTCOMP pfnComp)
{
  _qsort(pjBuf, c, cjElem, pfnComp);
}
