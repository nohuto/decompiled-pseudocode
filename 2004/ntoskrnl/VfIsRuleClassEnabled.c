/*
 * XREFs of VfIsRuleClassEnabled @ 0x1409C3010
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037BED8 (ViDifCheckCallbackInterception.c)
 *     ViXdvDriverLoadImage @ 0x1409C5E1C (ViXdvDriverLoadImage.c)
 *     IovpCancelRoutine @ 0x1409CD3C0 (IovpCancelRoutine.c)
 *     ViThunkReplaceSharedExports @ 0x1409D66A8 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VfIsRuleClassEnabled(unsigned int a1)
{
  int v2; // eax

  if ( a1 >= 0x40 )
    return 0;
  v2 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
  return _bittest(&v2, a1 & 0x1F);
}
