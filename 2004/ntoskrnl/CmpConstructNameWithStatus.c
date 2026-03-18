/*
 * XREFs of CmpConstructNameWithStatus @ 0x1405E8840
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405E5670 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructName @ 0x1405E8818 (CmpConstructName.c)
 *     CmpTraceSecurityChanging @ 0x14063EAE8 (CmpTraceSecurityChanging.c)
 *     CmRealKCBToVirtualPath @ 0x1406414C4 (CmRealKCBToVirtualPath.c)
 *     CmpDoWritethroughReparse @ 0x1406932A0 (CmpDoWritethroughReparse.c)
 *     CmAddLogForAction @ 0x1406FEAE8 (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x140708F74 (CmpConstructAndCacheName.c)
 *     CmpTraceHiveSaveStart @ 0x14071887C (CmpTraceHiveSaveStart.c)
 *     CmEtwRunDown @ 0x140866D18 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140867028 (CmpEtwDumpKcb.c)
 *     CmpDumpKeyBodyList @ 0x14086B9B8 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14086C7FC (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086E9F4 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405CD840 (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405E89F0 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140765C58 (CmpConstructNameFromKcbNameBlocks.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // bp
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int v7; // ebx
  struct _PRIVILEGE_SET *v8; // rdi
  __int16 v9; // dx
  PPRIVILEGE_SET v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // r10
  __int64 v15; // r10
  __int16 v16; // dx
  SIZE_T v17; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  WORD1(v19) = -1;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)Privileges = 0LL;
  --CurrentThread->KernelApcDisable;
  v21 = 0LL;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v5 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v7 = *(__int16 *)(a1 + 66);
  v8 = 0LL;
  v9 = *(_WORD *)(a1 + 66);
  if ( v7 >= 2 )
  {
    v17 = 8LL * (unsigned int)(v7 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v17, 0x35364D43u, v6);
    v8 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v8 = Privileges[1];
      v12 = -1073741670;
      goto LABEL_16;
    }
    memset(TransientPoolWithTag, 0, v17);
    v9 = *(_WORD *)(a1 + 66);
  }
  LOWORD(v19) = v7;
  Privileges[1] = v8;
  WORD1(v19) = v9;
  if ( v9 )
  {
    v14 = *(_QWORD *)(a1 + 192);
    if ( v14 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v19, v9, *(_QWORD *)(v14 + 16));
        v14 = *(_QWORD *)(v15 + 24);
        v9 = v16 - 1;
      }
      while ( v14 );
      v8 = Privileges[1];
      v9 = WORD1(v19);
    }
  }
  else
  {
    *((_QWORD *)&v19 + 1) = a1;
  }
  if ( v5 && v9 >= 0 )
  {
    do
    {
      v10 = v9 >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v8 + v9 - 2) : Privileges[v9 - 1];
      if ( HIWORD(v10[3].Control) && BYTE1(v10[3].Control) == 1 )
        break;
      if ( v10[2].PrivilegeCount != -1 )
      {
        if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
        {
          v11 = CmpConstructNameFromKeyNodes(&v19, &v21);
          v8 = Privileges[1];
          goto LABEL_14;
        }
        break;
      }
      --v9;
    }
    while ( v9 >= 0 );
  }
  v11 = CmpConstructNameFromKcbNameBlocks(a1, &v21);
LABEL_14:
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = 0;
    *a2 = v21;
  }
LABEL_16:
  if ( v8 )
    CmSiFreeMemory(v8);
  if ( v5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v12;
}
