/*
 * XREFs of EtwpContainerStateWnfCallback @ 0x14062CA70
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403D35C8 (EtwpQueryPartitionRegistryInformation.c)
 */

__int64 EtwpContainerStateWnfCallback()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  if ( !*(_DWORD *)(EtwpHostSiloState + 4160) )
  {
    EtwpQueryPartitionRegistryInformation(
      (GUID *)(EtwpHostSiloState + 4176),
      (PVOID *)(EtwpHostSiloState + 4216),
      (_WORD *)(EtwpHostSiloState + 4224),
      (_DWORD *)(EtwpHostSiloState + 4228),
      (_QWORD *)(EtwpHostSiloState + 4208),
      (GUID *)(EtwpHostSiloState + 4192));
    ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v0 + 4168), NormalWorkQueue);
    *(_DWORD *)(v0 + 4160) = 1;
  }
  return 0LL;
}
