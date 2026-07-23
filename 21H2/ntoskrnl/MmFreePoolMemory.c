/*
 * XREFs of MmFreePoolMemory @ 0x140305598
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402208C4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvFreeVA @ 0x140305554 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x140315E28 (MmAllocatePoolMemory.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiCountSystemPool @ 0x140316670 (MiCountSystemPool.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2, unsigned int a3)
{
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // r14
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned __int64 AnyMultiplexedVm; // rbp
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-28h]

  v3 = *a2;
  v4 = *a1;
  BugCheckParameter4 = a3;
  v6 = (*a2 >> 12) + ((*a2 & 0xFFF) != 0);
  v7 = MiDeterminePoolType(*a1);
  if ( v7 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v4, v3, BugCheckParameter4);
  if ( v7 == 33 )
    v8 = 1;
  else
    v8 = (v7 != 0) + 5;
  v9 = BugCheckParameter4 | 0x4000;
  if ( (BugCheckParameter4 & 0x8000) == 0 )
    v9 = BugCheckParameter4;
  LODWORD(AnyMultiplexedVm) = v9;
  if ( (v9 & 0x4000) != 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v7 & 0x20) != 0 )
        AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 256;
      else
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
      ((void (__fastcall *)(unsigned __int64, _QWORD, __int64, unsigned __int64, unsigned int, __int128 *))MiDeleteSystemPagableVm)(
        AnyMultiplexedVm,
        0LL,
        v11,
        v6,
        (v9 >> 30) & 1,
        &v16);
      v12 = *((_QWORD *)&v17 + 1);
      MiReturnCommit(
        *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        *((_QWORD *)&v17 + 1) - *((_QWORD *)&v16 + 1),
        v13,
        v14);
      LOWORD(AnyMultiplexedVm) = v9;
    }
    else
    {
      if ( (v9 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(AnyMultiplexedVm) = v9 | 0x40000000;
      v12 = MiClearNonPagedPtes(v4, v6, AnyMultiplexedVm, 1u);
    }
    if ( v12 )
      MiCountSystemPool(v8, v12, 0LL);
  }
  if ( (AnyMultiplexedVm & 0x8000) != 0 )
  {
    if ( v8 == 1 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 868),
        -(int)(v6 >> 9));
    MiReturnSystemVa(v4, v3 + v4, v8);
  }
  return 0LL;
}
