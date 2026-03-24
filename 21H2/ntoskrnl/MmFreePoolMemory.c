/*
 * XREFs of MmFreePoolMemory @ 0x1402FA848
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402A3484 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvFreeVA @ 0x1402FA804 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x14030B0D8 (MmAllocatePoolMemory.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x1402FA5E8 (MiReturnSystemVa.c)
 *     MiDeterminePoolType @ 0x1402FAD9C (MiDeterminePoolType.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiCountSystemPool @ 0x14030B920 (MiCountSystemPool.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-28h]

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
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
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
        &v14);
      v12 = *((_QWORD *)&v15 + 1);
      MiReturnCommit(
        *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        *((_QWORD *)&v15 + 1) - *((_QWORD *)&v14 + 1));
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
