/*
 * XREFs of EvalPackageElement @ 0x1C001246C
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     Match_32 @ 0x1C0069AF8 (Match_32.c)
 *     Match_64 @ 0x1C0069C1C (Match_64.c)
 * Callees:
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 */

__int64 __fastcall EvalPackageElement(unsigned int *a1, unsigned int a2, __int64 a3)
{
  if ( a2 >= *a1 )
    return 3222536196LL;
  else
    return DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, a3, (__int64)&a1[8 * a2 + 2 + 2 * a2]);
}
