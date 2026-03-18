/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020D478
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020E160 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0264A10 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00219A8 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021A30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C0035EF4 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C021C488 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0265460 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  bool v12; // r14
  unsigned int i; // esi
  __int64 v14; // rdx
  __int64 v16; // rdx
  char v17; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 8043LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_QWORD *)this + 338);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v6 + 24) = 8048LL;
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_QWORD *)this + 338);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 640) + 8LL) + 120LL))(*(_QWORD *)(v5 + 648));
  if ( !KeResetEvent((PRKEVENT)this + 10) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 8072LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v18 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v17, v7);
  v10 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 33)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 33));
  v12 = IsResourceAcquiredSharedLite != 0;
  if ( v10 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 338)) < 0 )
    {
      *((_QWORD *)a2 + 12) = *((_QWORD *)this + 60);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 2647) = 1;
    if ( !v10 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 33));
      if ( v12 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 33), 1u);
    }
    KeSetEvent((PRKEVENT)this + 10, 0, 0);
    if ( v18 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v17, v16);
    return 0LL;
  }
  else
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 33));
    for ( i = 0; ; ++i )
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 33), 0) )
      {
        *((_DWORD *)a2 + 697) = i;
        goto LABEL_15;
      }
      if ( i >= dword_1C00B1170 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)this + 10, 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v17, v14);
    return 3221225653LL;
  }
}
