/*
 * XREFs of PnpRebalance @ 0x14095A02C
 * Callers:
 *     PnpProcessRebalance @ 0x140564C24 (PnpProcessRebalance.c)
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 * Callees:
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402D1EB4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTraceObject @ 0x1402D2774 (PnpDiagnosticTraceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpBuildCmResourceLists @ 0x14081FCD8 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14081FECC (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpFindBestConfiguration @ 0x14081FF24 (PnpFindBestConfiguration.c)
 *     IopCommitConfiguration @ 0x140854DB4 (IopCommitConfiguration.c)
 *     PnpTraceRebalanceResult @ 0x1409576F0 (PnpTraceRebalanceResult.c)
 *     PnpCancelStopDeviceSubtree @ 0x140959BF0 (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x140959C24 (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x14095A388 (PnpStopDeviceSubtree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, char a4)
{
  __int64 v5; // rsi
  void *v6; // rcx
  unsigned __int16 *v9; // r12
  _QWORD *Pool2; // rax
  _QWORD *v11; // rdi
  int BestConfiguration; // ebx
  unsigned int v13; // r15d
  _DWORD *v14; // r12
  __int64 v15; // r13
  int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // r12
  _OWORD *v19; // rcx
  unsigned int v22; // [rsp+34h] [rbp-A5h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-A1h]
  unsigned int v24; // [rsp+40h] [rbp-99h]
  size_t Size; // [rsp+48h] [rbp-91h]
  void *v26; // [rsp+50h] [rbp-89h]
  __int128 v27; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v28[7]; // [rsp+70h] [rbp-69h] BYREF

  v5 = a3;
  v6 = *(void **)(a1 + 712);
  v26 = a2;
  v27 = 0LL;
  if ( v6 )
    memset(v6, 0, 0x58uLL);
  memset(v28, 0, sizeof(v28));
  v9 = (unsigned __int16 *)(a1 + 40);
  *((_QWORD *)&v28[2] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v28[1] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v28[3] + 1) = MEMORY[0xFFFFF78000000008];
  LOBYTE(v28[3]) = a4;
  PnpDiagnosticTraceObject(&KMPnPEvt_Rebalance_Start, (unsigned __int16 *)(a1 + 40));
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, (unsigned __int64)(unsigned int)IopNumberDeviceNodes << 6, 812674640LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    LODWORD(v28[1]) = 2;
    BestConfiguration = -1073741670;
    goto LABEL_16;
  }
  if ( (_DWORD)v5 )
    memmove(Pool2, a2, v5 << 6);
  v13 = 0;
  v14 = &v28[1];
  v22 = 0;
  BestConfiguration = 0;
  v15 = 0LL;
  Size = v5 << 6;
  v16 = (_DWORD)v11 + ((_DWORD)v5 << 6);
  for ( i = &v11[8 * v5]; ; v16 = (int)i )
  {
    DWORD1(v28[0]) = v15;
    v24 = v13;
    PnpFindRebalanceCandidates(v15, a1, v16, &v22, a4, (__int64)v28);
    v13 = v22;
    if ( !(_DWORD)v5 && !a4 )
    {
      v17 = 0;
      if ( !v22 )
      {
LABEL_13:
        BestConfiguration = -1073741823;
        *((_DWORD *)&v28[1] + v15) = 4 - (*(_DWORD *)(a1 + 300) != 779);
LABEL_14:
        PnpCancelStopDeviceSubtree((ULONG_PTR)IopRootDeviceNode);
        v18 = (unsigned __int64)i;
        goto LABEL_15;
      }
      while ( v11[8 * (unsigned __int64)v17] != *(_QWORD *)(a1 + 32) )
      {
        if ( ++v17 >= v22 )
          goto LABEL_13;
      }
    }
    if ( v24 != v22 )
      break;
    if ( !*v14 )
      *v14 = 5;
    if ( BestConfiguration != -1073739512 )
      BestConfiguration = -1073741823;
LABEL_29:
    v15 = (unsigned int)(v15 + 1);
    ++v14;
    if ( (unsigned int)v15 >= 2 )
      goto LABEL_14;
  }
  BestConfiguration = PnpFindBestConfiguration((__int64)v11, (unsigned int)v5 + v22, (__int64)&v27);
  if ( BestConfiguration < 0 )
  {
    if ( !*v14 )
      *v14 = 6;
    goto LABEL_29;
  }
  PnpStopDeviceSubtree(IopRootDeviceNode);
  IopCommitConfiguration((_QWORD **)&v27);
  v18 = (unsigned __int64)i;
  if ( (_DWORD)v5 )
    PnpBuildCmResourceLists((unsigned __int64)v11, (unsigned __int64)i, 0);
  PnpBuildCmResourceLists(v18, (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v5 + v13)], 1);
  if ( (_DWORD)v5 )
    memmove(v26, v11, Size);
LABEL_15:
  PnpFreeResourceRequirementsForAssignTable(v18, (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v5 + v13)]);
  ExFreePoolWithTag(v11, 0x30706E50u);
  v9 = (unsigned __int16 *)(a1 + 40);
LABEL_16:
  PnpTraceRebalanceResult(0, BestConfiguration, (int *)v28);
  if ( DWORD1(v28[0]) == 1 )
    PnpTraceRebalanceResult(1u, BestConfiguration, (int *)v28);
  v19 = *(_OWORD **)(a1 + 712);
  if ( BestConfiguration >= 0 )
  {
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x62655250u);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else if ( v19 )
  {
    *v19 = v28[0];
    v19[1] = v28[1];
    v19[2] = v28[2];
    v19[3] = v28[3];
    v19[4] = v28[4];
    *((_QWORD *)v19 + 10) = *(_QWORD *)&v28[5];
  }
  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_Rebalance_Stop, v9, BestConfiguration);
  return (unsigned int)BestConfiguration;
}
