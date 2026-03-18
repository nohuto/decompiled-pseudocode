/*
 * XREFs of EtwpQueryReferenceTime @ 0x1409316D0
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(__int64 a1, unsigned int a2, _OWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 == 0xFFFF )
    a2 = *(unsigned __int8 *)(a1 + 4208);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v6 = 0;
  if ( v5 )
  {
    *a3 = *(_OWORD *)(v5 + 320);
    EtwpReleaseLoggerContext((unsigned int *)v5, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
