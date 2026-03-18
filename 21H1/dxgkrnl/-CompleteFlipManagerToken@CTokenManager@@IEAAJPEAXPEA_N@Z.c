/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C0061B20
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0005880 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C00032F4 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0004618 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0061F18 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C0061FA4 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::CompleteFlipManagerToken(CTokenManager *this, void *a2, bool *a3)
{
  int v6; // edi
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  CTokenManager **v12; // rcx
  char v13; // bp
  CTokenManager *v14; // rbx
  struct DXGGLOBAL *v15; // rax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  *a3 = 1;
  v6 = DxgkCompositionObject::ResolveHandle(a2, 2u, 1, 5, &Object);
  if ( v6 >= 0 )
  {
    v7 = Object;
    Object = 0LL;
    FlipManagerTokenObject::GetPresentId((FlipManagerTokenObject *)v7, (unsigned __int64 *)&Object);
    Global = DXGGLOBAL::GetGlobal(v9, v8);
    (*(void (__fastcall **)(PVOID))(*((_QWORD *)Global + 38033) + 72LL))(Object);
    v6 = FlipManagerTokenObject::MarkCompleted((FlipManagerTokenObject *)v7);
    if ( v6 >= 0 )
    {
      v6 = CPushLock::AcquireLockShared((CPushLock *)(v7 + 72));
      if ( v6 >= 0 )
      {
        v13 = v7[144];
        CPushLock::ReleaseLock((CPushLock *)(v7 + 72));
        if ( v13 )
        {
          v14 = (CTokenManager *)(v7 + 96);
          v12 = (CTokenManager **)*((_QWORD *)this + 36);
          if ( *v12 != (CTokenManager *)((char *)this + 280) )
            __fastfail(3u);
          *(_QWORD *)v14 = (char *)this + 280;
          *((_QWORD *)v14 + 1) = v12;
          *v12 = v14;
          *((_QWORD *)this + 36) = v14;
          v7 = 0LL;
          *a3 = 0;
        }
      }
    }
    if ( v7 )
      ObfDereferenceObject(v7);
    v15 = DXGGLOBAL::GetGlobal((__int64)v12, v11);
    (*(void (__fastcall **)(PVOID))(*((_QWORD *)v15 + 38033) + 80LL))(Object);
  }
  ObCloseHandle(a2, 1);
  return (unsigned int)v6;
}
