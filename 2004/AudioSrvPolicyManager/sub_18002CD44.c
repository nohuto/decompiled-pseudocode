/*
 * XREFs of sub_18002CD44 @ 0x18002CD44
 * Callers:
 *     sub_18002CC18 @ 0x18002CC18 (sub_18002CC18.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 */

__int64 __fastcall sub_18002CD44(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-18h]

  v5 = 0;
  if ( a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a2 + 2 * v6) );
    v5 = sub_180018844(a1, a2, a2, v6, v8, (_QWORD *)(a1 + 16));
  }
  *(_QWORD *)(a1 + 24) = a3;
  if ( v5 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Eu, &stru_180045198, v5);
    }
    sub_180005724("CTransportControlRouterWorkItem::Initialize", 815, v5);
  }
  return (unsigned int)v5;
}
