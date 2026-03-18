/*
 * XREFs of EtwpAcquireTokenAccessInformation @ 0x140857B98
 * Callers:
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAcquireTokenAccessInformation(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  PVOID *v2; // rsi
  void *v3; // rbx
  unsigned int InformationToken; // esi

  v1 = (volatile signed __int64 *)(a1 + 688);
  v2 = (PVOID *)(a1 + 776);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  if ( *v2 )
  {
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
  v3 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
  InformationToken = SeQueryInformationToken(v3, TokenAccessInformation, v2);
  ObfDereferenceObject(v3);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return InformationToken;
}
