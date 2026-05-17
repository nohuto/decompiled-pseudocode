/*
 * XREFs of RtlpHpVsContextFreeList @ 0x18010FF50
 * Callers:
 *     RtlpHpHeapCompact @ 0x180006AE4 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x18010FDA8 (RtlpHpVsContextFreeInternal.c)
 */

void __fastcall RtlpHpVsContextFreeList(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // ebp
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v4 = (_QWORD *)a3;
  v5 = a2;
  v7 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = a1;
    RtlAcquireSRWLockExclusive((unsigned __int64)a1, a2, a3, a4);
  }
  while ( v4 )
  {
    v8 = (__int64)(v4 - 2);
    v4 = (_QWORD *)*v4;
    RtlpHpVsContextFreeInternal((unsigned __int64)a1, a2, v8, v5, (__int64)&v9);
  }
  if ( !v7 )
    RtlReleaseSRWLockExclusive(v10);
}
