/*
 * XREFs of EtwpAcquireTokenAccessInformation @ 0x14092F2AC
 * Callers:
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAcquireTokenAccessInformation(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  PVOID *v2; // rsi
  struct _DMA_ADAPTER *v3; // rbx
  unsigned int InformationToken; // esi

  v1 = (volatile signed __int64 *)(a1 + 704);
  v2 = (PVOID *)(a1 + 792);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( *v2 )
  {
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
  v3 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  InformationToken = SeQueryInformationToken(v3, TokenAccessInformation, v2);
  HalPutDmaAdapter(v3);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return InformationToken;
}
