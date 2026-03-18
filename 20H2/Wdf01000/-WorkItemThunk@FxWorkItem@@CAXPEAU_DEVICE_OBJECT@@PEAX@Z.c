/*
 * XREFs of ?WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000C5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A018 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxWorkItem::WorkItemThunk(_DEVICE_OBJECT *DeviceObject, unsigned __int64 Context, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *v3; // rsi
  unsigned __int64 *v5; // rdi
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  char v8; // cl
  __int64 v9; // rcx
  void (__fastcall *v10)(unsigned __int64, __int64, __int64, __int64, char); // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  bool v15; // zf
  __int64 v16; // rax
  FxVerifierLock *v17; // rcx
  FxVerifierLock *v18; // rcx
  void (__fastcall *v19)(unsigned __int64, __int64, __int64, __int64, char); // rax
  unsigned __int64 v20; // rcx
  FxVerifierLock *v21; // rcx
  FxVerifierLock *v22; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
  *(_QWORD *)(Context + 200) = KeGetCurrentThread();
  PreviousIrql = 0;
  if ( v3->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00A9F68.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00A9F68.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v3;
  if ( *(char *)(Context + 24) < 0 && (v17 = *(FxVerifierLock **)(Context - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v17, &PreviousIrql, a3);
    v6 = PreviousIrql;
    v5 = (unsigned __int64 *)(Context + 112);
  }
  else
  {
    v5 = (unsigned __int64 *)(Context + 112);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
    PreviousIrql = v6;
  }
  ++*(_DWORD *)(Context + 132);
  v8 = *(_BYTE *)(Context + 24);
  *(_BYTE *)(Context + 129) = 0;
  if ( v8 < 0 && (v18 = *(FxVerifierLock **)(Context - 40)) != 0LL )
    FxVerifierLock::Unlock(v18, v6, v7);
  else
    KeReleaseSpinLock(v5, v6);
  v9 = *(_QWORD *)(Context + 144);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v9 + 16LL))(v9, &PreviousIrql);
    v19 = *(void (__fastcall **)(unsigned __int64, __int64, __int64, __int64, char))(unk_1C00A9FA0 + 24LL);
    if ( v19 )
      v19(Context + 160, 8LL, 1207959552LL, 3943LL, 2);
    v20 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(Context + 10) )
      v20 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(Context + 160))(v20);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(Context + 144) + 24LL))(
      *(_QWORD *)(Context + 144),
      PreviousIrql);
  }
  else
  {
    v10 = *(void (__fastcall **)(unsigned __int64, __int64, __int64, __int64, char))(unk_1C00A9FA0 + 24LL);
    if ( v10 )
      v10(Context + 160, 8LL, 1207959552LL, 3943LL, 2);
    if ( *(_WORD *)(Context + 10) )
      v11 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(Context + 160))(v11);
  }
  if ( *(char *)(Context + 24) < 0 && (v21 = *(FxVerifierLock **)(Context - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v21, &PreviousIrql, v12);
    v13 = PreviousIrql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(v5);
    PreviousIrql = v13;
  }
  v15 = (*(_DWORD *)(Context + 132))-- == 1;
  if ( v15 && !*(_BYTE *)(Context + 129) )
  {
    KeSetEvent((PRKEVENT)(Context + 168), 0, 0);
    v13 = PreviousIrql;
  }
  if ( *(char *)(Context + 24) < 0 && (v22 = *(FxVerifierLock **)(Context - 40)) != 0LL )
    FxVerifierLock::Unlock(v22, v13, v14);
  else
    KeReleaseSpinLock(v5, v13);
  v16 = *(_QWORD *)Context;
  *(_QWORD *)(Context + 200) = 0LL;
  (*(void (__fastcall **)(unsigned __int64, void (__fastcall *)(_DEVICE_OBJECT *, void *), __int64, const char *))(v16 + 16))(
    Context,
    FxWorkItem::WorkItemThunk,
    439LL,
    "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  if ( _InterlockedExchangeAdd(&v3->Refcnt, 0xFFFFFFFF) == 1 )
    KeSetEvent(&v3->DestroyEvent.m_Event, 0, 0);
}
