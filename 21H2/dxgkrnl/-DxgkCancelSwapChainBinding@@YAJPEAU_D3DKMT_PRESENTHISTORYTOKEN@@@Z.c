/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00770AC
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0195D50 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C01DBB68 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382810 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0005B0C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0007288 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v2; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v4; // rax
  struct DXGGLOBAL *v5; // rax
  struct DXGGLOBAL *v6; // rax
  struct DXGGLOBAL *v7; // rax
  struct DXGGLOBAL *v8; // rax
  struct _KPROCESS *v9; // rax
  struct _KPROCESS *v10; // rbp
  void *FenceValue; // rsi
  _QWORD *v12; // rbx
  struct DXGGLOBAL *v13; // rax
  void *hCompSurf; // rcx
  struct DXGGLOBAL *v15; // rax
  struct DXGGLOBAL *v16; // rax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  Global = DXGGLOBAL_GetGlobal();
  (*(void (**)(void))(*((_QWORD *)Global + 38073) + 440LL))();
  v4 = DXGGLOBAL_GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v4 + 38073) + 472LL))()
    || !(unsigned int)IsTokenManagerReady()
    || (v5 = DXGGLOBAL_GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v5 + 38073) + 456LL))()) )
  {
    v2 = -1071775730;
  }
  v6 = DXGGLOBAL_GetGlobal();
  (*(void (**)(void))(*((_QWORD *)v6 + 38073) + 488LL))();
  if ( v2 >= 0 )
  {
    v7 = DXGGLOBAL_GetGlobal();
    (*(void (**)(void))(*((_QWORD *)v7 + 38073) + 376LL))();
    v8 = DXGGLOBAL_GetGlobal();
    v9 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v8 + 38073) + 504LL))();
    v10 = v9;
    if ( v9 )
    {
      KeStackAttachProcess(v9, &ApcState);
      if ( a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
      {
        FenceValue = (void *)a1->Token.Flip.FenceValue;
        if ( FenceValue )
        {
          Object = 0LL;
          v2 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 2, &Object);
          if ( v2 >= 0 )
          {
            v12 = Object;
            v13 = DXGGLOBAL_GetGlobal();
            (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)v13 + 38073) + 32LL))(v12[13], 1LL);
            (*(void (__fastcall **)(_QWORD *))(v12[5] + 56LL))(v12 + 5);
            ObfDereferenceObject(v12);
            v2 = ObCloseHandle(FenceValue, 1);
            if ( v2 >= 0 )
              a1->Token.Flip.FenceValue = 0LL;
          }
        }
      }
      else if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
      {
        hCompSurf = (void *)a1->Token.Flip.hCompSurf;
        if ( hCompSurf )
        {
          v2 = ObCloseHandle(hCompSurf, 1);
          if ( v2 >= 0 )
            a1->Token.Flip.hCompSurf = 0LL;
        }
      }
      KeUnstackDetachProcess(&ApcState);
      v15 = DXGGLOBAL_GetGlobal();
      (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v15 + 38073) + 432LL))(v10);
    }
    v16 = DXGGLOBAL_GetGlobal();
    (*(void (**)(void))(*((_QWORD *)v16 + 38073) + 416LL))();
  }
  return (unsigned int)v2;
}
