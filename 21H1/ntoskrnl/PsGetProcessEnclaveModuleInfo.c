/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x14057EC8C
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140880E90 (DbgkpPostModuleMessages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MmGetEnclaveModuleList @ 0x140545C14 (MmGetEnclaveModuleList.c)
 *     PsFreeEnclaveModuleInfo @ 0x14057EC30 (PsFreeEnclaveModuleInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, char **a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int EnclaveModuleList; // r12d
  unsigned int v6; // r15d
  char *PoolWithTag; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r10
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *i; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *j; // rdx
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v22; // si
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD *v33; // r9
  int v35; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-30h]
  __int64 v37; // [rsp+40h] [rbp-28h]
  _QWORD *v38; // [rsp+48h] [rbp-20h]
  _QWORD *v39; // [rsp+50h] [rbp-18h]
  unsigned int v40; // [rsp+B0h] [rbp+48h]

  CurrentThread = KeGetCurrentThread();
  v40 = 0;
  EnclaveModuleList = 0;
  v6 = 0;
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = a1 + 2264;
  v36 = a1 + 2264;
  ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
  v9 = *(_QWORD *)(a1 + 2248);
  if ( v9 )
  {
    v10 = *(_QWORD **)(v9 + 8);
    v11 = v10;
    v37 = *(_QWORD *)(a1 + 2248);
    v38 = v10;
    v39 = v10;
    while ( 1 )
    {
      if ( !v11 )
        goto LABEL_8;
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v10 = v39;
        v11 = v38;
      }
      v12 = (_QWORD *)*v11;
      if ( (*v11 & 1) != 0 )
      {
LABEL_8:
        for ( i = v10 + 1; ; ++i )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5) )
          {
            v12 = 0LL;
            goto LABEL_13;
          }
          v12 = (_QWORD *)*i;
          if ( (*i & 1) == 0 )
            break;
        }
        v11 = (_QWORD *)*i;
        v39 = i;
        v10 = i;
        v38 = v12;
      }
      else
      {
        v11 = (_QWORD *)*v11;
        v38 = v12;
      }
LABEL_13:
      if ( !v12 )
        break;
      ++v6;
    }
    if ( v6 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x56455350u);
      if ( PoolWithTag )
      {
        v14 = *(_QWORD *)(a1 + 2248);
        v37 = v14;
        v15 = *(_QWORD **)(v14 + 8);
        v39 = v15;
        v16 = v15;
        v38 = v15;
        do
        {
          if ( !v16 )
            goto LABEL_25;
          if ( (*v16 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v15 = v39;
            v16 = v38;
          }
          v17 = (_QWORD *)*v16;
          if ( (*v16 & 1) != 0 )
          {
LABEL_25:
            for ( j = v15 + 1; ; ++j )
            {
              if ( (unsigned __int64)j >= *(_QWORD *)(v14 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 4) >> 5) )
              {
                v17 = 0LL;
                goto LABEL_30;
              }
              v19 = (_QWORD *)*j;
              if ( (*j & 1) == 0 )
                break;
            }
            v16 = (_QWORD *)*j;
            v39 = j;
            v15 = j;
            v38 = v19;
            v17 = v19;
          }
          else
          {
            v16 = (_QWORD *)*v16;
            v38 = v17;
          }
LABEL_30:
          if ( !v17 )
            break;
          EnclaveModuleList = MmGetEnclaveModuleList(
                                v17[4],
                                &PoolWithTag[16 * v40],
                                (unsigned int *)&PoolWithTag[16 * v40 + 8]);
          if ( EnclaveModuleList < 0 )
            break;
          ++v40;
        }
        while ( v40 < v6 );
        v8 = v36;
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v20 = KeGetCurrentThread();
  v35 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  else
    SessionId = -1;
  --v20->SpecialApcDisable;
  v22 = ++v20->AbAllocationRegionCount;
  v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  v24 = !_BitScanReverse((unsigned int *)&v25, v23);
  if ( v24 )
    goto LABEL_47;
  while ( 1 )
  {
    v26 = (__int64)&v20->LockEntries[v25];
    v23 &= ~(1 << v25);
    if ( (*(_BYTE *)(v26 + 26) & 1) != 0
      && (*(_DWORD *)(v26 + 32) & 1) == 0
      && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v26 + 40) == SessionId )
    {
      *(_BYTE *)(v26 + 26) &= ~1u;
      if ( *(_QWORD *)(v26 + 32) )
        break;
    }
    v24 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v24 )
      goto LABEL_47;
  }
  if ( !v26 )
  {
LABEL_47:
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v8, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v26 + 32) |= 2u;
    if ( *(__int64 *)(v26 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
    v27 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
    v28 = *(_DWORD *)(v26 + 88) & 0xFFFE0000;
    *(_BYTE *)(v26 + 25) &= ~1u;
    v35 = v27;
    *(_DWORD *)(v26 + 88) = v28;
    *(_QWORD *)(v26 + 32) = 0LL;
    v29 = (signed __int64)(v26 - (unsigned __int64)v20->LockEntries) / 96;
    if ( v22 == 1 )
      v20->AbEntrySummary |= 1 << v29;
    else
      _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v29);
  }
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v8, &v35);
  v24 = v20->SpecialApcDisable++ == -1;
  if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v31, v30, v32, v33);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v32, (__int64)v33);
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(PoolWithTag, v40);
  }
  else
  {
    *a2 = PoolWithTag;
    *a3 = v6;
  }
  return (unsigned int)EnclaveModuleList;
}
