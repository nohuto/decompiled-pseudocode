/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x14093EF50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)a1, a2) + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 4096, 0LL);
    v6 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v7 = (_QWORD *)a1[1], (_QWORD *)*v7 != a1) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    a1[3] = 0LL;
    if ( (_QWORD *)v2[4] == v2 + 4 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(v4 + 4080), (unsigned __int64)v2);
      ExFreePoolWithTag(v2, 0);
    }
    ExReleasePushLockEx(v4 + 4096, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
