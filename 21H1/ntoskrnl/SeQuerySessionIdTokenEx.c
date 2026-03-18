/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x1406A6400
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x140684E24 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1406A61CC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1406A62B8 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x1406A64A4 (PsGetSiloBySessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v7; // si
  ULONG v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = 1;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v8 = *((_DWORD *)Token + 30);
  *SessionId = v8;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( v8 )
    v7 = (int)PsGetSiloBySessionId(v8, &v13) >= 0 && v8 == (unsigned int)PsGetServerSiloServiceSessionId(v13);
  *IsServiceSession = v7;
  return 0;
}
