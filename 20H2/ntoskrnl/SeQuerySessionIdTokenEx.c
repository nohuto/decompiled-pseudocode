/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x14063BB10
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14063BC00 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x14063C64C (PiPnpRtlIsDeviceValidForSession.c)
 *     PiUEventApplyAdditionalFilters @ 0x140649748 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x14063BBB4 (PsGetSiloBySessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v7; // si
  ULONG v8; // ebp
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = 1;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v8 = *((_DWORD *)Token + 30);
  *SessionId = v8;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 )
    v7 = (int)PsGetSiloBySessionId(v8, &v10) >= 0 && v8 == (unsigned int)PsGetServerSiloServiceSessionId(v10);
  *IsServiceSession = v7;
  return 0;
}
