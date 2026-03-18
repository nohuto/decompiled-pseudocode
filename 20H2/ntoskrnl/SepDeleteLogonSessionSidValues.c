/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x1409257D8
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406C8580 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1407766C0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x140925890 (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepDeleteLogonSessionSidValues(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = SepDereferenceSidValuesBlock(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
