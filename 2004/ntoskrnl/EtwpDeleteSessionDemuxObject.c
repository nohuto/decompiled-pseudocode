/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x14093B950
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _RTL_BALANCED_NODE *v1; // rdi
  _RTL_RB_TREE *v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v1 = (_RTL_BALANCED_NODE *)a1[3];
  if ( v1 )
  {
    v3 = (_RTL_RB_TREE *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v3[256], 0LL);
    v5 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[3] = 0LL;
    if ( v1[1].Children[1] == (_RTL_BALANCED_NODE *)&v1[1].Right )
    {
      RtlRbRemoveNode(v3 + 255, v1);
      ExFreePoolWithTag(v1, 0);
    }
    ExReleasePushLockEx((ULONG_PTR)&v3[256], 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
