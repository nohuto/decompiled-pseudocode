/*
 * XREFs of ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x1C0075B10
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0008920 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001AFC0 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00208C0 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?CurrentThreadOwnsTokenManagerLock@CTokenManager@@IEBA_NXZ @ 0x1C002C984 (-CurrentThreadOwnsTokenManagerLock@CTokenManager@@IEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::AddDisableScanoutToken(struct _KTHREAD **this, struct CDisableScanoutToken **a2)
{
  char v4; // bp
  CTokenManager *v5; // rcx
  int v6; // esi
  struct DXGGLOBAL *Global; // rax

  v4 = 0;
  if ( !CTokenManager::CurrentThreadOwnsTokenManagerLock(this) )
  {
    CTokenManager::AcquireTokenManagerLock(v5);
    v4 = 1;
  }
  v6 = CTokenManager::AddTokenToQueue((CTokenManager *)this, (struct CompositionSurfaceObject **)*a2);
  if ( v6 < 0 && *a2 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
  Global = DXGGLOBAL_GetGlobal();
  (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 304LL))(
    *(_QWORD *)(*((_QWORD *)*a2 + 4) + 24LL),
    *((_QWORD *)*a2 + 5));
  *a2 = 0LL;
  if ( v4 )
    CTokenManager::ReleaseTokenManagerLock((CTokenManager *)this);
  return (unsigned int)v6;
}
