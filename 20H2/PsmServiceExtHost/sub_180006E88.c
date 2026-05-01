/*
 * XREFs of sub_180006E88 @ 0x180006E88
 * Callers:
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 * Callees:
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 */

__int64 __fastcall sub_180006E88(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 != -1 )
  {
    result = sub_180021550(*(_QWORD *)&qword_1800B41A8, v1, 0LL);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
