/*
 * XREFs of AlpcpDeleteBlob @ 0x1406107EC
 * Callers:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406105A4 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x140611F60 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x140612DF8 (AlpcpDeleteView.c)
 *     NtAlpcCreatePortSection @ 0x140642870 (NtAlpcCreatePortSection.c)
 *     AlpcpFlushResourcesPort @ 0x140646F20 (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreateSecurityContext @ 0x1406BF430 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x14070A5A0 (NtAlpcDeletePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408BEB20 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  char v3; // al

  v1 = (volatile signed __int64 *)(a1 - 16);
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
  v3 = *(_BYTE *)(a1 - 32);
  if ( (v3 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v3 | 8;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    (*(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 32))(a1);
    return 1;
  }
}
