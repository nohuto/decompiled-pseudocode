/*
 * XREFs of sub_180005590 @ 0x180005590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 */

__int64 __fastcall sub_180005590(char a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  v4 = sub_1800055CC();
  LOBYTE(v5) = a1;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v5, a2);
}
