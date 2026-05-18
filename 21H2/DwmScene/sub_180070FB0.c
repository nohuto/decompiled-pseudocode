/*
 * XREFs of sub_180070FB0 @ 0x180070FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180070348 @ 0x180070348 (sub_180070348.c)
 */

__int64 __fastcall sub_180070FB0(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_180070348(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
}
