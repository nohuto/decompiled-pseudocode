/*
 * XREFs of sub_1800DD6F8 @ 0x1800DD6F8
 * Callers:
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 * Callees:
 *     memset @ 0x18011E09A (memset.c)
 */

__int64 __fastcall sub_1800DD6F8(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  memset((void *)(a1 + 8), 0, 0x58uLL);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 8) = -1082130432;
  *(_DWORD *)(a1 + 12) = -1082130432;
  *(_DWORD *)(a1 + 28) = -1082130432;
  *(_DWORD *)(a1 + 32) = -1082130432;
  *(_DWORD *)(a1 + 16) = 2;
  *(_DWORD *)(a1 + 36) = 2;
  *(_DWORD *)(a1 + 48) = 2;
  _InterlockedExchange((volatile __int32 *)(a1 + 56), 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return result;
}
