/*
 * XREFs of ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18025C7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180067450 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801A42A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A6BA8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023E80C (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180243214 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 *     ??$AsWeak@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@YAJPEAVApplicationViewBackedViewHostItem@@PEAVWeakRef@01@@Z @ 0x180258294 (--$AsWeak@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@YAJPEAVApplicationViewBackedViewHo.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_afa766b05c8b85e15a4aa8e998e375f4__&_ @ 0x180258DA8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_afa766b05c8b85e15a4aa8e998e375f4__-_.c)
 *     ??1ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1802595B8 (--1ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     _lambda_afa766b05c8b85e15a4aa8e998e375f4_::operator() @ 0x1802595E4 (_lambda_afa766b05c8b85e15a4aa8e998e375f4_--operator().c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAAXIPEBGW4FRAMEWORK_VIEW_TYPE@@_N@Z @ 0x18025AE10 (-StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@.c)
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x18025BA54 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationViewBackedViewHostItem::put_Visibility(ApplicationViewBackedViewHostItem *this, char a2)
{
  PCWSTR StringRawBuffer; // rbx
  _BYTE *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE *v16; // rdi
  int v17; // eax
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v21; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v22; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v23; // [rsp+48h] [rbp-C0h]
  _QWORD v24[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 28), 0LL);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"ApplicationViewBackedViewHostItem_put_Visibility");
  v24[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::`vftable';
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::StartActivity(
    (__int64)v24,
    *((_DWORD *)this + 58),
    (__int64)StringRawBuffer,
    *((_DWORD *)this + 62),
    a2 != 0);
  *((_BYTE *)this + 252) = a2 != 0;
  if ( a2 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v21);
    v5 = v21;
    if ( !v21 )
    {
      v6 = -2147024882;
      v7 = 2147942414LL;
      v8 = 150LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)v7);
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v21);
      goto LABEL_24;
    }
    v21[112] = 1;
    v5[113] = a2 != 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 320LL))(*((_QWORD *)this + 25));
    v6 = v9;
    if ( v9 < 0 )
    {
      v7 = (unsigned int)v9;
      v8 = 152LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v21);
LABEL_23:
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v24,
      v10);
    v6 = 0;
    goto LABEL_24;
  }
  v21 = 0LL;
  v22 = (__int64 *)&v21;
  v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v22);
  v12 = Microsoft::WRL::AsWeak<ApplicationViewBackedViewHostItem>((__int64)this, v11);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v22 = (__int64 *)this;
    v16 = v21;
    v23 = v21;
    if ( v21 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v21 + 8LL))(v21);
    if ( *((_DWORD *)this + 62) )
    {
      v17 = lambda_afa766b05c8b85e15a4aa8e998e375f4_::operator()((__int64)&v22);
      v6 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB3,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
          (const char *)(unsigned int)v17);
        if ( v16 )
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v16 + 16LL))(v16);
        goto LABEL_16;
      }
    }
    else
    {
      Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_afa766b05c8b85e15a4aa8e998e375f4____(
        v14,
        v13,
        v15,
        &v22);
      v16 = v23;
    }
    ApplicationViewBackedViewHostItem::_FirePresentationReadinessEvent(this, 0);
    if ( v16 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v16 + 16LL))(v16);
    v19 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v12);
LABEL_16:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_24:
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::~ApplicationViewBackedViewHostItem_put_Visibility((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility *)v24);
  return v6;
}
