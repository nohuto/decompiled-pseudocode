/*
 * XREFs of ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0017BF8
 * Callers:
 *     ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C0017BE0 (-DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00645CC (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C028D7EC (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::OpenDwmHandle(PVOID Object, PHANDLE Handle)
{
  char v4; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  struct DXGGLOBAL *v9; // rax
  struct DXGGLOBAL *v10; // rax
  struct _KPROCESS *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KPROCESS *v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  struct DXGGLOBAL *v19; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  *Handle = (void *)-1LL;
  v4 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)Object, (__int64)Handle);
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 232LL))() )
  {
    v8 = DXGGLOBAL::GetGlobal(v7, v6);
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v8 + 38048) + 136LL))() )
    {
      v9 = DXGGLOBAL::GetGlobal(v7, v6);
      (*(void (**)(void))(*((_QWORD *)v9 + 38048) + 144LL))();
      v4 = 1;
    }
  }
  v10 = DXGGLOBAL::GetGlobal(v7, v6);
  v11 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v10 + 38048) + 272LL))();
  v14 = v11;
  if ( v11 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v11, &ApcState);
    v15 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    v18 = DXGGLOBAL::GetGlobal(v17, v16);
    (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v18 + 38048) + 200LL))(v14);
  }
  else
  {
    v15 = -1073741823;
  }
  if ( v4 )
  {
    v19 = DXGGLOBAL::GetGlobal(v13, v12);
    (*(void (**)(void))(*((_QWORD *)v19 + 38048) + 184LL))();
  }
  return v15;
}
