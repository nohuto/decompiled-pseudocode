/*
 * XREFs of PnpAllocateResources @ 0x14074FEA8
 * Callers:
 *     PnpAssignResourcesToDevices @ 0x14074FD90 (PnpAssignResourcesToDevices.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140746C34 (PipClearDevNodeFlags.c)
 *     PnpBuildCmResourceLists @ 0x14074F70C (PnpBuildCmResourceLists.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x140752800 (IopCommitConfiguration.c)
 *     PnpFindBestConfiguration @ 0x1407528A4 (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407531D0 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x1407532F8 (IopReleaseFilteredBootResources.c)
 *     PnpRebalance @ 0x1408B8904 (PnpRebalance.c)
 */

__int64 __fastcall PnpAllocateResources(unsigned int a1, _DWORD *a2, char a3, _BYTE *a4)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rbx
  int ResourceRequirementsForAssignTable; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // r15d
  __int64 v18; // r8
  _DWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned int v21; // edi
  int *v22; // rcx
  __int64 v23; // rax
  int v24; // r15d
  _DWORD *v25; // rdi
  __int64 v26; // r14
  int BestConfiguration; // eax
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // eax
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int128 v35; // xmm4
  __int128 v36; // xmm5
  _DWORD *v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 i; // rdi
  int v40; // eax
  _DWORD *v41; // rcx
  unsigned __int64 v42; // rax
  __int128 v43; // [rsp+30h] [rbp-38h] BYREF
  size_t NumOfElements; // [rsp+80h] [rbp+18h] BYREF

  v4 = a1;
  v43 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v4;
  v9 = (unsigned __int64)&a2[16 * v4];
  ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(a2, v9, &NumOfElements);
  if ( ResourceRequirementsForAssignTable < 0 )
    goto LABEL_6;
  v15 = 0LL;
  v16 = 3221226029LL;
  v17 = 1;
  v18 = 64LL;
  if ( !IopBootConfigsReserved )
  {
    v19 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      while ( (int)v19[14] < 0 || *((_QWORD *)v19 + 3) )
      {
        v19 += 16;
        if ( (unsigned __int64)v19 >= v9 )
          goto LABEL_14;
      }
      v15 = 1LL;
    }
LABEL_14:
    if ( v19 != (_DWORD *)v9 && (unsigned __int64)a2 < v9 )
    {
      v37 = a2 + 2;
      v38 = ((unsigned __int64)((v4 << 6) - 1) >> 6) + 1;
      do
      {
        if ( (int)v37[12] < 0 || *((_QWORD *)v37 + 2) )
        {
          *v37 |= 0x20u;
          v37[12] = -1073741267;
        }
        v37 += 16;
        --v38;
      }
      while ( v38 );
    }
    if ( (_DWORD)v15 )
      goto LABEL_45;
  }
  v20 = a2;
  if ( (unsigned __int64)a2 < v9 )
  {
    while ( 1 )
    {
      v15 = *v20 ? *(_QWORD *)(*(_QWORD *)(*v20 + 312LL) + 40LL) : 0LL;
      if ( (*(_DWORD *)(v15 + 396) & 0x40) != 0 && v20[3] )
        break;
      v20 += 8;
      if ( (unsigned __int64)v20 >= v9 )
        goto LABEL_22;
    }
    v17 = 0;
  }
