/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1C0002B3C
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0002790 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C00027D0 (-DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1C0002878 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C00028C8 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C000290C (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0002954 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00029A0 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C0002ACC (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  unsigned int v7; // edx
  char *v8; // rsi
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rbx

  *(_QWORD *)this = &CTokenManager::`vftable';
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  *((_QWORD *)this + 7) = 0LL;
  v6 = (void *)*((_QWORD *)this + 5);
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteOutstandingAnalogToken(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this, v7);
  CTokenManager::DeleteAllCompositionTokens(this);
  CTokenManager::DeleteAllFlipManagerTokens(this);
  v8 = (char *)this + 328;
  while ( 1 )
  {
    v9 = *(char **)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD *)v9, *(char **)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *(_QWORD *)v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    if ( v9 == v8 )
      break;
    v11 = v9 - 8;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v9 - 1) + 56LL))(v9 - 8);
    (**(void (__fastcall ***)(char *, __int64))v11)(v11, 1LL);
  }
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 344));
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 112));
}
