/*
 * XREFs of ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1803AB56C
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1803AA7F0 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1803AA940 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z @ 0x1803AB4D8 (-_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1803ADBAC (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_SwitchToApp(IUnknown **this, struct CSwitchController::ActivationData *a2)
{
  unsigned int v4; // esi
  int Instance; // ebx
  struct IImmersiveApplication **v6; // r14
  __int64 v7; // rcx
  struct IImmersiveApplication *v8; // rdi
  __int64 (__fastcall *v9)(struct IImmersiveApplication *, LPVOID *); // rbx
  __int64 *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v16; // [rsp+68h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  Instance = 0;
  v6 = (struct IImmersiveApplication **)((char *)a2 + 24);
  v7 = *((_QWORD *)a2 + 3);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 56LL))(v7, &v16);
    if ( !v16 )
      goto LABEL_9;
    pv = 0LL;
    v8 = *v6;
    v9 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(*(_QWORD *)*v6 + 32LL);
    CoTaskMemFree(0LL);
    Instance = v9(v8, &pv);
    if ( Instance >= 0 )
    {
      if ( (*((_BYTE *)a2 + 8) & 2) == 0 )
        Instance = CSwitchController::_RemoveAppWithPendingTermination(this, *v6);
      if ( Instance == -2147023598 )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v6);
    }
    CoTaskMemFree(pv);
    if ( Instance >= 0 )
    {
LABEL_9:
      v10 = (__int64 *)((char *)a2 + 32);
      if ( !*((_QWORD *)a2 + 4)
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)*v6 + 328LL))(*v6, 5LL)
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)*v6 + 328LL))(*v6, 0LL) )
      {
        pv = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
        Instance = IUnknown_QueryService(
                     this[2],
                     &IID_IImmersiveApplicationManager,
                     &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
                     &pv);
        if ( Instance >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(LPVOID, struct IImmersiveApplication *, __int64))(*(_QWORD *)pv + 64LL))(
                  pv,
                  *v6,
                  1LL);
          Instance = v11;
          if ( v11 < 0 )
          {
            if ( v11 == -2147024891 )
              goto LABEL_26;
            v12 = *v10;
            if ( !*v10 )
            {
              if ( v11 == -2147023598 )
                v4 = 0x200000;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a2 + 4);
              Instance = CDelayedTileActivation_CreateInstance(*v6, v14, v4);
              goto LABEL_26;
            }
            if ( v11 != -2147023598 )
            {
              if ( v11 == -2147019873 )
                Instance = 0;
              goto LABEL_26;
            }
            Instance = 0;
            v13 = 0x200000LL;
            goto LABEL_16;
          }
          v12 = *v10;
          if ( *v10 )
          {
            v13 = 0x1000000LL;
LABEL_16:
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, v13, (unsigned int)v13);
          }
        }
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
      }
    }
  }
  return (unsigned int)Instance;
}
