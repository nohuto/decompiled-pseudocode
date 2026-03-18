/*
 * XREFs of AlpcpDeleteBlob @ 0x14068896C
 * Callers:
 *     NtAlpcCreatePortSection @ 0x14060D720 (NtAlpcCreatePortSection.c)
 *     AlpcpFlushResourcesPort @ 0x140629370 (AlpcpFlushResourcesPort.c)
 *     NtAlpcDeletePortSection @ 0x140649100 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140688724 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x14068A0E0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x14068AF78 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x1406DF9B0 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408BFE70 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
