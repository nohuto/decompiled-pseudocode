/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0064294
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0152CE0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C0157A04 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02501B0 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000164C (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000FAD4 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1, __int64 a2)
{
  int v3; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  struct DXGGLOBAL *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGGLOBAL *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGGLOBAL *v17; // rax
  struct _KPROCESS *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KPROCESS *v21; // rbp
  void *FenceValue; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // rbx
  struct DXGGLOBAL *v27; // rax
  void *hCompSurf; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGGLOBAL *v31; // rax
  struct DXGGLOBAL *v32; // rax
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  (*(void (**)(void))(*((_QWORD *)Global + 38048) + 208LL))();
  v7 = DXGGLOBAL::GetGlobal(v6, v5);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v7 + 38048) + 240LL))()
    || !(unsigned int)IsTokenManagerReady()
    || (v10 = DXGGLOBAL::GetGlobal(v9, v8), !(*(unsigned int (**)(void))(*((_QWORD *)v10 + 38048) + 224LL))()) )
  {
    v3 = -1071775730;
  }
  v11 = DXGGLOBAL::GetGlobal(v9, v8);
  (*(void (**)(void))(*((_QWORD *)v11 + 38048) + 256LL))();
  if ( v3 >= 0 )
  {
    v14 = DXGGLOBAL::GetGlobal(v13, v12);
    (*(void (**)(void))(*((_QWORD *)v14 + 38048) + 144LL))();
    v17 = DXGGLOBAL::GetGlobal(v16, v15);
    v18 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v17 + 38048) + 272LL))();
    v21 = v18;
    if ( v18 )
    {
      KeStackAttachProcess(v18, &ApcState);
      if ( a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
      {
        FenceValue = (void *)a1->Token.Flip.FenceValue;
        if ( FenceValue )
        {
          Object = 0LL;
          v3 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 2, &Object);
          if ( v3 >= 0 )
          {
            v25 = Object;
            v26 = *((_QWORD *)Object + 15);
            v27 = DXGGLOBAL::GetGlobal(v24, v23);
            (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v27 + 38048) + 32LL))(v26, 1LL);
            (*(void (__fastcall **)(_QWORD *))(v25[5] + 56LL))(v25 + 5);
            ObfDereferenceObject(v25);
            v3 = ObCloseHandle(FenceValue, 1);
            if ( v3 >= 0 )
              a1->Token.Flip.FenceValue = 0LL;
          }
        }
      }
      else if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
      {
        hCompSurf = (void *)a1->Token.Flip.hCompSurf;
        if ( hCompSurf )
        {
          v3 = ObCloseHandle(hCompSurf, 1);
          if ( v3 >= 0 )
            a1->Token.Flip.hCompSurf = 0LL;
        }
      }
      KeUnstackDetachProcess(&ApcState);
      v31 = DXGGLOBAL::GetGlobal(v30, v29);
      (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v31 + 38048) + 200LL))(v21);
    }
    v32 = DXGGLOBAL::GetGlobal(v20, v19);
    (*(void (**)(void))(*((_QWORD *)v32 + 38048) + 184LL))();
  }
  return (unsigned int)v3;
}
