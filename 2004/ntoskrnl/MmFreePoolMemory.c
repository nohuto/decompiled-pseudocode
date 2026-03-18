/*
 * XREFs of MmFreePoolMemory @ 0x14025307C
 * Callers:
 *     RtlpHpEnvFreeVA @ 0x140253038 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x140258558 (MmAllocatePoolMemory.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402D843C (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiDeterminePoolType @ 0x1402533A0 (MiDeterminePoolType.c)
 *     MiCountSystemPool @ 0x140258B10 (MiCountSystemPool.c)
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r12
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  int v8; // esi
  __int64 AnyMultiplexedVm; // rbp
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]

  v2 = *a2;
  v3 = *a1;
  v4 = (*a2 >> 12) + ((*a2 & 0xFFF) != 0);
  v5 = MiDeterminePoolType(*a1);
  if ( v5 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v3, v2, v6);
  if ( v5 == 33 )
    v7 = 1;
  else
    v7 = (v5 != 0) + 5;
  v8 = v6 | 0x4000;
  if ( (v6 & 0x8000) == 0 )
    v8 = v6;
  LODWORD(AnyMultiplexedVm) = v8;
  if ( (v8 & 0x4000) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v5 & 0x20) != 0 )
        AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 256;
      else
        AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(2);
      MiDeleteSystemPagableVm(AnyMultiplexedVm, 0LL, v10, v4, (v8 & 0x40000000) != 0, &v13);
      v11 = *((_QWORD *)&v14 + 1);
      MiReturnCommit(
        *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1));
      LOWORD(AnyMultiplexedVm) = v8;
    }
    else
    {
      if ( (v8 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(AnyMultiplexedVm) = v8 | 0x40000000;
      v11 = MiClearNonPagedPtes(v3, v4, (unsigned int)AnyMultiplexedVm, 1LL);
    }
    if ( v11 )
      MiCountSystemPool(v7, v11, 0LL);
  }
  if ( (AnyMultiplexedVm & 0x8000) != 0 )
  {
    if ( v7 == 1 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 868),
        -(int)(v4 >> 9));
    MiReturnSystemVa(v3, v2 + v3, v7);
  }
  return 0LL;
}