LABEL_22:
  if ( v20 == (_QWORD *)v9 || (unsigned __int64)a2 >= v9 )
  {
    v21 = NumOfElements;
  }
  else
  {
    v21 = NumOfElements;
    v22 = a2 + 2;
    do
    {
      v23 = *((_QWORD *)v22 - 1);
      if ( v23 )
        v15 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
      else
        v15 = 0LL;
      if ( (*(_DWORD *)(v15 + 396) & 0x40) == 0 || !*((_QWORD *)v22 + 2) )
      {
        v29 = *v22;
        if ( (*v22 & 0x20) == 0 )
        {
          v22[12] = -1073741267;
          *v22 = v29 | 0x20;
          --v21;
        }
      }
      v22 += 16;
    }
    while ( (unsigned __int64)(v22 - 2) < v9 );
  }
  if ( !v21 )
  {
    ResourceRequirementsForAssignTable = -1073741823;
    goto LABEL_45;
  }
  if ( v21 != (_DWORD)v4 )
  {
    v32 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      v15 = v9 - 64;
      do
      {
        if ( (v32[2] & 0x20) != 0 )
        {
          v9 -= 64LL;
          v33 = *(_OWORD *)v32;
          v34 = *((_OWORD *)v32 + 1);
          v35 = *((_OWORD *)v32 + 2);
          v36 = *((_OWORD *)v32 + 3);
          *(_OWORD *)v32 = *(_OWORD *)v15;
          *((_OWORD *)v32 + 1) = *(_OWORD *)(v15 + 16);
          *((_OWORD *)v32 + 2) = *(_OWORD *)(v15 + 32);
          *((_OWORD *)v32 + 3) = *(_OWORD *)(v15 + 48);
          *(_OWORD *)v15 = v33;
          *(_OWORD *)(v15 + 16) = v34;
          *(_OWORD *)(v15 + 32) = v35;
          *(_OWORD *)(v15 + 48) = v36;
          v15 -= 64LL;
        }
        else
        {
          v32 += 16;
        }
      }
      while ( (unsigned __int64)v32 < v9 );
    }
  }
  if ( v21 > 1 )
  {
    v30 = 0;
    v31 = a2 + 5;
    do
    {
      *v31 = v30++;
      v31 += 16;
    }
    while ( v30 < v21 );
    qsort(a2, v21, 0x40uLL, PnpCompareResourceRequestPriority);
  }
  if ( v17 )
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration(a2, v21, &v43, v16);
  else
    ResourceRequirementsForAssignTable = -1073741823;
  if ( ResourceRequirementsForAssignTable >= 0 )
  {
    ResourceRequirementsForAssignTable = IopCommitConfiguration(&v43, v15, v18, v16);
    for ( i = (unsigned __int64)a2; i < v9; i += 64LL )
    {
      if ( ResourceRequirementsForAssignTable < 0 )
        *(_DWORD *)(i + 56) = -1073741800;
      else
        PnpBuildCmResourceLists(i, i + 64, 0);
    }
    goto LABEL_44;
  }
  v24 = 0;
  v25 = a2;
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( *(_QWORD *)v25 )
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 312LL) + 40LL);
    else
      v26 = 0LL;
    BestConfiguration = PnpFindBestConfiguration(v25, 1LL, &v43, v16);
    ResourceRequirementsForAssignTable = BestConfiguration;
    if ( BestConfiguration >= 0 )
    {
      v24 = 1;
      ResourceRequirementsForAssignTable = IopCommitConfiguration(&v43, v28, v18, v16);
      if ( ResourceRequirementsForAssignTable < 0 )
        v25[14] = -1073741800;
      else
        PnpBuildCmResourceLists((unsigned __int64)v25, (unsigned __int64)(v25 + 16), 0);
      goto LABEL_42;
    }
    if ( BestConfiguration == -1073741670 )
      goto LABEL_43;
    if ( !v24 && (a2[2] & 0x80u) == 0 )
      break;
    v25[2] |= 0x20u;
    v25[14] = -1073741267;
LABEL_42:
    v25 += 16;
    if ( (unsigned __int64)v25 >= v9 )
      goto LABEL_43;
  }
  PipSetDevNodeFlags(v26, 0x40000);
  ResourceRequirementsForAssignTable = PnpRebalance(v26, v25, 1LL, 0LL);
  PipClearDevNodeFlags(v26, 0x40000);
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    v40 = -1073741800;
    if ( ResourceRequirementsForAssignTable == -1073739512 )
      v40 = -1073739512;
    v25[14] = v40;
    goto LABEL_42;
  }
  if ( a4 )
    *a4 = 1;
  v25 += 16;
LABEL_43:
  if ( (unsigned __int64)v25 < v9 )
  {
    if ( ResourceRequirementsForAssignTable == -1073741670 )
    {
      do
      {
        v25[14] = -1073741670;
        v25 += 16;
      }
      while ( (unsigned __int64)v25 < v9 );
    }
    else
    {
      v41 = v25 + 2;
      v42 = ((v9 - (unsigned __int64)v25 - 1) >> 6) + 1;
      do
      {
        *v41 |= 0x20u;
        v41[12] = -1073741267;
        v41 += 16;
        --v42;
      }
      while ( v42 );
    }
  }
LABEL_44:
  IopReleaseFilteredBootResources(a2, v9, v18, v16);
LABEL_45:
  PnpFreeResourceRequirementsForAssignTable(a2, v9, v18, v16);
LABEL_6:
  if ( !a3 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  return (unsigned int)ResourceRequirementsForAssignTable;
}
