/*
 * XREFs of MiDeleteEmptyPageTableTail @ 0x1403EDE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindSetBitsEx @ 0x140276700 (RtlFindSetBitsEx.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiReleaseWalkLocks @ 0x1402FC23C (MiReleaseWalkLocks.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403EDB04 (MiDeleteEmptyPageTableCommit.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFindNextForwardRunClearEx @ 0x140581A50 (RtlFindNextForwardRunClearEx.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableTail(__int64 *a1, _KPROCESS *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r13
  unsigned int i; // ebp
  unsigned __int64 v9; // rsi
  unsigned __int64 SetBits; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r14
  __int64 NextForwardRunClear; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  void *v19; // rcx
  unsigned __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  void *v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  v4 = a1[2];
  v23 = 0LL;
  MiFlushTbList(v4, a2);
  v5 = (unsigned __int64 *)a1[21];
  v21 = 512LL;
  v6 = *v5;
  v22 = v5 + 3;
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFF000uLL;
    for ( i = 0; i < 2; ++i )
    {
      v9 = 0LL;
      do
      {
        SetBits = RtlFindSetBitsEx(&v21, 1uLL, v9);
        v13 = v21;
        v14 = SetBits;
        if ( SetBits < v9 || SetBits == -1LL )
          break;
        NextForwardRunClear = RtlFindNextForwardRunClearEx(&v21, SetBits, &v23);
        v16 = v23;
        v24 = NextForwardRunClear;
        if ( !NextForwardRunClear )
          v16 = v13;
        v17 = v16 - v14;
        v18 = v7 + 8 * v14;
        *v5 = v18;
        v5[1] = v18 + 8 * v17 - 8;
        if ( i )
          MiDeleteEmptyPageTableCommit(a1);
        else
          MiDeletePteRun(a1[3], (__int64)v5);
        v9 = v24 + v14 + v17;
      }
      while ( v9 < v13 );
      if ( !i )
      {
        if ( !v5[12] )
          break;
        MiReleaseWalkLocks((__int64)a1, v11, v12);
      }
    }
    v19 = v22;
    *v5 = 0LL;
    v5[1] = 0LL;
    LOBYTE(v3) = (v13 & 0x1F) != 0;
    memset(v19, 0, 4 * ((v13 >> 5) + v3));
  }
  return 0LL;
}
