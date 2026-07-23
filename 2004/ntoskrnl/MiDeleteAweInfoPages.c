/*
 * XREFs of MiDeleteAweInfoPages @ 0x1408D288C
 * Callers:
 *     MiDeleteSectionAwe @ 0x140546638 (MiDeleteSectionAwe.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x14021D6B0 (RtlFindSetBitsEx.c)
 *     RtlClearBitsEx @ 0x140250FD0 (RtlClearBitsEx.c)
 *     MiFreeMdlPageRun @ 0x1403175B8 (MiFreeMdlPageRun.c)
 *     ExGetCallBackBlockRoutine @ 0x14037FCA0 (ExGetCallBackBlockRoutine.c)
 *     MiGetAweInfoPartition @ 0x140546EC4 (MiGetAweInfoPartition.c)
 *     MiLockAwePagesExclusive @ 0x140547AE8 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x140548AD0 (MiUnlockAwePagesExclusive.c)
 *     RtlFindNextForwardRunClearEx @ 0x140582180 (RtlFindNextForwardRunClearEx.c)
 */

__int64 __fastcall MiDeleteAweInfoPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rdi
  ULONG64 v3; // r13
  __int64 v4; // r15
  _RTL_BITMAP_EX *v5; // r14
  __int64 v6; // rax
  int SizeOfBitMap; // ecx
  _RTL_BITMAP_EX *v8; // r12
  ULONG64 SetBits; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  ULONG_PTR v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rbp
  int v19; // r8d
  __int64 v20; // r12
  __int64 AweInfoPartition; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v23 = CurrentThread;
  v5 = (_RTL_BITMAP_EX *)a1;
  AweInfoPartition = MiGetAweInfoPartition(a1);
  MiLockAwePagesExclusive((__int64)v5, (__int64)CurrentThread);
  v6 = ExGetCallBackBlockRoutine((__int64)v5);
  SizeOfBitMap = v5->SizeOfBitMap;
  v8 = v5 + 1;
  v26 = v6;
  if ( (SizeOfBitMap & 1) == 0 || *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[39] )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v8, 1uLL, v3);
      v10 = SetBits;
      if ( SetBits < v3 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v8, SetBits, &v25);
      v12 = v25;
      v13 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        v12 = v8->SizeOfBitMap;
      v14 = v12 - v10;
      RtlClearBitsEx((__int64)v8, v10, v14);
      v15 = v26;
      v3 = v10 + v14 + v13;
      v16 = v26 * v10;
      v4 += v26 * v14;
      v17 = 0LL;
      v18 = 48 * v16 - 0x58000000000LL;
      v19 = *(unsigned __int8 *)(v18 + 34) >> 6;
      if ( v14 )
      {
        v20 = 48 * v26;
        do
        {
          if ( *(unsigned __int8 *)(v18 + 34) >> 6 != v19 )
          {
            MiFreeMdlPageRun(v16, v17, 0);
            v19 = *(unsigned __int8 *)(v18 + 34) >> 6;
            v15 = v26;
            v17 = 0LL;
            v16 = (v18 + 0x58000000000LL) / 48;
          }
          v17 += v15;
          v18 += v20;
          --v14;
        }
        while ( v14 );
        v5 = (_RTL_BITMAP_EX *)a1;
        v8 = (_RTL_BITMAP_EX *)(a1 + 16);
      }
      MiFreeMdlPageRun(v16, v17, 0);
    }
    while ( v3 < v8->SizeOfBitMap );
    if ( v4 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 7608), -v4);
      if ( (ULONG_PTR *)AweInfoPartition == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_140C4EDB8, -v4);
    }
    CurrentThread = v23;
    v2 = v4;
  }
  MiUnlockAwePagesExclusive((__int64)v5, (__int64)CurrentThread);
  return v2;
}
