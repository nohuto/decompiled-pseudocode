/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C02C73FC
 * Callers:
 *     DxgkUnload @ 0x1C02614A0 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C02D8FA0 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C00B1D10);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C00B1D90 )
    IoFreeWorkItem(qword_1C00B1D90);
  ExDeleteNPagedLookasideList(&stru_1C00B1C00);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_1C00B1F08 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C00B1F08);
    qword_1C00B1F08 = 0LL;
  }
}
