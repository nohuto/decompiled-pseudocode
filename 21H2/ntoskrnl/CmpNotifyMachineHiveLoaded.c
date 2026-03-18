/*
 * XREFs of CmpNotifyMachineHiveLoaded @ 0x1403C7A8C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     CmpWorkItemQueueWork @ 0x1403C7B20 (CmpWorkItemQueueWork.c)
 */

__int64 __fastcall CmpNotifyMachineHiveLoaded(unsigned int a1)
{
  __int64 v1; // rbx
  wchar_t **v2; // rdi
  wchar_t **v3; // rbx
  wchar_t *v4; // rcx
  __int64 v6; // rax

  v1 = 23LL * a1;
  v2 = &CmpMachineHiveList[v1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpMachineHiveList[v1 + 18], 0LL);
  v3 = &CmpMachineHiveList[v1 + 19];
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (wchar_t *)v3 )
      break;
    if ( *((wchar_t ***)v4 + 1) != v3 || (v6 = *(_QWORD *)v4, *(wchar_t **)(*(_QWORD *)v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = (wchar_t *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    *((_BYTE *)v4 + 109) = 0;
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v4 + 8));
  }
  return ExReleasePushLockEx((ULONG_PTR)(v2 + 18), 0LL);
}
