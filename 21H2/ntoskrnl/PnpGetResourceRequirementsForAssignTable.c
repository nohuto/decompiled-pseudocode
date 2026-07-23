/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x14075028C
 * Callers:
 *     PnpAllocateResources @ 0x14074FEA8 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x1408B32C0 (PnpReallocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x1408B86D8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PipClearDevNodeFlags @ 0x140746C34 (PipClearDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x14075062C (IopQueryDeviceResources.c)
 *     IopRearrangeReqList @ 0x1407510BC (IopRearrangeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x140751A14 (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407531D0 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpFilterResourceRequirementsList @ 0x1407AD9DC (PnpFilterResourceRequirementsList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2, int *a3)
{
  int v3; // edi
  unsigned __int64 v6; // rbx
  int v7; // eax
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  void *v14; // rcx
  int v15; // ebp
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void *v21; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]

  v3 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0LL;
  *a3 = 0;
  if ( a1 < a2 )
  {
    v6 = a1 + 24;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 - 16);
      v8 = (_QWORD *)(v6 + 8);
      *(_QWORD *)(v6 + 8) = 0LL;
      if ( (v7 & 0x20) == 0 )
        break;
LABEL_13:
      v6 += 64LL;
      if ( v6 - 24 >= a2 )
      {
        v3 = *a3;
        return v3 == 0 ? 0xC0000001 : 0;
      }
    }
    *(_QWORD *)(v6 + 16) = 0LL;
    v9 = *(_QWORD *)(v6 - 24);
    *(_QWORD *)(v6 + 24) = 0LL;
    if ( v9 )
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
    else
      v10 = 0LL;
    ExAcquireFastMutex(&PiResourceListLock);
    if ( (*(_DWORD *)(v10 + 396) & 0x400) != 0 )
    {
      v21 = *(void **)(v10 + 440);
      if ( v21 )
      {
        ExFreePoolWithTag(v21, 0);
        *(_QWORD *)(v10 + 440) = 0LL;
        PipClearDevNodeFlags(v10, 512);
        *(_DWORD *)(v6 - 16) |= 0x400u;
      }
    }
    KeReleaseGuardedMutex(&PiResourceListLock);
    if ( !*(_QWORD *)v6 )
    {
      v11 = *(_QWORD *)(v10 + 440);
      if ( !v11 || (*(_DWORD *)(v10 + 396) & 0x200) != 0 )
      {
        v12 = IopQueryDeviceResources(*(_QWORD *)(v6 - 24), 1LL, v6, &v22);
        if ( v12 < 0 || !*(_QWORD *)v6 )
        {
          *(_DWORD *)(v6 + 32) = v12;
LABEL_12:
          *(_DWORD *)(v6 - 16) |= 0x20u;
          goto LABEL_13;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v14 = *(void **)(v10 + 440);
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0);
          PipClearDevNodeFlags(v10, 512);
        }
        *(_QWORD *)(v10 + 440) = *(_QWORD *)v6;
        KeReleaseGuardedMutex(&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v6 = v11;
        *(_DWORD *)(v6 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v6 - 16) & 0x200) != 0 )
    {
      if ( (int)PnpFilterResourceRequirementsList(*(void **)v6) >= 0 && v24 )
        *(_QWORD *)v6 = v24;
      else
        *(_DWORD *)(v6 - 16) &= ~0x200u;
    }
    v15 = IopResourceRequirementsListToReqList(v6 - 24, v6 + 8);
    if ( v15 >= 0 )
    {
      v16 = *v8;
      if ( *v8 )
      {
        IopRearrangeReqList(*v8);
        if ( *(_QWORD *)(v16 + 24) )
        {
          v19 = *(_DWORD *)(v16 + 32);
          v20 = 0;
          *(_DWORD *)(v6 + 32) = v15;
          if ( v19 >= 3 )
            v20 = v19;
          ++*a3;
          *(_DWORD *)(v6 - 8) = v20;
          goto LABEL_13;
        }
        PnpFreeResourceRequirementsForAssignTable(v6 - 24, v6 + 40, v17, v18);
        v15 = -1073741438;
      }
    }
    *(_DWORD *)(v6 + 32) = v15;
    goto LABEL_12;
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
