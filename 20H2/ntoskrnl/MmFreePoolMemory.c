/*
 * XREFs of MmFreePoolMemory @ 0x140237AB4
 * Callers:
 *     RtlpHpEnvFreeVA @ 0x140237A70 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x1402CB684 (MmAllocatePoolMemory.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403066D4 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiDeterminePoolType @ 0x1402381E0 (MiDeterminePoolType.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     MiCountSystemPool @ 0x1402CB410 (MiCountSystemPool.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2, __int64 a3)
{
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // r14
  unsigned __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  int v9; // esi
  __int64 AnyMultiplexedVm; // rbp
  unsigned __int64 v11; // r8
  __int64 v12; // r15
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-28h]

  v3 = *a2;
  v4 = *a1;
  v5 = (*a2 >> 12) + ((*a2 & 0xFFF) != 0);
  v6 = MiDeterminePoolType(*a1, a2, a3);
  if ( v6 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v4, v3, v7);
  if ( v6 == 33 )
    v8 = 1;
  else
    v8 = (v6 != 0) + 5;
  v9 = v7 | 0x4000;
  if ( (v7 & 0x8000) == 0 )
    v9 = v7;
  LODWORD(AnyMultiplexedVm) = v9;
  if ( (v9 & 0x4000) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v6 & 0x20) != 0 )
        AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 256;
      else
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
      MiDeleteSystemPagableVm(AnyMultiplexedVm, 0LL, v11, v5, (v9 & 0x40000000) != 0, &v14);
      v12 = *((_QWORD *)&v15 + 1);
      MiReturnCommit(
        *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        *((_QWORD *)&v15 + 1) - *((_QWORD *)&v14 + 1));
      LOWORD(AnyMultiplexedVm) = v9;
    }
    else
    {
      if ( (v9 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(AnyMultiplexedVm) = v9 | 0x40000000;
      v12 = MiClearNonPagedPtes(v4, v5, (unsigned int)AnyMultiplexedVm, 1LL);
    }
    if ( v12 )
      MiCountSystemPool(v8, v12, 0LL);
  }
  if ( (AnyMultiplexedVm & 0x8000) != 0 )
  {
    if ( v8 == 1 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 868),
        -(int)(v5 >> 9));
    MiReturnSystemVa(v4, v3 + v4, v8, 0LL);
  }
  return 0LL;
}
