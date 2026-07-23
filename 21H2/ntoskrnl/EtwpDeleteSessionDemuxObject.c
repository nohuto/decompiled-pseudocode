/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x14093F120
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1, __int64 a2)
{
  _RTL_BALANCED_NODE *v2; // rdi
  _RTL_RB_TREE *v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = (_RTL_BALANCED_NODE *)a1[3];
  if ( v2 )
  {
    v4 = (_RTL_RB_TREE *)*((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)a1, a2) + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[256], 0LL);
    v6 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v7 = (_QWORD *)a1[1], (_QWORD *)*v7 != a1) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    a1[3] = 0LL;
    if ( v2[1].Children[1] == (_RTL_BALANCED_NODE *)&v2[1].Right )
    {
      RtlRbRemoveNode(v4 + 255, v2);
      ExFreePoolWithTag(v2, 0);
    }
    ExReleasePushLockEx((ULONG_PTR)&v4[256], 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  }
}
