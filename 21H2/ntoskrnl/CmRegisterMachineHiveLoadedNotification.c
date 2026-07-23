/*
 * XREFs of CmRegisterMachineHiveLoadedNotification @ 0x140790860
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140790AA0 (CmpFindMachineHiveByMountPoint.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmRegisterMachineHiveLoadedNotification(
        wchar_t *a1,
        wchar_t *a2,
        const UNICODE_STRING *a3,
        wchar_t ***a4)
{
  __int64 result; // rax
  wchar_t **PoolWithTag; // rax
  wchar_t **v9; // rbx
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
    PoolWithTag = (wchar_t **)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x32394D43u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      *((_BYTE *)PoolWithTag + 39) = 0;
      *((_WORD *)PoolWithTag + 18) = 0;
      PoolWithTag[2] = a1;
      PoolWithTag[3] = a2;
      *((_DWORD *)PoolWithTag + 8) = 0;
      *((_BYTE *)PoolWithTag + 38) = 0;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpMachineHiveList[18], 0LL);
      v10 = (wchar_t ***)CmpMachineHiveList[20];
      if ( *v10 != &CmpMachineHiveList[19] )
        __fastfail(3u);
      v9[1] = (wchar_t *)v10;
      *v9 = (wchar_t *)&CmpMachineHiveList[19];
      *v10 = v9;
      CmpMachineHiveList[20] = (wchar_t *)v9;
      *((_BYTE *)v9 + 37) = 1;
      ExReleasePushLockEx((ULONG_PTR)&CmpMachineHiveList[18], 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpMachineHiveList[17], 0LL);
      if ( HIDWORD(CmpMachineHiveList[14]) == 1
        && _InterlockedIncrement((volatile signed __int32 *)&CmpMachineHiveList[22]) == 1 )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)CmpMachineHiveList[21], DelayedWorkQueue);
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
