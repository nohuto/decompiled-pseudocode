/*
 * XREFs of sub_18010E270 @ 0x18010E270
 * Callers:
 *     sub_18010CE74 @ 0x18010CE74 (sub_18010CE74.c)
 *     sub_18010D0D0 @ 0x18010D0D0 (sub_18010D0D0.c)
 *     sub_18010D340 @ 0x18010D340 (sub_18010D340.c)
 *     sub_18010D658 @ 0x18010D658 (sub_18010D658.c)
 *     sub_18010D840 @ 0x18010D840 (sub_18010D840.c)
 *     sub_18010D978 @ 0x18010D978 (sub_18010D978.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18010CB7C @ 0x18010CB7C (sub_18010CB7C.c)
 *     sub_18010E308 @ 0x18010E308 (sub_18010E308.c)
 */

__int64 __fastcall sub_18010E270(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 377) )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 176);
  sub_18010CB7C(a1, a1 + 136, *(unsigned __int8 *)(a1 + 376), v2);
  v3 = 0LL;
  if ( v2 == 2 )
  {
    if ( *(_BYTE *)(a1 + 376) )
      v3 = 3 - (unsigned int)(*(_DWORD *)(a1 + 372) != 1);
    else
      v3 = 1LL;
  }
  v4 = sub_18010E308(a1, v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_18004BD84(
    (int)retaddr,
    370,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    v4);
  return v5;
}
