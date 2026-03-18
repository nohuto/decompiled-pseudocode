/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1407070E0
 * Callers:
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObDereferenceObjectEx @ 0x140281800 (ObDereferenceObjectEx.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 */

__int64 __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 *v5; // rax
  __int64 v6; // r8
  volatile unsigned __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ebx
  __int64 result; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  v5 = ExMapHandleToPointer((unsigned int *)PspCidTable, a2);
  v13 = 0LL;
  v7 = *v5;
  *(_QWORD *)&v13 = *v5 & 0xFFFFFFFFFFFE0001uLL;
  v8 = v7 >> 1;
  *v5 = v13;
  v9 = PspCidTable;
  v10 = (unsigned __int16)v8;
  _InterlockedExchangeAdd64(v5, 1uLL);
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(v9 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
  result = KiLeaveGuardedRegionUnsafe(a1, v9, v6, v8);
  if ( v10 )
    return ObDereferenceObjectEx(a3, v10);
  return result;
}
