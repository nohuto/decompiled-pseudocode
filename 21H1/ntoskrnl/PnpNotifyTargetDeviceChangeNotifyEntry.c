/*
 * XREFs of PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C6ACC
 * Callers:
 *     PnpProcessDeferredRegistrations @ 0x14070AA74 (PnpProcessDeferredRegistrations.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x140723A04 (IopGetSessionIdFromPDO.c)
 */

void __fastcall PnpNotifyTargetDeviceChangeNotifyEntry(__int64 a1, __int64 a2, int *a3, _DWORD *a4)
{
  int SessionIdFromPDO; // edi
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // eax

  SessionIdFromPDO = -1;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( *(_DWORD *)(a1 + 20) != (unsigned int)PsGetServerSiloServiceSessionId((__int64)CurrentServerSilo) )
    SessionIdFromPDO = IopGetSessionIdFromPDO(*(_QWORD *)(a1 + 88));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 72), 1u);
  if ( (SessionIdFromPDO == -1 || *(_DWORD *)(a1 + 20) == SessionIdFromPDO) && !*(_BYTE *)(a1 + 58) )
  {
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 80);
    v11 = PnpNotifyDriverCallback(a1, a2, a4);
  }
  else
  {
    *a4 = -1073741637;
    v11 = -1073741808;
  }
  *a3 = v11;
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
  KeLeaveCriticalRegion();
}
