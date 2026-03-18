/*
 * XREFs of MmRelocatePfnList @ 0x1408CE4DC
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405F0C80 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIsPfn @ 0x140206280 (MiIsPfn.c)
 *     MiIdentifyPfnWrapper @ 0x1402062C0 (MiIdentifyPfnWrapper.c)
 *     MiClaimPhysicalRun @ 0x140224DD8 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x1402264E0 (MiPfnsWorthTrying.c)
 *     MiUnlockDynamicMemoryShared @ 0x140273450 (MiUnlockDynamicMemoryShared.c)
 *     MiCreatePteCopyList @ 0x1402B7128 (MiCreatePteCopyList.c)
 *     MiLockDynamicMemoryShared @ 0x140333BEC (MiLockDynamicMemoryShared.c)
 *     MiReleasePteCopyList @ 0x140358E98 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x1403CCCA4 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned __int64 a4)
{
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // xmm1_8
  __int64 v13; // [rsp+58h] [rbp-9h] BYREF
  __int128 v14; // [rsp+60h] [rbp-1h] BYREF
  __int64 v15; // [rsp+70h] [rbp+Fh]
  __int128 v16; // [rsp+78h] [rbp+17h] BYREF
  __int64 v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+D8h] [rbp+77h] BYREF

  v18 = 0;
  v13 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( (unsigned int)a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_140C4DC8C) | ((_DWORD)a4 << byte_140C4DC8D);
  MiCreatePteCopyList(a1, 0x100uLL, (__int64)&v16, a4);
  CurrentThread = KeGetCurrentThread();
  v9 = &a2[3 * a1];
  MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  while ( a2 < v9 )
  {
    v10 = a2[1];
    v11 = 0LL;
    *(_QWORD *)&v14 = 0LL;
    v15 = 0LL;
    *((_QWORD *)&v14 + 1) = v10;
    if ( (unsigned int)MiIsPfn(v10) )
    {
      MiIdentifyPfnWrapper(48 * v10 - 0x58000000000LL, (__int64)&v14);
      v11 = v15;
      if ( v15 == a2[2] && (((unsigned __int64)v14 ^ *a2) & 0x1FFFFFFFFFFFE00LL) == 0 )
      {
        if ( !MiPfnsWorthTrying((unsigned __int16 *)&MiSystemPartition, 48 * v10 - 0x58000000000LL, 1LL, 0, &v18) )
        {
          if ( v18 == 1 )
            MiEmptyKernelStackCache();
          if ( !MiClaimPhysicalRun(
                  (__int64)&MiSystemPartition,
                  v10,
                  1LL,
                  0xFFFFFFFFFLL,
                  (__int64)&v16,
                  0x400000,
                  v7,
                  0LL,
                  *(unsigned __int8 *)(48 * v10 - 0x58000000000LL + 34) >> 6,
                  &v13)
            && v13 != -1 )
          {
            *((_QWORD *)&v14 + 1) = v13;
            goto LABEL_17;
          }
        }
        v11 = v15;
      }
    }
    v15 = v11 | 2;
LABEL_17:
    v12 = v15;
    *(_OWORD *)a2 = v14;
    a2[2] = v12;
    a2 += 3;
  }
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  MiReleasePteCopyList((__int64)&v16);
  return 0LL;
}
