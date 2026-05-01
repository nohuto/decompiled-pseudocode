/*
 * XREFs of ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180017CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionerPriority::Clone(RTL_SRWLOCK *this, struct IShellPositionerPriority **a2)
{
  RTL_SRWLOCK *v4; // r14
  BOOL v5; // r12d
  _QWORD *v6; // rbx
  __int64 *v7; // rdi
  LPUNKNOWN v8; // rsi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  __int64 v10; // rcx
  LPUNKNOWN v11; // rcx
  int v12; // eax
  int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  unsigned __int64 i; // rbx
  struct IShellPositionerPriority *v16; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-28h] BYREF
  HRESULT (__stdcall *v19)(IUnknown *, const IID *const, void **); // [rsp+28h] [rbp-20h]
  RTL_SRWLOCK *v20; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  struct IShellPositionerPriority *v22; // [rsp+98h] [rbp+50h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, struct IShellPositionerPriority **); // [rsp+A0h] [rbp+58h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+A8h] [rbp+60h] BYREF

  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v20 = v4;
  v5 = LOBYTE(this[4].Ptr) == 0;
  v22 = 0LL;
  v23 = 0LL;
  v6 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v6;
  if ( !v6 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)0x8007000ELL,
      (int)v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v13,
      (int)v18);
    v16 = v22;
    goto LABEL_20;
  }
  *v6 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7 = v6 + 3;
  v6[3] = 0LL;
  ppunkMarshal = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v8 = ppunkMarshal;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    v19 = QueryInterface;
    v10 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v19)(v8, &GUID_00000003_0000_0000_c000_000000000046, v6 + 3);
    }
    else
    {
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v6 + 3);
    }
  }
  v11 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
  }
  *((_DWORD *)v6 + 13) = 1;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable';
  v6[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `IShellPositionerPriority'};
  v6[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v6 = &PositionerPriority::`vftable';
  v6[4] = &PositionerPriority::`vftable'{for `IShellPositionerPriority'};
  v6[5] = &PositionerPriority::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
  v6[7] = 0LL;
  v6[8] = 0LL;
  *((_WORD *)v6 + 36) = 0;
  *((_BYTE *)v6 + v5 + 64) = 1;
  (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  v23 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IShellPositionerPriority **))v6;
  (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  v12 = (**v23)(v23, &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb, &v22);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v12,
      (int)v18);
  v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
  }
  if ( v13 < 0 )
    goto LABEL_28;
  for ( i = 0LL; i < 0xA; ++i )
  {
    if ( *((_BYTE *)&this[4].Ptr + i)
      && !(*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v22 + 32LL))(
            v22,
            (unsigned int)i) )
    {
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v22 + 40LL))(v22, (unsigned int)i);
    }
  }
  v16 = v22;
  if ( v22 )
  {
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v22 + 8LL))(v22);
    v16 = v22;
  }
  *a2 = v16;
  v13 = 0;
LABEL_20:
  if ( v16 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v13;
}
