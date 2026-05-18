/*
 * XREFs of sub_180126FC2 @ 0x180126FC2
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_1800A2340 @ 0x1800A2340 (sub_1800A2340.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180126FC2(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = sub_180010A94(*(_QWORD *)(a2 + 80));
  v4 = sub_180010A94(*(_QWORD *)(a2 + 80));
  sub_1800A2340(v4, v3, *(__int64 **)(a2 + 88));
  throw;
}
