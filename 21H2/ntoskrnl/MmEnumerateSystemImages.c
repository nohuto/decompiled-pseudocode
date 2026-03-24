/*
 * XREFs of MmEnumerateSystemImages @ 0x140797DE0
 * Callers:
 *     EtwpSysModuleRunDown @ 0x140797C98 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F41A0 (PopIdleWakeGenerateDescriptionString.c)
 *     EtwpCoverageSamplerStart @ 0x14094718C (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x1409577DC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140958064 (ExpCovResetInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MmDetachSession @ 0x140298F40 (MmDetachSession.c)
 *     MmAttachSession @ 0x140298FE0 (MmAttachSession.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MiSessionLookupImage @ 0x1402CF668 (MiSessionLookupImage.c)
 *     MmGetNextSession @ 0x1402D5F90 (MmGetNextSession.c)
 *     MmIsSessionAddress @ 0x140349110 (MmIsSessionAddress.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v2; // r14d
  _KPROCESS *Process; // r8
  unsigned __int64 v6; // rbp
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r15
  struct _DMA_ADAPTER *v10; // rbx
  struct _DMA_ADAPTER *i; // rcx
  _KPROCESS *NextSession; // rax
  _OWORD v14[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(v14, 0, sizeof(v14));
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    v6 = 0LL;
  else
    v6 = Process[1].AffinityPadding[5];
  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = (PVOID *)PsLoadedModuleList;
  do
  {
    v9 = (unsigned __int64)v8[6];
    v10 = 0LL;
    if ( MmIsSessionAddress(v9) && (!v6 || !MiSessionLookupImage(v9)) )
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextSession = (_KPROCESS *)MmGetNextSession(i);
        v10 = (struct _DMA_ADAPTER *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v14) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v14);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v14);
      HalPutDmaAdapter(v10);
    }
    if ( v2 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
