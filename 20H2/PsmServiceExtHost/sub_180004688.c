/*
 * XREFs of sub_180004688 @ 0x180004688
 * Callers:
 *     sub_180004F18 @ 0x180004F18 (sub_180004F18.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180004688(_QWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x88uLL);
  *a1 = _InterlockedIncrement64(&qword_1800B4220);
  *(_OWORD *)(a1 + 1) = 0LL;
  RtlInitializeSRWLock(a1 + 1);
  *((_DWORD *)a1 + 4) = 0;
  result = RtlInitializeConditionVariable(a1 + 3);
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[12] = 1LL;
  return result;
}
