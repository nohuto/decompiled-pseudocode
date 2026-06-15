/*
 * XREFs of sub_1800CC1F0 @ 0x1800CC1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800CC1F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  if ( v2 <= 0x3E8 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 280LL))(*(_QWORD *)(a1 + 72));
  sub_18004BD84(
    (int)retaddr,
    317,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
    -2147024809);
  return 2147942487LL;
}
