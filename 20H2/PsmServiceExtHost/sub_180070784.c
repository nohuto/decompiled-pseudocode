/*
 * XREFs of sub_180070784 @ 0x180070784
 * Callers:
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 * Callees:
 *     sub_180044640 @ 0x180044640 (sub_180044640.c)
 */

volatile signed __int64 *__fastcall sub_180070784(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  volatile signed __int64 *v4; // rax
  volatile signed __int64 *v5; // rdi

  v2 = a2;
  if ( a2 == -2 )
    v2 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockShared(a1);
  v4 = (volatile signed __int64 *)sub_180044640(a1, v2, 2);
  v5 = v4;
  if ( v4 && _InterlockedIncrement64(v4) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(a1);
  return v5;
}
