/*
 * XREFs of _ALIGN_MEM @ 0x1C4224
 * Callers:
 *     _BuildBltAAInfo @ 0x1C16A3 (_BuildBltAAInfo.c)
 *     _BuildExpandAAInfo @ 0x1C17F7 (_BuildExpandAAInfo.c)
 *     _BuildShrinkAAInfo @ 0x1C22ED (_BuildShrinkAAInfo.c)
 *     _BuildTileAAInfo @ 0x1C2972 (_BuildTileAAInfo.c)
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 * Callees:
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 */

signed int __fastcall ALIGN_MEM(int *a1, unsigned int a2)
{
  signed int result; // eax

  result = ULongAdd(a2, 4, a1);
  if ( result >= 0 )
    *a1 &= 0xFFFFFFFC;
  return result;
}
