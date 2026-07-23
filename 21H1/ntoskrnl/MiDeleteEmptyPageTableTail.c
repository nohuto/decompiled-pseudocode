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
  ULONG64 v9; // rsi
  ULONG64 SetBits; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 SizeOfBitMap; // r12
  ULONG64 v14; // r14
  __int64 NextForwardRunClear; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 *Buffer; // rcx
  _RTL_BITMAP_EX BitMapHeader; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  v4 = a1[2];
  v22 = 0LL;
  MiFlushTbList(v4, a2);
  v5 = (unsigned __int64 *)a1[21];
  BitMapHeader.SizeOfBitMap = 512LL;
  v6 = *v5;
  BitMapHeader.Buffer = v5 + 3;
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFF000uLL;
    for ( i = 0; i < 2; ++i )
    {
      v9 = 0LL;
      do
      {
        SetBits = RtlFindSetBitsEx(&BitMapHeader, 1uLL, v9);
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v14 = SetBits;
        if ( SetBits < v9 || SetBits == -1LL )
          break;
        NextForwardRunClear = RtlFindNextForwardRunClearEx(&BitMapHeader, SetBits, &v22);
        v16 = v22;
        v23 = NextForwardRunClear;
        if ( !NextForwardRunClear )
          v16 = SizeOfBitMap;
        v17 = v16 - v14;
        v18 = v7 + 8 * v14;
        *v5 = v18;
        v5[1] = v18 + 8 * v17 - 8;
        if ( i )
          MiDeleteEmptyPageTableCommit(a1);
        else
          MiDeletePteRun(a1[3], (__int64)v5);
        v9 = v23 + v14 + v17;
      }
      while ( v9 < SizeOfBitMap );
      if ( !i )
      {
        if ( !v5[12] )
          break;
        MiReleaseWalkLocks((__int64)a1, v11, v12);
      }
    }
    Buffer = BitMapHeader.Buffer;
    *v5 = 0LL;
    v5[1] = 0LL;
    LOBYTE(v3) = (SizeOfBitMap & 0x1F) != 0;
    memset(Buffer, 0, 4 * ((SizeOfBitMap >> 5) + v3));
  }
  return 0LL;
}
