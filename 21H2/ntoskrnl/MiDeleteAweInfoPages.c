/*
 * XREFs of MiDeleteAweInfoPages @ 0x14097D034
 * Callers:
 *     MiDeleteSectionAwe @ 0x1405AA5E8 (MiDeleteSectionAwe.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x1402C3410 (MiFreeMdlPageRun.c)
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14045EF10 (RtlFindNextForwardRunClearEx.c)
 *     MiGetAweInfoPartition @ 0x1405AAEC8 (MiGetAweInfoPartition.c)
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiLockAwePagesExclusive @ 0x1405AB970 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1405AC8D4 (MiUnlockAwePagesExclusive.c)
 */

__int64 __fastcall MiDeleteAweInfoPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v2; // rbx
  unsigned __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 AwePageSize; // rax
  int v7; // ecx
  unsigned __int64 *v8; // r12
  unsigned __int64 SetBits; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
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
  v5 = a1;
  AweInfoPartition = MiGetAweInfoPartition(a1);
  MiLockAwePagesExclusive(v5, (__int64)CurrentThread);
  AwePageSize = MiGetAwePageSize(v5);
  v7 = *(_DWORD *)(v5 + 8);
  v8 = (unsigned __int64 *)(v5 + 24);
  v26 = AwePageSize;
  if ( (v7 & 1) == 0 || *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[39] )
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
        v12 = *v8;
      v14 = v12 - v10;
      RtlClearBitsEx((__int64)v8, v10, v14);
      v15 = v26;
      v3 = v10 + v14 + v13;
      v16 = v26 * v10;
      v4 += v26 * v14;
      v17 = 0LL;
      v18 = 48 * v16 - 0x220000000000LL;
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
            v16 = 0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4);
          }
          v17 += v15;
          v18 += v20;
          --v14;
        }
        while ( v14 );
        v5 = a1;
        v8 = (unsigned __int64 *)(a1 + 24);
      }
      MiFreeMdlPageRun(v16, v17, 0);
    }
    while ( v3 < *v8 );
    if ( v4 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 17512), -v4);
      if ( (ULONG_PTR *)AweInfoPartition == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_140C53530, -v4);
    }
    CurrentThread = v23;
    v2 = v4;
  }
  MiUnlockAwePagesExclusive(v5, (__int64)CurrentThread);
  return v2;
}
