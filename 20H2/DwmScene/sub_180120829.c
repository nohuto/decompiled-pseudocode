/*
 * XREFs of sub_180120829 @ 0x180120829
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019710 @ 0x180019710 (sub_180019710.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180120829(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 )
    sub_180019710(v2, 1);
  throw;
}
