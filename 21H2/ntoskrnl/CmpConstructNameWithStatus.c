/*
 * XREFs of CmpConstructNameWithStatus @ 0x1406E2750
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x14061A324 (CmpConstructAndCacheName.c)
 *     CmpDoWritethroughReparse @ 0x140649EA0 (CmpDoWritethroughReparse.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14065AA10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpTraceSecurityChanging @ 0x140662C28 (CmpTraceSecurityChanging.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     CmpTraceHiveSaveStart @ 0x14072A838 (CmpTraceHiveSaveStart.c)
 *     CmEtwRunDown @ 0x14086A4C8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x14086A7D8 (CmpEtwDumpKcb.c)
 *     CmpDumpKeyBodyList @ 0x14086EDA8 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14086FC38 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6C8C (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406E2970 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778DF8 (CmpConstructNameFromKcbNameBlocks.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _LOOKASIDE_LIST_EX *v7; // r9
  BOOLEAN v8; // r14
  int v9; // ebx
  struct _PRIVILEGE_SET *v10; // rdi
  __int16 v11; // dx
  SIZE_T v12; // rbp
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  unsigned int v14; // ebx
  __int64 v15; // r10
  __int64 v16; // r10
  __int16 v17; // dx
  PPRIVILEGE_SET v18; // rax
  int v19; // eax
  struct _KTHREAD *v20; // rcx
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0LL;
  WORD1(v23) = -1;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)Privileges = 0LL;
  --CurrentThread->KernelApcDisable;
  v25 = 0LL;
  v8 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, (__int64)v7);
  v9 = *(__int16 *)(a1 + 66);
  v10 = 0LL;
  v11 = *(_WORD *)(a1 + 66);
  if ( v9 >= 2 )
  {
    v12 = 8LL * (unsigned int)(v9 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v12, 0x35364D43u, v7);
    v10 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v10 = Privileges[1];
      v14 = -1073741670;
      goto LABEL_24;
    }
    memset(TransientPoolWithTag, 0, v12);
    v11 = *(_WORD *)(a1 + 66);
  }
  LOWORD(v23) = v9;
  Privileges[1] = v10;
  WORD1(v23) = v11;
  if ( v11 )
  {
    v15 = *(_QWORD *)(a1 + 192);
    if ( v15 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v23, v11, *(_QWORD *)(v15 + 16));
        v15 = *(_QWORD *)(v16 + 24);
        v11 = v17 - 1;
      }
      while ( v15 );
      v10 = Privileges[1];
      v11 = WORD1(v23);
    }
  }
  else
  {
    *((_QWORD *)&v23 + 1) = a1;
  }
  if ( v8 && v11 >= 0 )
  {
    do
    {
      v18 = v11 < 2 ? Privileges[v11 - 1] : (PPRIVILEGE_SET)*((_QWORD *)v10 + v11 - 2);
      if ( HIWORD(v18[3].Control) && BYTE1(v18[3].Control) == 1 )
        break;
      if ( v18[2].PrivilegeCount != -1 )
      {
        if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
        {
          v19 = CmpConstructNameFromKeyNodes(&v23, &v25);
          v10 = Privileges[1];
          goto LABEL_22;
        }
        break;
      }
      --v11;
    }
    while ( v11 >= 0 );
  }
  v19 = CmpConstructNameFromKcbNameBlocks(a1, &v25);
LABEL_22:
  v14 = v19;
  if ( v19 >= 0 )
  {
    v14 = 0;
    *a2 = v25;
  }
LABEL_24:
  if ( v10 )
    CmSiFreeMemory(v10);
  if ( v8 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v20 = KeGetCurrentThread();
    if ( v20->KernelApcDisable++ == -1
      && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v14;
}
