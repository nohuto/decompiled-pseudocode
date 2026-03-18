/*
 * XREFs of MmEnumerateSystemImages @ 0x140780120
 * Callers:
 *     EtwpSysModuleRunDown @ 0x14077FFD8 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F0DB0 (PopIdleWakeGenerateDescriptionString.c)
 *     EtwpCoverageSamplerStart @ 0x140943BFC (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x14095419C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140954A24 (ExpCovResetInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 *     MmGetNextSession @ 0x1402DC960 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     MiSessionLookupImage @ 0x14035CF98 (MiSessionLookupImage.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406A8DA0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8E00 (MmAcquireLoadLock.c)
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
  int v11; // eax
  struct _DMA_ADAPTER *i; // rcx
  _KPROCESS *NextSession; // rax
  _OWORD v15[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(v15, 0, sizeof(v15));
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
    LOBYTE(v11) = MmIsSessionAddress(v9);
    if ( v11 == 1 && (!v6 || !MiSessionLookupImage(v9)) )
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextSession = (_KPROCESS *)MmGetNextSession(i);
        v10 = (struct _DMA_ADAPTER *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v15) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v15);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v15);
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
