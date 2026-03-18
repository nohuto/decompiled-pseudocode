/*
 * XREFs of ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C001B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00070A0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C001B548 (-CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C001B660 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::AddUnBindToken(CTokenManager *this, struct CompositionSurfaceObject *a2)
{
  int v3; // edi
  struct CToken *v4; // rsi
  struct CToken *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = CToken::CreateUnBindToken(a2, &v6);
  if ( v3 >= 0 )
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v4 = v6;
    v3 = CTokenManager::AddTokenToQueue(this, v6);
    if ( v3 < 0 && v4 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  }
  return (unsigned int)v3;
}
