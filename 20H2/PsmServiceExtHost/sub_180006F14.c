/*
 * XREFs of sub_180006F14 @ 0x180006F14
 * Callers:
 *     sub_180007084 @ 0x180007084 (sub_180007084.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180006F14(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax

  memset((void *)(a4 + 56), 0, 0x88uLL);
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 32) = a1 + 32;
  *(_QWORD *)(a4 + 24) = 1LL;
  *(_QWORD *)(a4 + 16) = -1LL;
  *(_OWORD *)(a4 + 40) = 0LL;
  RtlInitializeSRWLock(a4 + 40);
  *(_DWORD *)(a4 + 48) = 0;
  result = 0LL;
  *(_OWORD *)(a4 + 64) = 0LL;
  *(_QWORD *)(a4 + 80) = -1LL;
  *(_BYTE *)(a4 + 184) &= 0xCFu;
  *(_BYTE *)(a4 + 184) |= 0x40u;
  *(_QWORD *)(a4 + 168) = a2;
  *(_DWORD *)(a4 + 176) = a3;
  *(_QWORD *)(a4 + 56) = a1;
  *(_QWORD *)(a4 + 88) = -1LL;
  *(_OWORD *)(a4 + 128) = 0LL;
  *(_OWORD *)(a4 + 144) = 0LL;
  *(_QWORD *)(a4 + 160) = 0LL;
  return result;
}
