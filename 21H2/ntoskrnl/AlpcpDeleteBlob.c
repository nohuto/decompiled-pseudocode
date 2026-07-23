/*
 * XREFs of AlpcpDeleteBlob @ 0x1406D97FC
 * Callers:
 *     NtAlpcDeletePortSection @ 0x1405FF960 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140655664 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x140657378 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x1406573B0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpMapLegacyPortView @ 0x1406A9428 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x1406AB4F0 (NtAlpcCreatePortSection.c)
 *     AlpcpFlushResourcesPort @ 0x1406D196C (AlpcpFlushResourcesPort.c)
 *     NtAlpcDeleteSecurityContext @ 0x1406DA3F0 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C35D0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
