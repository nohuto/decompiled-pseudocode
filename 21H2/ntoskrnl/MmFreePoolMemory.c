/*
 * XREFs of MmFreePoolMemory @ 0x140366DA8
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x14023D6AC (RtlpHpVaMgrCtxFree.c)
 *     MmAllocatePoolMemory @ 0x14035225C (MmAllocatePoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x140366D64 (RtlpHpEnvFreeVA.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiCountSystemPool @ 0x140352D90 (MiCountSystemPool.c)
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r12
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // r8d
  int v7; // ebx
  int v8; // esi
  unsigned __int64 AnyMultiplexedVm; // rbp
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r15
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]

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
      v15 = 0LL;
      memset(v13, 0, sizeof(v13));
      v14 = 0LL;
      v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v5 & 0x20) != 0 )
        AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 192;
      else
        AnyMultiplexedVm = (unsigned __int64)MiGetAnyMultiplexedVm(2);
      MiDeleteSystemPagableVm(AnyMultiplexedVm, 0LL, v10, v4, (v8 & 0x40000000) != 0, v13);
      v11 = v14;
      MiReturnCommit(
        *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        v14 - *((_QWORD *)&v13[0] + 1));
      LOWORD(AnyMultiplexedVm) = v8;
    }
    else
    {
      if ( (v8 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(AnyMultiplexedVm) = v8 | 0x40000000;
      v11 = MiClearNonPagedPtes(v3, v4, AnyMultiplexedVm, 1u);
    }
    if ( v11 )
      MiCountSystemPool(v7, v11, 0);
  }
  if ( (AnyMultiplexedVm & 0x8000) != 0 )
  {
    if ( v7 == 1 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 796),
        -(int)(v4 >> 9));
    MiReturnSystemVa(v3, v2 + v3, v7);
  }
  return 0LL;
}
