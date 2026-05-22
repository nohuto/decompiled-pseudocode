/*
 * XREFs of ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180020E80
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180020B84 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180020CF8 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800214C0 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180021588 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021D54 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180022E48 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceCollection@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@@Z @ 0x18002C8A0 (--$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006965C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x180094130 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::Initialize(SpatialRimDeviceCollection *this, void **a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // edi
  _QWORD *v12; // r14
  void *v13; // rdx
  HANDLE Event; // rdi
  unsigned int v15; // r8d
  const char *v16; // r9
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  RTL_SRWLOCK *Instance; // rdi
  unsigned int v23; // [rsp+20h] [rbp-78h]
  unsigned int v24; // [rsp+20h] [rbp-78h]
  __int128 v25; // [rsp+30h] [rbp-68h]
  char v26; // [rsp+40h] [rbp-58h]
  void **v27; // [rsp+50h] [rbp-48h] BYREF
  __int128 v28; // [rsp+58h] [rbp-40h]
  char v29; // [rsp+68h] [rbp-30h]
  SpatialRimDeviceCollection *v30; // [rsp+70h] [rbp-28h]
  void ***v31; // [rsp+88h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (_QWORD *)((char *)this + 2776);
  v5 = *((_QWORD *)this + 347);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,>(v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6,
      v23);
    return v7;
  }
  else
  {
    *((_DWORD *)this + 696) = GetCurrentThreadId();
    v10 = HIDDeviceCollection::Initialize(this, v8, (struct _RIM_USAGE_ANDPAGE *const)&unk_180207AD0, v9, 0x1Du, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v10,
        v24);
      return v11;
    }
    else
    {
      v12 = (_QWORD *)((char *)this + 2920);
      Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
      if ( !Event )
      {
        wil::details::in1diag3::Throw_GetLastError(retaddr, v13, v15, v16);
        JUMPOUT(0x1800574FELL);
      }
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (char *)this + 2920,
        Event);
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), SpatialRimDeviceCollection *))(**((_QWORD **)this + 346) + 256LL))(
              *((_QWORD *)this + 346),
              *v12,
              SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic,
              this);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x123,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v17,
          v24);
        return v18;
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 96LL))(*v4, *v12);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x126,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
            (const char *)(unsigned int)v19,
            v24);
          return v20;
        }
        else
        {
          Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
          if ( MPC3DStateHelper::Is3DCompositorRunning(Instance) )
          {
            SpatialRimDeviceCollection::OnCompositorRunningStateChanged(this, 1);
          }
          else
          {
            *(_QWORD *)&v25 = SpatialRimDeviceCollection::OnCompositorRunningStateChanged;
            DWORD2(v25) = 0;
            v27 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (SpatialRimDeviceCollection::*)(bool),SpatialRimDeviceCollection *,std::_Ph<1> const &>,void,bool>::`vftable';
            v28 = v25;
            v29 = v26;
            v30 = this;
            v31 = &v27;
            MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance, (__int64)&v27, (_DWORD *)this + 711);
          }
          return 0LL;
        }
      }
    }
  }
}
