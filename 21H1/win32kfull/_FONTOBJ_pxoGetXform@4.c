/*
 * XREFs of _FONTOBJ_pxoGetXform@4 @ 0x1F36BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

XFORMOBJ *__stdcall FONTOBJ_pxoGetXform(FONTOBJ *pfo)
{
  return (XFORMOBJ *)&pfo[4].ulStyleSize;
}
