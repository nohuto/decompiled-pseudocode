/*
 * XREFs of ?IsTokenManagerReady@@YAHXZ @ 0x1C0007288
 * Callers:
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0005868 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB90 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00770AC (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0077458 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01961F0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 IsTokenManagerReady(void)
{
  unsigned int v0; // ebx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v3; // rdi

  v0 = 0;
  Global = DXGGLOBAL_GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v3 = *((_QWORD *)SessionData + 2343);
    if ( v3 )
    {
      (**(void (__fastcall ***)(_QWORD))v3)(*((_QWORD *)SessionData + 2343));
      v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return v0;
}
