/*
 * XREFs of ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C00059B8
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0005B0C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C0005C40 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ResolveCompositionHandleToken(
        CTokenManager *this,
        const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *a2,
        __int64 a3)
{
  void *hPrivateData; // rsi
  int v4; // ebx
  CTokenManager **v6; // rcx
  struct DXGGLOBAL *Global; // rax

  hPrivateData = (void *)a2->hPrivateData;
  v4 = 0;
  if ( a2->hPrivateData )
  {
    LOBYTE(a3) = 1;
    v4 = DxgkCompositionObject::ResolveHandle(hPrivateData, 2LL, a3);
    if ( v4 >= 0 )
    {
      v4 = CompositionTokenObject::MarkCompleted(0LL);
      if ( v4 < 0 )
      {
        ObfDereferenceObject(0LL);
      }
      else
      {
        v6 = (CTokenManager **)*((_QWORD *)this + 35);
        if ( *v6 != (CTokenManager *)((char *)this + 272) )
          __fastfail(3u);
        MEMORY[0x30] = (char *)this + 272;
        MEMORY[0x38] = v6;
        *v6 = (CTokenManager *)48;
        *((_QWORD *)this + 35) = 48LL;
        Global = DXGGLOBAL_GetGlobal();
        (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)Global + 38073) + 32LL))(MEMORY[0x68], 1LL);
      }
    }
    NtClose(hPrivateData);
  }
  return (unsigned int)v4;
}
