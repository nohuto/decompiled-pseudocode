/*
 * XREFs of ?IsTokenManagerReady@@YAHXZ @ 0x1C000164C
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000C5F0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0063108 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0063440 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0001E90 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 IsTokenManagerReady(void)
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0LL;
  if ( (int)DxgkGetSessionTokenManager(&v3) >= 0 )
  {
    v1 = v3;
    v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return v0;
}
