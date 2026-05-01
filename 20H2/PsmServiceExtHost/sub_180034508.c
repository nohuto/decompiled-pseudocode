/*
 * XREFs of sub_180034508 @ 0x180034508
 * Callers:
 *     sub_180034234 @ 0x180034234 (sub_180034234.c)
 *     sub_1800425F4 @ 0x1800425F4 (sub_1800425F4.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180034508(__int64 a1)
{
  __int64 result; // rax

  memset((void *)(a1 + 16), 0, 0x80uLL);
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  result = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return result;
}
