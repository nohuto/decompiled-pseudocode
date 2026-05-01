/*
 * XREFs of ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008450C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003EDF0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008455C (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

void __fastcall ArManagerDestroy(struct _ACTIVITY_RESTARTER *a1)
{
  struct _ACTIVITY_RESTARTER *v1; // rbx

  v1 = ArGlobals;
  ArManagerRundown(ArGlobals);
  HamDisconnectFromServer(*((_QWORD *)v1 + 9));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
