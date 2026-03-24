/*
 * XREFs of MiDeleteEmptyPageTableTail @ 0x1403F4E40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindSetBitsEx @ 0x140228910 (RtlFindSetBitsEx.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiReleaseWalkLocks @ 0x1402AA590 (MiReleaseWalkLocks.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlFindNextForwardRunClearEx @ 0x1405874F0 (RtlFindNextForwardRunClearEx.c)
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
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 NextForwardRunClear; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  void *v17; // rcx
  unsigned __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  void *v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  v4 = a1[2];
  v21 = 0LL;
  MiFlushTbList(v4, a2);
  v5 = (unsigned __int64 *)a1[21];
  v19 = 512LL;
  v6 = *v5;
  v20 = v5 + 3;
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFF000uLL;
    for ( i = 0; i < 2; ++i )
    {
      v9 = 0LL;
      do
      {
        SetBits = RtlFindSetBitsEx(&v19, 1uLL, v9);
        v11 = v19;
        v12 = SetBits;
        if ( SetBits < v9 || SetBits == -1LL )
          break;
        NextForwardRunClear = RtlFindNextForwardRunClearEx(&v19, SetBits, &v21);
        v14 = v21;
        v22 = NextForwardRunClear;
        if ( !NextForwardRunClear )
          v14 = v11;
        v15 = v14 - v12;
        v16 = v7 + 8 * v12;
        *v5 = v16;
        v5[1] = v16 + 8 * v15 - 8;
        if ( i )
          MiDeleteEmptyPageTableCommit(a1);
        else
          MiDeletePteRun(a1[3], (__int64)v5);
        v9 = v22 + v12 + v15;
      }
      while ( v9 < v11 );
      if ( !i )
      {
        if ( !v5[12] )
          break;
        MiReleaseWalkLocks((__int64)a1);
      }
    }
    v17 = v20;
    *v5 = 0LL;
    v5[1] = 0LL;
    LOBYTE(v3) = (v11 & 0x1F) != 0;
    memset(v17, 0, 4 * ((v11 >> 5) + v3));
  }
  return 0LL;
}
