/*
 * XREFs of CmRegisterMachineHiveLoadedNotification @ 0x1408335F0
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     CmpWorkItemQueueWork @ 0x1403C7B20 (CmpWorkItemQueueWork.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpWorkItemInitialize @ 0x140833748 (CmpWorkItemInitialize.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140833A64 (CmpFindMachineHiveByMountPoint.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmRegisterMachineHiveLoadedNotification(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  char *Pool2; // rax
  char *v9; // rdi
  wchar_t ***v10; // rcx

  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  result = CmpFindMachineHiveByMountPoint(a3);
  if ( (int)result >= 0 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 112LL, 842616131LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x70uLL);
      *((_QWORD *)v9 + 10) = a1;
      *((_DWORD *)v9 + 26) = 0;
      *((_QWORD *)v9 + 11) = a2;
      CmpWorkItemInitialize(v9 + 16, 1LL, CmpMachineHiveLoadedWorkItem, v9);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpMachineHiveList[17], 0LL);
      if ( HIDWORD(CmpMachineHiveList[14]) == 1 )
      {
        CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v9 + 16));
      }
      else
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpMachineHiveList[18], 0LL);
        v10 = (wchar_t ***)CmpMachineHiveList[20];
        if ( *v10 != &CmpMachineHiveList[19] )
          __fastfail(3u);
        *((_QWORD *)v9 + 1) = v10;
        *(_QWORD *)v9 = &CmpMachineHiveList[19];
        *v10 = (wchar_t **)v9;
        CmpMachineHiveList[20] = (wchar_t *)v9;
        v9[109] = 1;
        ExReleasePushLockEx((ULONG_PTR)&CmpMachineHiveList[18], 0LL);
      }
      ExReleasePushLockEx((ULONG_PTR)&CmpMachineHiveList[17], 0LL);
      result = 0LL;
      *a4 = v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
