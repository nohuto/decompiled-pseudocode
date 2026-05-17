/*
 * XREFs of _TppEnqueueTimer@8 @ 0x4B2B7991
 * Callers:
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 * Callees:
 *     _TppPHInsert@8 @ 0x4B2B7A2F (_TppPHInsert@8.c)
 */

int __fastcall TppEnqueueTimer(int a1, int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned __int64 v7; // kr00_8
  int result; // eax

  v3 = *(_DWORD *)(a2 + 200);
  v4 = 10000LL * *(unsigned int *)(a2 + 212);
  v5 = v4;
  v6 = *(_DWORD *)(a2 + 204);
  v7 = __PAIR64__(v6, v3) + __PAIR64__(HIDWORD(v4), v5);
  if ( (__int64)(__PAIR64__(v6, v3) + __PAIR64__(HIDWORD(v4), v5)) < __SPAIR64__(v6, v3) )
    v7 = 0x7FFFFFFFFFFFFFFFLL;
  *(_DWORD *)(a2 + 192) = v3;
  *(_DWORD *)(a2 + 196) = v6;
  *(_DWORD *)(a2 + 180) = a2 + 176;
  *(_DWORD *)(a2 + 188) = a2 + 184;
  *(_DWORD *)(a2 + 184) = a2 + 184;
  *(_DWORD *)(a2 + 176) = a2 + 176;
  TppPHInsert(a1 + 8);
  *(_QWORD *)(a2 + 168) = v7;
  *(_DWORD *)(a2 + 164) = a2 + 160;
  *(_DWORD *)(a2 + 160) = a2 + 160;
  *(_DWORD *)(a2 + 156) = a2 + 152;
  *(_DWORD *)(a2 + 152) = a2 + 152;
  result = TppPHInsert(a1 + 12);
  *(_BYTE *)(a2 + 222) |= 1u;
  *(_BYTE *)(a2 + 220) = 1;
  return result;
}
