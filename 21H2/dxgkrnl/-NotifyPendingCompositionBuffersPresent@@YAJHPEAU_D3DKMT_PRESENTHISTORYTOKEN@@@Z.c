/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0005868
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB54 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0005B0C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0005CB4 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0007114 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0007288 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  UINT64 FenceValue; // rbp
  int v3; // edi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax
  int v8; // eax
  struct DXGGLOBAL *v9; // rax
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // r8
  struct DXGGLOBAL *v12; // rax
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  FenceValue = a2->Token.Flip.FenceValue;
  v3 = 0;
  Handle = 0LL;
  Global = DXGGLOBAL_GetGlobal();
  (*(void (**)(void))(*((_QWORD *)Global + 38073) + 440LL))();
  v7 = DXGGLOBAL_GetGlobal();
  v8 = (*(__int64 (**)(void))(*((_QWORD *)v7 + 38073) + 472LL))();
  if ( !a1
    || v8
    || !(unsigned int)IsTokenManagerReady()
    || (v9 = DXGGLOBAL_GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v9 + 38073) + 456LL))()) )
  {
    v3 = -1071775730;
  }
  v10 = DXGGLOBAL_GetGlobal();
  (*(void (**)(void))(*((_QWORD *)v10 + 38073) + 488LL))();
  if ( v3 >= 0 )
  {
    LOBYTE(v11) = 1;
    v3 = DxgkCompositionObject::ResolveHandle(FenceValue, 2LL, v11);
    if ( v3 >= 0 )
    {
      v3 = CompositionTokenObject::MarkPending(0LL);
      if ( v3 >= 0 )
      {
        v3 = DxgkCompositionObject::OpenDwmHandle(0LL, &Handle);
        if ( v3 >= 0 )
        {
          v12 = DXGGLOBAL_GetGlobal();
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v12 + 38073) + 32LL))(MEMORY[0x68], 0LL);
          a2->Token.Flip.FenceValue = (UINT64)Handle;
        }
      }
      ObfDereferenceObject(0LL);
    }
  }
  return (unsigned int)v3;
}
