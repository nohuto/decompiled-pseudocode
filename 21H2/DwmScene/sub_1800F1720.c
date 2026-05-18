/*
 * XREFs of sub_1800F1720 @ 0x1800F1720
 * Callers:
 *     sub_1800A423C @ 0x1800A423C (sub_1800A423C.c)
 * Callees:
 *     sub_1800F12F4 @ 0x1800F12F4 (sub_1800F12F4.c)
 */

__int64 __fastcall sub_1800F1720(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rdx
  __int64 v6; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = (_QWORD *)(a1 + 1152);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 1152) = 0LL;
  *(_QWORD *)(a1 + 1160) = 0LL;
  v6 = a2[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *v4 = *a2;
  *(_QWORD *)(a1 + 1160) = a2[1];
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_QWORD *)(a1 + 1184) = 0LL;
  *(_QWORD *)(a1 + 1192) = 0LL;
  *(_QWORD *)(a1 + 1200) = 0LL;
  *(_QWORD *)(a1 + 1208) = 0LL;
  *(_QWORD *)(a1 + 1216) = 0LL;
  *(_QWORD *)(a1 + 1224) = 0LL;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_WORD *)(a1 + 1240) = 0;
  *(_BYTE *)(a1 + 1242) = 0;
  sub_1800F12F4((__int16 *)(a1 + 128), (unsigned __int64)v4, word_180214598);
  return a1;
}
