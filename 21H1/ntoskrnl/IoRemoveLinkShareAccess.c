/*
 * XREFs of IoRemoveLinkShareAccess @ 0x14088F850
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x140652820 (IoRemoveLinkShareAccessEx.c)
 */

unsigned int *__fastcall IoRemoveLinkShareAccess(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  return IoRemoveLinkShareAccessEx(a1, a2, a3, 0);
}
