/*
 * XREFs of MmRelocatePfnList @ 0x1408D1C3C
 * Callers:
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x1402138C0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1402253FC (MiLockDynamicMemoryShared.c)
 *     MiReleasePteCopyList @ 0x140249314 (MiReleasePteCopyList.c)
 *     MiCreatePteCopyList @ 0x1402E5388 (MiCreatePteCopyList.c)
 *     MiClaimPhysicalRun @ 0x14030B77C (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     MiIdentifyPfnWrapper @ 0x140353EE0 (MiIdentifyPfnWrapper.c)
 *     MiEmptyKernelStackCache @ 0x1403D0414 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned __int64 a4)
{
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // xmm1_8
  __int64 v15; // [rsp+58h] [rbp-9h] BYREF
  __int128 v16; // [rsp+60h] [rbp-1h] BYREF
  __int64 v17; // [rsp+70h] [rbp+Fh]
  __int128 v18; // [rsp+78h] [rbp+17h] BYREF
  __int64 v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+D8h] [rbp+77h] BYREF

  v20 = 0;
  v15 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( (unsigned int)a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_140C4DECC) | ((_DWORD)a4 << byte_140C4DECD);
  MiCreatePteCopyList(a1, 0x100uLL, (__int64)&v18, a4);
  CurrentThread = KeGetCurrentThread();
  v9 = &a2[3 * a1];
  MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  while ( a2 < v9 )
  {
    v10 = a2[1];
    v11 = 0LL;
    *(_QWORD *)&v16 = 0LL;
    v17 = 0LL;
    *((_QWORD *)&v16 + 1) = v10;
    if ( (unsigned int)MiIsPfn(v10) )
    {
      MiIdentifyPfnWrapper(48 * v10 - 0x58000000000LL, (__int64)&v16, v12, v13);
      v11 = v17;
      if ( v17 == a2[2] && (((unsigned __int64)v16 ^ *a2) & 0x1FFFFFFFFFFFE00LL) == 0 )
      {
        if ( !MiPfnsWorthTrying((__int16 *)&MiSystemPartition, 48 * v10 - 0x58000000000LL, 1LL, 0, &v20) )
        {
          if ( v20 == 1 )
            MiEmptyKernelStackCache();
          if ( !MiClaimPhysicalRun(
                  (__int64)&MiSystemPartition,
                  v10,
                  1LL,
                  0xFFFFFFFFFLL,
                  (__int64)&v18,
                  0x400000,
                  v7,
                  0LL,
                  *(unsigned __int8 *)(48 * v10 - 0x58000000000LL + 34) >> 6,
                  &v15)
            && v15 != -1 )
          {
            *((_QWORD *)&v16 + 1) = v15;
            goto LABEL_17;
          }
        }
        v11 = v17;
      }
    }
    v17 = v11 | 2;
LABEL_17:
    v14 = v17;
    *(_OWORD *)a2 = v16;
    a2[2] = v14;
    a2 += 3;
  }
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  MiReleasePteCopyList((__int64)&v18);
  return 0LL;
}
