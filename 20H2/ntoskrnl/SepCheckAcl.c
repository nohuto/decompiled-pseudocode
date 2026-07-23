/*
 * XREFs of SepCheckAcl @ 0x1406AA240
 * Callers:
 *     SeCaptureAcl @ 0x1406AA12C (SeCaptureAcl.c)
 * Callees:
 *     RtlValidAcl @ 0x140606290 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
