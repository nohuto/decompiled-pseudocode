/*
 * XREFs of MmEnumerateSystemImages @ 0x140797FE0
 * Callers:
 *     EtwpSysModuleRunDown @ 0x140797E98 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F4300 (PopIdleWakeGenerateDescriptionString.c)
 *     EtwpCoverageSamplerStart @ 0x14094735C (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x1409579AC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140958234 (ExpCovResetInformation.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiSessionLookupImage @ 0x14024D9E8 (MiSessionLookupImage.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DMA_ADAPTER *i; // rcx
  ULONG_PTR NextSession; // rax
  _OWORD v17[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(v17, 0, sizeof(v17));
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
        NextSession = MmGetNextSession(i);
        v10 = (struct _DMA_ADAPTER *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v17);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v17);
      HalPutDmaAdapter(v10);
    }
    if ( v2 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock, v11, v12, v13);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
