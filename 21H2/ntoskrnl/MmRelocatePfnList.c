/*
 * XREFs of MmRelocatePfnList @ 0x140978C9C
 * Callers:
 *     PfpPfnPrioRequest @ 0x140739F40 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x14022B0E0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x14023502C (MiLockDynamicMemoryShared.c)
 *     MiCreatePteCopyList @ 0x14024B428 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140250BDC (MiReleasePteCopyList.c)
 *     MiClaimPhysicalRun @ 0x14027738C (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x140278460 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfnWrapper @ 0x1402B1D10 (MiIdentifyPfnWrapper.c)
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     MiEmptyKernelStackCache @ 0x1405A54BC (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MmRelocatePfnList(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // edx
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // xmm1_8
  __int64 v14; // [rsp+58h] [rbp-9h] BYREF
  __int128 v15; // [rsp+60h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh]
  __int128 v17; // [rsp+78h] [rbp+17h] BYREF
  __int64 v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+D8h] [rbp+77h] BYREF

  v19 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = 256;
  v8 = (a3 << byte_140C506CC) | (a4 << byte_140C506CD);
  if ( (unsigned __int64)(2 * a1) < 0x100 )
    v7 = 2 * a1;
  MiCreatePteCopyList(2uLL, v7, (__int64)&v17);
  CurrentThread = KeGetCurrentThread();
  v10 = &a2[3 * a1];
  MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  while ( a2 < v10 )
  {
    v11 = a2[1];
    v12 = 0LL;
    *(_QWORD *)&v15 = 0LL;
    v16 = 0LL;
    *((_QWORD *)&v15 + 1) = v11;
    if ( (unsigned int)MiIsPfn(v11) )
    {
      MiIdentifyPfnWrapper(48 * v11 - 0x220000000000LL, (__int64)&v15);
      v12 = v16;
      if ( v16 == a2[2] && (((unsigned __int64)v15 ^ *a2) & 0x1FFFFFFFFFFFE00LL) == 0 )
      {
        if ( !MiPfnsWorthTrying((__int64)&MiSystemPartition, 48 * v11 - 0x220000000000LL, 1LL, 0, &v19) )
        {
          if ( v19 )
            MiEmptyKernelStackCache((union _SLIST_HEADER *)&MiSystemPartition, 0);
          if ( !MiClaimPhysicalRun(
                  (__int64)&MiSystemPartition,
                  v11,
                  1LL,
                  qword_140C50840,
                  (__int64)&v17,
                  0x400000,
                  v8,
                  0LL,
                  *(unsigned __int8 *)(48 * v11 - 0x220000000000LL + 34) >> 6,
                  &v14)
            && v14 != -1 )
          {
            *((_QWORD *)&v15 + 1) = v14;
            goto LABEL_19;
          }
        }
        v12 = v16;
      }
    }
    v16 = v12 | 2;
LABEL_19:
    v13 = v16;
    *(_OWORD *)a2 = v15;
    a2[2] = v13;
    a2 += 3;
  }
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  MiReleasePteCopyList((__int64)&v17);
  return 0LL;
}
