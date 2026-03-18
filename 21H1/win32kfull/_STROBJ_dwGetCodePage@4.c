/*
 * XREFs of _STROBJ_dwGetCodePage@4 @ 0x1EFDB2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall STROBJ_dwGetCodePage(STROBJ *pstro)
{
  return (DWORD)pstro[2].pwszOrg;
}
