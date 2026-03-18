/*
 * XREFs of _ULongAdd @ 0x1BAE44
 * Callers:
 *     _FindCachedSMP @ 0x1BA0CA (_FindCachedSMP.c)
 *     _AddBGRMapCache @ 0x1BCA75 (_AddBGRMapCache.c)
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 *     _BuildBltAAInfo @ 0x1C16A3 (_BuildBltAAInfo.c)
 *     _BuildExpandAAInfo @ 0x1C17F7 (_BuildExpandAAInfo.c)
 *     _BuildShrinkAAInfo @ 0x1C22ED (_BuildShrinkAAInfo.c)
 *     _BuildTileAAInfo @ 0x1C2972 (_BuildTileAAInfo.c)
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 *     _ALIGN_MEM @ 0x1C4224 (_ALIGN_MEM.c)
 *     _CheckBMPNeedFixup @ 0x1C43B3 (_CheckBMPNeedFixup.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ULongAdd(unsigned int a1, int a2, int *a3)
{
  unsigned int v3; // eax
  int v4; // edx
  unsigned int result; // eax

  v3 = a1 + a2;
  if ( a1 + a2 < a1 )
    v4 = -1;
  else
    v4 = a1 + a2;
  result = v3 < a1 ? 0x80070216 : 0;
  *a3 = v4;
  return result;
}
