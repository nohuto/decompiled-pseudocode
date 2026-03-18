/*
 * XREFs of MmEnumerateSystemImages @ 0x140780B00
 * Callers:
 *     EtwpSysModuleRunDown @ 0x1407809B8 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408EFAC0 (PopIdleWakeGenerateDescriptionString.c)
 *     EtwpCoverageSamplerStart @ 0x140942988 (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x140952ACC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140953354 (ExpCovResetInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     MiSessionLookupImage @ 0x14031F488 (MiSessionLookupImage.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     MmGetNextSession @ 0x14035D920 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _DMA_ADAPTER *i; // rcx
  _KPROCESS *NextSession; // rax
  _OWORD v18[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(v18, 0, sizeof(v18));
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
        if ( (int)MmAttachSession(NextSession, (__int64)v18) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v18);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v18);
      HalPutDmaAdapter(v10);
    }
    if ( v2 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock, v12, v13, v14);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
