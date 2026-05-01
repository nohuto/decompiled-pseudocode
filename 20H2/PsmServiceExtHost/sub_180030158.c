/*
 * XREFs of sub_180030158 @ 0x180030158
 * Callers:
 *     sub_1800301E8 @ 0x1800301E8 (sub_1800301E8.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180030158(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0xD8uLL);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_OWORD *)(a1 + 72) = 0LL;
  RtlInitializeSRWLock(a1 + 72);
  *(_DWORD *)(a1 + 80) = 0;
  result = -1LL;
  *(_QWORD *)(a1 + 144) = -1LL;
  *(_QWORD *)(a1 + 152) = -1LL;
  *(_QWORD *)(a1 + 192) = -1LL;
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 160) = 3;
  return result;
}
