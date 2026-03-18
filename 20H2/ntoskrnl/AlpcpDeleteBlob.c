/*
 * XREFs of AlpcpDeleteBlob @ 0x1405F16DC
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x1405E97AC (AlpcpFlushResourcesPort.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1405F2E2C (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1405F3130 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x14064A7D0 (NtAlpcDeletePortSection.c)
 *     AlpcpDeleteView @ 0x14064AC88 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x1406B7300 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcCreatePortSection @ 0x140709700 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x14070CA5C (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C5CB0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
