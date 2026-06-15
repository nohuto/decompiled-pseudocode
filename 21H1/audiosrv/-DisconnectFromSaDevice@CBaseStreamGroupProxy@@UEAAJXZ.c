/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18004FA30
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800359C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x18004F6D0 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800E45FC (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rdx
  _QWORD v12[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( *((_QWORD *)this + 11) )
  {
    v12[0] = off_180155C80;
    v12[7] = v12;
    (*(void (__fastcall **)(CBaseStreamGroupProxy *, _QWORD *))(*(_QWORD *)this + 352LL))(this, v12);
    v3 = *((_QWORD *)this + 11);
    v14 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      v11 = 720LL;
    }
    else
    {
      if ( !v14
        || (v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10)),
            v5 = v4,
            v4 >= 0) )
      {
        (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)this + 11) + 168LL))(
          *((_QWORD *)this + 11),
          this);
        v6 = (__int64 *)*((_QWORD *)this + 11);
        v7 = *v6;
        v8 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 144LL))(this);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v7 + 72))(v6, 2LL, 0xFFFFFFFFLL, v8);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        goto LABEL_7;
      }
      v11 = 724LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    goto LABEL_10;
  }
LABEL_7:
  v9 = *((_QWORD *)this + 11);
  if ( v9 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v5 = 0;
LABEL_10:
  if ( v1 )
    LeaveCriticalSection(v1);
  return v5;
}
