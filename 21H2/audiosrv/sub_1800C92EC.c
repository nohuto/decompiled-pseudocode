/*
 * XREFs of sub_1800C92EC @ 0x1800C92EC
 * Callers:
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_1800C92EC(__int64 a1, int a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  _DWORD *v7; // rax
  void *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x29u, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 728));
  }
  v4 = *(_QWORD *)(a1 + 728);
  v5 = 2 * *(_DWORD *)(v4 - 16) + 2;
  v6 = 2 * *(_DWORD *)(v4 - 16) + 74;
  v7 = sub_18006A1B0(v6);
  v8 = v7;
  if ( v7 )
  {
    *v7 = v6;
    v7[6] = v5;
    v7[1] = 32;
    v7[12] = a2;
    sub_180061BA0((_WORD *)v7 + 36, v5, *(_QWORD *)(a1 + 728));
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x2Au, (__int64)&unk_18015DEF0, v8);
    }
    v11 = MMDevAPI_12(v8, 0LL, v9, v10);
    sub_180033A70(v8);
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v11 < 0 )
    sub_18005E8F8((__int64)"CAudioSession::NotifyClientOfDisconnection", 2567, v11);
  return (unsigned int)v11;
}
