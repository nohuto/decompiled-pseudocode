/*
 * XREFs of ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017D400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044758 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ @ 0x1800E6560 (-GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x1800E6850 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ??$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@XZ @ 0x18017C55C (--$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA-AV-.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017CFF8 (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x18017D21C (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x18017DF04 (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x18017E270 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18017E318 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MagnifierProcessor::OnHitTest(
        MagnifierProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 *Attached; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *DeviceState; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  bool v18; // al
  bool v19; // al
  __int64 (__fastcall *v20)(__int64, GUID *, __int64 *); // rbx
  int v21; // eax
  __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF
  __int64 v29; // [rsp+98h] [rbp+58h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_DWORD *)a2 & 0x88) == 8 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    v6 = (__int64 *)((char *)a4 + 8);
    if ( *((_QWORD *)a4 + 1) )
    {
      *(_DWORD *)a4 = 1;
    }
    else
    {
      v7 = 0LL;
      v23 = 0LL;
      v8 = 0LL;
      v28 = 0LL;
      v9 = *((_QWORD *)a3 + 22);
      v10 = *(__int64 **)(v9 + 8);
      v24 = *(__int64 **)(v9 + 16);
      if ( v10 != v24 )
      {
        while ( 1 )
        {
          Attached = InputSite::GetAttachedObject<IMagnifierControllerProxy,MagnifierControllerProxy>(*v10, &v29);
          v12 = 0LL;
          if ( v25 != Attached )
          {
            v12 = *Attached;
            *Attached = 0LL;
          }
          v13 = v7;
          v7 = v12;
          v23 = v12;
          if ( v13 )
            (**(void (__fastcall ***)(__int64))(v13 + 16))(v13 + 16);
          v14 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (**(void (__fastcall ***)(__int64))(v14 + 16))(v14 + 16);
          }
          if ( v12 )
            break;
          if ( ++v10 == v24 )
            goto LABEL_30;
        }
        Microsoft::WRL::ComPtr<IRawInputClient>::operator=(&v28, v10);
        v24 = 0LL;
        DeviceState = MagnifierProcessor::GetDeviceState((__int64)this, v25, (__int64)a2);
        v16 = 0LL;
        if ( &v29 != DeviceState )
        {
          v16 = *DeviceState;
          *DeviceState = 0LL;
        }
        v29 = 0LL;
        v24 = (__int64 *)v16;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v25);
        *(_BYTE *)(v16 + 16) = BamoControllerNavigationManagerProxy::GetEnabled((BamoControllerNavigationManagerProxy *)(v12 + 8));
        *(_BYTE *)(v16 + 17) = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(v12 + 8));
        v17 = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v16 + 32, &v29, *((_QWORD *)a2 + 2))
            - *(_QWORD *)(v16 + 24);
        v18 = *(_BYTE *)(v16 + 33) && 1000000LL * *(_QWORD *)(v16 + 64) >= v17;
        *(_BYTE *)(v16 + 18) = v18;
        MagnifierRecognizer::Reset((MagnifierRecognizer *)(v16 + 32), (MagnifierProcessor *)((char *)this + 80));
        v19 = *(_BYTE *)(v16 + 16) || *(_BYTE *)(v16 + 17);
        *(_BYTE *)(v16 + 32) = v19;
        *(_BYTE *)(v16 + 35) = *(_BYTE *)(v16 + 17);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v16 + 112));
        Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(v16 + 120), &v23);
        Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)(v16 + 128), &v28);
        if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v16 + 32)) )
        {
          v20 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6);
          v21 = v20(v16, &GUID_00000000_0000_0000_c000_000000000046, v6);
          if ( v21 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              95LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\"
                       "magnifierprocessor.cpp",
              (const char *)(unsigned int)v21);
            __debugbreak();
          }
          *(_DWORD *)a4 = 1;
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
        v8 = v28;
      }
LABEL_30:
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v7 )
        (**(void (__fastcall ***)(__int64))(v7 + 16))(v7 + 16);
    }
  }
  return 0LL;
}
