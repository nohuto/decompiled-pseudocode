/*
 * XREFs of MiCreateAweInfoBitMap @ 0x1408D5AEC
 * Callers:
 *     MiAllocateAweInfo @ 0x1408D4CE0 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408D6644 (MiResizeAweBitMap.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140321710 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     MiGetAweInfoPartition @ 0x14054C5D4 (MiGetAweInfoPartition.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateAweInfoBitMap(__int64 a1)
{
  _KPROCESS *Process; // r14
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int16 v5; // ax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  PVOID Pool; // rsi
  __int64 result; // rax
  int v10; // ebp

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = *(_QWORD *)(MiGetAweInfoPartition(a1) + 6920);
  v4 = Process[1].AffinityPadding[10];
  if ( v4 )
  {
    v5 = *(_WORD *)(v4 + 8);
    if ( (v5 == 332 || v5 == 452) && (unsigned __int64)(v3 + 1) > 0x100000000LL )
      v3 = 0xFFFFFFFFLL;
  }
  v6 = ExGetCallBackBlockRoutine(a1);
  if ( v6 == 1 )
    v7 = v3 + 1;
  else
    v7 = (~(v6 - 1) & (v3 + v6 - 1)) / v6;
  Pool = MiAllocatePool(64, 8 * ((v7 >> 6) + ((v7 & 0x3F) != 0)), 0x4C646156u);
  if ( !Pool )
    return 3221225626LL;
  if ( (*(_DWORD *)a1 & 1) != 0
    && (v10 = PsChargeProcessNonPagedPoolQuota(Process, 8 * ((v7 >> 6) + ((v7 & 0x3F) != 0))), v10 < 0) )
  {
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)v10;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v7;
    result = 0LL;
    *(_QWORD *)(a1 + 24) = Pool;
  }
  return result;
}
