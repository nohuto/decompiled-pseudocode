/*
 * XREFs of CmpConstructNameWithStatus @ 0x14061DE60
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpDoWritethroughReparse @ 0x1405E9D60 (CmpDoWritethroughReparse.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14061AC90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructName @ 0x14061DE38 (CmpConstructName.c)
 *     CmpTraceSecurityChanging @ 0x14068BFF8 (CmpTraceSecurityChanging.c)
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x1406E5394 (CmpConstructAndCacheName.c)
 *     CmpTraceHiveSaveStart @ 0x1407164EC (CmpTraceHiveSaveStart.c)
 *     CmEtwRunDown @ 0x1408659F8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140865D08 (CmpEtwDumpKcb.c)
 *     CmpDumpKeyBodyList @ 0x14086A668 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14086B4AC (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086CF34 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405CC470 (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKeyNodes @ 0x14061E010 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140764238 (CmpConstructNameFromKcbNameBlocks.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  BOOLEAN v6; // bp
  __int64 v7; // r8
  struct _LOOKASIDE_LIST_EX *v8; // r9
  int v9; // ebx
  struct _PRIVILEGE_SET *v10; // rdi
  __int16 v11; // dx
  PPRIVILEGE_SET v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // r10
  __int64 v20; // r10
  __int16 v21; // dx
  SIZE_T v22; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v24 = 0LL;
  WORD1(v24) = -1;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)Privileges = 0LL;
  --CurrentThread->KernelApcDisable;
  v26 = 0LL;
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v6 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v7, (__int64)v8);
  v9 = *(__int16 *)(a1 + 66);
  v10 = 0LL;
  v11 = *(_WORD *)(a1 + 66);
  if ( v9 >= 2 )
  {
    v22 = 8LL * (unsigned int)(v9 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v22, 0x35364D43u, v8);
    v10 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v10 = Privileges[1];
      v14 = -1073741670;
      goto LABEL_16;
    }
    memset(TransientPoolWithTag, 0, v22);
    v11 = *(_WORD *)(a1 + 66);
  }
  LOWORD(v24) = v9;
  Privileges[1] = v10;
  WORD1(v24) = v11;
  if ( v11 )
  {
    v19 = *(_QWORD *)(a1 + 192);
    if ( v19 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v24, v11, *(_QWORD *)(v19 + 16));
        v19 = *(_QWORD *)(v20 + 24);
        v11 = v21 - 1;
      }
      while ( v19 );
      v10 = Privileges[1];
      v11 = WORD1(v24);
    }
  }
  else
  {
    *((_QWORD *)&v24 + 1) = a1;
  }
  if ( v6 && v11 >= 0 )
  {
    do
    {
      v12 = v11 >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v10 + v11 - 2) : Privileges[v11 - 1];
      if ( HIWORD(v12[3].Control) && BYTE1(v12[3].Control) == 1 )
        break;
      if ( v12[2].PrivilegeCount != -1 )
      {
        if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
        {
          v13 = CmpConstructNameFromKeyNodes(&v24, &v26);
          v10 = Privileges[1];
          goto LABEL_14;
        }
        break;
      }
      --v11;
    }
    while ( v11 >= 0 );
  }
  v13 = CmpConstructNameFromKcbNameBlocks(a1, &v26);
LABEL_14:
  v14 = v13;
  if ( v13 >= 0 )
  {
    v14 = 0;
    *a2 = v26;
  }
LABEL_16:
  if ( v10 )
    CmSiFreeMemory(v10);
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  }
  return v14;
}
