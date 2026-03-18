/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C02C2E7C
 * Callers:
 *     DxgkUnload @ 0x1C025D1A0 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C02D4A20 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C00AFC10);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C00AFC90 )
    IoFreeWorkItem(qword_1C00AFC90);
  ExDeleteNPagedLookasideList(&stru_1C00AFB00);
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
  if ( qword_1C00AFE08 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C00AFE08);
    qword_1C00AFE08 = 0LL;
  }
}
