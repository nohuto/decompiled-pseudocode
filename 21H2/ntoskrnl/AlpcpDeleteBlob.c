/*
 * XREFs of AlpcpDeleteBlob @ 0x1407A59D8
 * Callers:
 *     NtAlpcCreatePortSection @ 0x14066BAB0 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x14066C1DC (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeletePortSection @ 0x1406BE210 (NtAlpcDeletePortSection.c)
 *     AlpcpFlushResourcesPort @ 0x14074DC30 (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreateSecurityContext @ 0x1407A56B0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpDeleteView @ 0x1407A58A4 (AlpcpDeleteView.c)
 *     NtAlpcDeleteSecurityContext @ 0x1407A58E0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1407A817C (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x140881980 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
