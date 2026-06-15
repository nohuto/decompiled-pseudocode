/*
 * XREFs of sub_1800272C0 @ 0x1800272C0
 * Callers:
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 * Callees:
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 */

__int64 __fastcall sub_1800272C0(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax

  v4 = a2;
  v6 = 0;
  if ( sub_1800234D0(a1) || (_DWORD)v4 == 3 )
    v6 = 1;
  v7 = sub_1800233B0((unsigned __int64 *)(a1 + 1672), v4);
  return sub_18002732C(v7, a3, v6);
}
