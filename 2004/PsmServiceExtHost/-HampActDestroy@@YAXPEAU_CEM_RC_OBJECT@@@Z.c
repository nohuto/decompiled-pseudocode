/*
 * XREFs of ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18000ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000AD04 (CempLockTrackerMarkAcquired.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActDestroy(struct _CEM_RC_OBJECT *a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  _QWORD *Value; // rax
  unsigned __int64 v9; // rdi

  v3 = (__int64 *)*((_QWORD *)a1 + 11);
  if ( v3 )
  {
    v4 = *v3;
    v3[1] = 0LL;
    (*(void (**)(void))(v4 + 16))();
  }
  v5 = *((_QWORD *)a1 + 10);
  if ( v5 )
  {
    CempLockTrackerMarkAcquired(v3, a2, 0LL);
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800B4218 = GetCurrentThreadId();
    v7 = (*(_QWORD *)(v5 + 592))-- == 1LL;
    if ( v7 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64), v6);
    dword_1800B4218 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)Value & 1) == 0 )
        __int2c();
      v7 = Value[1]-- == 1LL;
      if ( v7 )
        *Value &= ~1uLL;
    }
  }
  if ( *((_QWORD *)a1 + 3) )
    __int2c();
  if ( *((_QWORD *)a1 + 2) != -1LL )
  {
    v9 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v9 + 16);
    RtlRbRemoveNode(v9, a1);
    --*(_DWORD *)(v9 + 40);
    RtlReleaseSRWLockExclusive(v9 + 16);
    RtlWakeAllConditionVariable(v9 + 32);
  }
  *((_QWORD *)a1 + 4) |= 0xFFFFFFFFFFFFFFFCuLL;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
