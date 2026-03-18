/*
 * XREFs of MmEnumerateSystemImages @ 0x140814DC0
 * Callers:
 *     EtwpSysModuleRunDown @ 0x140814C74 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099B8FC (PopIdleWakeGenerateDescriptionString.c)
 *     EtwpCoverageSamplerStart @ 0x1409F36F4 (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x140A0350C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A03DA4 (ExpCovResetInformation.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     MmGetNextSession @ 0x1402A1770 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     MiReleaseResourceLite @ 0x1402D8E00 (MiReleaseResourceLite.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v2; // r15d
  _KPROCESS *Process; // r8
  unsigned __int64 v6; // rbp
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r14
  void *v10; // rbx
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  _OWORD v14[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(v14, 0, sizeof(v14));
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    v6 = 0LL;
  else
    v6 = Process[1].Affinity.StaticBitmap[25];
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
        v10 = (void *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession) >= 0 )
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
      ObfDereferenceObject(v10);
    }
    if ( v2 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  MiReleaseResourceLite((__int64)Lock);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
