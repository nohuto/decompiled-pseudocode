/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1406B1220
 * Callers:
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObDereferenceObjectEx @ 0x1402287B0 (ObDereferenceObjectEx.c)
 *     ExfUnblockPushLock @ 0x1403F2CC0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140603450 (ExMapHandleToPointer.c)
 */

__int64 __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 *v5; // rax
  volatile unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ebx
  __int64 result; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  v5 = ExMapHandleToPointer((unsigned int *)PspCidTable, a2);
  v11 = 0LL;
  v6 = *v5;
  *(_QWORD *)&v11 = *v5 & 0xFFFFFFFFFFFE0001uLL;
  *v5 = v11;
  v7 = PspCidTable;
  v8 = (unsigned __int16)(v6 >> 1);
  _InterlockedExchangeAdd64(v5, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(v7 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  result = KiLeaveGuardedRegionUnsafe(a1);
  if ( v8 )
    return ObDereferenceObjectEx(a3, v8);
  return result;
}
