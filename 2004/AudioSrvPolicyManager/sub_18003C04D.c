/*
 * XREFs of sub_18003C04D @ 0x18003C04D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003C04D(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
