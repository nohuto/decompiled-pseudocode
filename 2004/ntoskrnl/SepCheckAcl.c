/*
 * XREFs of SepCheckAcl @ 0x1406311F0
 * Callers:
 *     SeCaptureAcl @ 0x1406310DC (SeCaptureAcl.c)
 * Callees:
 *     RtlValidAcl @ 0x14067E700 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
