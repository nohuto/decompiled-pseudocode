/*
 * XREFs of ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x180081314
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180032AE0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800072BC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x1800807C0 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180080BD0 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CFA74 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession(struct IInspectable **a1)
{
  struct IInspectable *v2; // rcx
  _QWORD *v3; // rax
  UniqueExtendedExecutionSession *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  UniqueExtendedExecutionSession *v11; // rcx
  UniqueExtendedExecutionSession *v12; // rdx
  UniqueExtendedExecutionSession *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  struct IInspectable *v16; // rcx
  struct IInspectable *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct IInspectable *v20; // [rsp+70h] [rbp+38h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp+40h] BYREF
  UniqueExtendedExecutionSession *v22; // [rsp+80h] [rbp+48h] BYREF
  struct IInspectable *v23; // [rsp+88h] [rbp+50h] BYREF

  *a1 = 0LL;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v20 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    v20 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, struct IInspectable **))(*UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession
                                                                       + 24LL))(
           UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v20) >= 0 )
    {
      if ( v20 )
      {
        CDMUtilsUnlockTelemetry::ReusingExistingExtendedExecution();
        v2 = v20;
        if ( v20 )
        {
          ((void (__fastcall *)(struct IInspectable *))v20->lpVtbl->AddRef)(v20);
          v2 = v20;
        }
        *a1 = v2;
LABEL_43:
        v5 = 0;
        goto LABEL_44;
      }
    }
  }
  v23 = 0LL;
  v3 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (UniqueExtendedExecutionSession *)v3;
  v21 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_14:
    v8 = 219LL;
    goto LABEL_35;
  }
  v6 = v3 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
  *((_QWORD *)v4 + 7) = 1LL;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable';
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)v4 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v4 = &UniqueExtendedExecutionSession::`vftable';
  *v6 = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)v4 + 5) = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  v22 = v4;
  v21 = 0LL;
  v5 = UniqueExtendedExecutionSession::RuntimeClassInitialize(v4);
  v7 = *(_QWORD *)v4;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(UniqueExtendedExecutionSession *, GUID *, struct IInspectable **))v7)(
           v4,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v23);
    v7 = *(_QWORD *)v4;
  }
  (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(v7 + 16))(v4);
  if ( v5 < 0 )
    goto LABEL_14;
  v9 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
  UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v21 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, _QWORD **))v23->lpVtbl->QueryInterface)(
         v23,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v21);
  v10 = v21;
  if ( v5 >= 0 )
  {
    v22 = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD *, UniqueExtendedExecutionSession **))(*v21 + 24LL))(v21, &v22);
    if ( v5 >= 0 )
    {
      v12 = v22;
      v13 = v22;
      if ( v22 )
      {
        (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v22 + 8LL))(v22);
        v12 = v22;
      }
      v14 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = v13;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v12 = v22;
      }
      if ( v12 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      }
      v5 = 0;
      goto LABEL_33;
    }
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v10 = v21;
  }
  if ( v10 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  }
LABEL_33:
  if ( v5 >= 0 )
  {
    v17 = v23;
    if ( v23 )
    {
      ((void (__fastcall *)(struct IInspectable *))v23->lpVtbl->AddRef)(v23);
      v17 = v23;
    }
    *a1 = v17;
    if ( v17 )
    {
      v23 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v17->lpVtbl->Release)(v17);
    }
    v2 = v20;
    goto LABEL_43;
  }
  v8 = 220LL;
LABEL_35:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v5);
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->Release)(v16);
  }
  v2 = v20;
LABEL_44:
  if ( v2 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v2->lpVtbl->Release)(v2);
  }
  ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  return (unsigned int)v5;
}
