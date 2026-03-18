/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x1409EB970
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v1 = (_QWORD *)a1[3];
  if ( v1 )
  {
    v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 4096, 0LL);
    v5 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[3] = 0LL;
    if ( (_QWORD *)v1[4] == v1 + 4 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(v3 + 4080), (unsigned __int64)v1);
      ExFreePoolWithTag(v1, 0);
    }
    ExReleasePushLockEx(v3 + 4096, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
