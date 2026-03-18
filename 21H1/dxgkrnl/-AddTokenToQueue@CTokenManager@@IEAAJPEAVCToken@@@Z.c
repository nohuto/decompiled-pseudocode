/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C001B660
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C001B5E0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@MEAAJPEAVCToken@@@Z @ 0x1C0061A90 (-AddTokenToQueueAndSignalTokenEvent@CTokenManager@@MEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C001B6E0 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C001B768 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CompositionSurfaceObject **a2)
{
  int v4; // edi
  struct CompositionSurfaceObject *v5; // rdx
  CTokenQueue *v6; // rcx
  struct CTokenManager::TokenQueueTableEntry *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CompositionSurfaceObject **))*a2 + 23))(a2) )
  {
    v6 = (CTokenManager *)((char *)this + 320);
    goto LABEL_4;
  }
  v5 = a2[4];
  v8 = 0LL;
  v4 = CTokenManager::EnsureTokenQueue(this, v5, &v8);
  if ( v4 >= 0 )
  {
    v6 = (CTokenQueue *)*((_QWORD *)v8 + 1);
LABEL_4:
    CTokenQueue::AddToken(v6, (struct CToken *)a2);
  }
  return (unsigned int)v4;
}
