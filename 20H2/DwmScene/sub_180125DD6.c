/*
 * XREFs of sub_180125DD6 @ 0x180125DD6
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_18006D11C @ 0x18006D11C (sub_18006D11C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180125DD6(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = sub_180010A94(*(_QWORD *)(a2 + 80));
  v4 = sub_180010A94(*(_QWORD *)(a2 + 80));
  sub_18006D11C(v4, v3, *(__int64 **)(a2 + 88));
  throw;
}
