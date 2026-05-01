/*
 * XREFs of ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180131924
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180134490 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18003DB30 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180131A38 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetMonitorObjectArray(
        CApplicationManager *this,
        _QWORD *a2,
        struct IObjectArray **a3,
        _BYTE *a4)
{
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int Instance; // eax
  __int64 v11; // rbx
  unsigned __int64 i; // rdi
  int SingleMonitorObjectArray; // eax
  void *v15[7]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0;
  *a3 = 0LL;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  Instance = CEnumerableObjectCollection::CreateInstance(v9, v8, v15);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    for ( i = 0LL; i < a2[1]; ++i )
    {
      if ( v11 < 0 )
        break;
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*a2 + 8 * i) + 48LL))(*(_QWORD *)(*a2 + 8 * i), &v16);
      if ( v16 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v15[0] + 40LL))(v15[0], *(_QWORD *)(*a2 + 8 * i));
    }
    (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v15[0] + 24LL))(v15[0], &v17);
    if ( v17 )
    {
      SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v15[0])(
                                   v15[0],
                                   &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                   a3);
    }
    else
    {
      *a4 = 1;
      SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(this, 0LL, a3);
    }
    LODWORD(v11) = SingleMonitorObjectArray;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  return (unsigned int)v11;
}
