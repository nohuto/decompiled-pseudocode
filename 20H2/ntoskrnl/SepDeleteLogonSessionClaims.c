/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x1406C8830
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406C8580 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1407766C0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x140927818 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepDeleteLogonSessionClaims(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    result = SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}
