/*
 * XREFs of ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180083AFC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F340 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180083B4C (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

void __fastcall ArManagerDestroy(struct _ACTIVITY_RESTARTER *a1)
{
  struct _ACTIVITY_RESTARTER *v1; // rbx

  v1 = ArGlobals;
  ArManagerRundown(ArGlobals);
  HamDisconnectFromServer(*((_QWORD *)v1 + 9));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
