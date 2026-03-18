/*
 * XREFs of ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0007114
 * Callers:
 *     ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C0005270 (-DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0005868 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02E0EA4 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::OpenDwmHandle(PVOID Object, PHANDLE Handle)
{
  char v4; // di
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax
  struct DXGGLOBAL *v7; // rax
  struct DXGGLOBAL *v8; // rax
  struct _KPROCESS *v9; // rax
  struct _KPROCESS *v10; // rsi
  unsigned int v11; // ebx
  struct DXGGLOBAL *v12; // rax
  struct DXGGLOBAL *v13; // rax
  _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  *Handle = (void *)-1LL;
  v4 = 0;
  Global = DXGGLOBAL_GetGlobal();
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 464LL))() )
  {
    v6 = DXGGLOBAL_GetGlobal();
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v6 + 38073) + 368LL))() )
    {
      v7 = DXGGLOBAL_GetGlobal();
      (*(void (**)(void))(*((_QWORD *)v7 + 38073) + 376LL))();
      v4 = 1;
    }
  }
  v8 = DXGGLOBAL_GetGlobal();
  v9 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v8 + 38073) + 504LL))();
  v10 = v9;
  if ( v9 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v9, &ApcState);
    v11 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    v12 = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v12 + 38073) + 432LL))(v10);
  }
  else
  {
    v11 = -1073741823;
  }
  if ( v4 )
  {
    v13 = DXGGLOBAL_GetGlobal();
    (*(void (**)(void))(*((_QWORD *)v13 + 38073) + 416LL))();
  }
  return v11;
}
