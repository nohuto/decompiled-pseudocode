/*
 * XREFs of sub_1C0018EF0 @ 0x1C0018EF0
 * Callers:
 *     sub_1C0018D98 @ 0x1C0018D98 (sub_1C0018D98.c)
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

__int64 __fastcall sub_1C0018EF0(__int64 a1, __int64 a2, KIRQL *a3)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 result; // rax

  v4 = (KSPIN_LOCK *)sub_1C0011220(a2);
  v5 = KeAcquireSpinLockRaiseToDpc(v4 + 256);
  v6 = *((unsigned int *)v4 + 447) + 56LL;
  *a3 = v5;
  result = *((unsigned int *)v4 + 384);
  v6 *= 32LL;
  *(_DWORD *)((char *)v4 + v6) = 0;
  *(_DWORD *)((char *)v4 + v6 + 4) = result;
  return result;
}
