/*
 * XREFs of PsCallImageNotifyRoutines @ 0x140628420
 * Callers:
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     MiDriverLoadSucceeded @ 0x140755764 (MiDriverLoadSucceeded.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x140233690 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140233750 (ExDereferenceCallBackBlock.c)
 *     KeAreAllApcsDisabled @ 0x1402339C0 (KeAreAllApcsDisabled.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PerfLogImageLoad @ 0x140628E6C (PerfLogImageLoad.c)
 */

_QWORD *__fastcall PsCallImageNotifyRoutines(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  _DWORD *v11; // r14
  _RTL_RUN_ONCE *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  void (__fastcall *Count)(__int128 *, __int64, _DWORD *); // rax
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v18 = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(FltMgrCallbacks + 24))(a4, 1024LL, &v17, &v18) >= 0 )
  {
    a1 = &v17;
  }
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 1088);
  if ( (PerfGlobalGroupMask & 4) != 0 )
    PerfLogImageLoad(a1, a2, a3 + 8);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    *(_DWORD *)(a3 + 8) |= 0x400u;
    v10 = 64LL;
    v11 = (_DWORD *)(a3 + 8);
    *(_QWORD *)a3 = 56LL;
    *(_QWORD *)(a3 + 48) = a4;
    v12 = &PspLoadImageNotifyRoutine;
    do
    {
      v13 = ExReferenceCallBackBlock((signed __int64 *)v12);
      v14 = v13;
      if ( v13 )
      {
        Count = (void (__fastcall *)(__int128 *, __int64, _DWORD *))v13[1].Count;
        if ( ((*v11 & 0x800) == 0 || (v14[2].Count & 1) != 0) && Count )
          Count(a1, v9, v11);
        ExDereferenceCallBackBlock((signed __int64 *)v12, v14);
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  if ( v18 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
