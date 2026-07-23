/*
 * XREFs of IoEnumerateRegisteredFiltersList @ 0x14076CA80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     IopGetFsRegistrationInProgress @ 0x140506770 (IopGetFsRegistrationInProgress.c)
 */

NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v4; // ebx
  __int64 *v8; // rax
  ULONG v9; // esi
  bool v10; // cf
  __int64 v11; // rbx
  NTSTATUS i; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      i = -1073741267;
      goto LABEL_8;
    }
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  }
  v8 = (__int64 *)IopFsNotifyChangeQueueHead;
  v9 = DriverObjectListSize >> 3;
  while ( v8 != &IopFsNotifyChangeQueueHead )
  {
    v8 = (__int64 *)*v8;
    ++v4;
  }
  v10 = v9 < v4;
  *ActualNumberDriverObjects = v4;
  v11 = IopFsNotifyChangeQueueHead;
  for ( i = v10 ? 0xC0000023 : 0; v9; --v9 )
  {
    if ( (__int64 *)v11 == &IopFsNotifyChangeQueueHead )
      break;
    ObfReferenceObject(*(PVOID *)(v11 + 16));
    *DriverObjectList++ = *(PDRIVER_OBJECT *)(v11 + 16);
    v11 = *(_QWORD *)v11;
  }
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_8:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  return i;
}
