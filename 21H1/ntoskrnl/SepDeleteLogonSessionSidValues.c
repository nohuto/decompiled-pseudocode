/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x14091E708
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406D2920 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140765CD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x14091E7C0 (SepDereferenceSidValuesBlock.c)
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
