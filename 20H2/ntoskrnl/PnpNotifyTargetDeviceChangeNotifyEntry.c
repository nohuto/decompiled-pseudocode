/*
 * XREFs of PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CCCDC
 * Callers:
 *     PnpProcessDeferredRegistrations @ 0x14064ACBC (PnpProcessDeferredRegistrations.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     PnpNotifyDriverCallback @ 0x140646E68 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x14073B300 (IopGetSessionIdFromPDO.c)
 */

void __fastcall PnpNotifyTargetDeviceChangeNotifyEntry(__int64 a1, __int64 a2, int *a3, _DWORD *a4)
{
  int SessionIdFromPDO; // edi
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // eax

  SessionIdFromPDO = -1;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( *(_DWORD *)(a1 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
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
