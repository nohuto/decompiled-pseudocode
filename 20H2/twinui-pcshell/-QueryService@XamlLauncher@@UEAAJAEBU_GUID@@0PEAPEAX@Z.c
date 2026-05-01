/*
 * XREFs of ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180013AB0
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18005DAD0 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18032D1E0 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032D320 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180072160 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNot.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall XamlLauncher::QueryService(
        XamlLauncher *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r9
  _DWORD *v9; // r10
  __int64 v10; // rcx
  int CanCastTo; // ebx
  __int64 v13; // r8
  _QWORD *v14; // r9
  __int64 v15; // r10
  IUnknown *v16; // rcx

  *a4 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveLauncher.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveLauncher.Revision )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveLauncher.SubAuthority;
  if ( v5 )
  {
    v16 = (IUnknown *)*((_QWORD *)this - 4);
    if ( v16 )
      return IUnknown_QueryService(v16, a2, a3, a4);
    else
      return -2147467262;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *v8 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      return 0;
    }
    else
    {
      if ( *v9 == -62389853
        && v9[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && v9[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && v9[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
        || (unsigned int)InlineIsEqualGUID(v6, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864) )
      {
        *v8 = v7;
        CanCastTo = 0;
      }
      else
      {
        if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d) )
        {
          *v14 = v13;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer>::CanCastTo(
                        v13 + 8,
                        v15,
                        a4);
        }
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    }
    return CanCastTo;
  }
}
