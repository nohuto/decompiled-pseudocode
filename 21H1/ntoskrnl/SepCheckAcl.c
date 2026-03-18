/*
 * XREFs of SepCheckAcl @ 0x1406754A0
 * Callers:
 *     SeCaptureAcl @ 0x14067538C (SeCaptureAcl.c)
 * Callees:
 *     RtlValidAcl @ 0x140606620 (RtlValidAcl.c)
 */

char __fastcall SepCheckAcl(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == *(unsigned __int16 *)(a1 + 2) )
    return RtlValidAcl(a1);
  else
    return 0;
}
