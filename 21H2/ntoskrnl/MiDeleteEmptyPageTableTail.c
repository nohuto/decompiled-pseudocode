/*
 * XREFs of MiDeleteEmptyPageTableTail @ 0x1403F4E40
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402286D0 (MiReleaseWalkLocks.c)
 *     RtlFindSetBitsEx @ 0x1402CD210 (RtlFindSetBitsEx.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlFindNextForwardRunClearEx @ 0x140587720 (RtlFindNextForwardRunClearEx.c)
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
  unsigned __int64 SizeOfBitMap; // r12
  ULONG64 v12; // r14
  __int64 NextForwardRunClear; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 *Buffer; // rcx
  _RTL_BITMAP_EX BitMapHeader; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  v4 = a1[2];
  v20 = 0LL;
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
        v12 = SetBits;
        if ( SetBits < v9 || SetBits == -1LL )
          break;
        NextForwardRunClear = RtlFindNextForwardRunClearEx(&BitMapHeader, SetBits, &v20);
        v14 = v20;
        v21 = NextForwardRunClear;
        if ( !NextForwardRunClear )
          v14 = SizeOfBitMap;
        v15 = v14 - v12;
        v16 = v7 + 8 * v12;
        *v5 = v16;
        v5[1] = v16 + 8 * v15 - 8;
        if ( i )
          MiDeleteEmptyPageTableCommit(a1);
        else
          MiDeletePteRun(a1[3], (__int64)v5);
        v9 = v21 + v12 + v15;
      }
      while ( v9 < SizeOfBitMap );
      if ( !i )
      {
        if ( !v5[12] )
          break;
        MiReleaseWalkLocks((__int64)a1);
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
