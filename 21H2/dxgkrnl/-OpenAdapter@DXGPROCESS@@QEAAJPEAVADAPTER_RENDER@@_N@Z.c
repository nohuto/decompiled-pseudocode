/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01688A8
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0168CB0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C021B460 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0168A40 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C016DA3C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  int v4; // edi
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // rax
  struct ADAPTER_RENDER *v13; // r14
  _QWORD *v14; // rax
  struct ADAPTER_RENDER **v15; // rcx

  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 72, 0LL);
  *((_QWORD *)a2 + 10) = KeGetCurrentThread();
  v8 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL);
  v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8);
  if ( !v9 )
  {
    v12 = operator new[](0x78uLL, 0x4B677844u, 256LL, v7);
    v9 = v12;
    if ( !v12 )
    {
      v4 = -1073741801;
      goto LABEL_5;
    }
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_QWORD *)(v12 + 40) = 0LL;
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_DWORD *)(v12 + 72) = 0;
    *(_WORD *)(v12 + 76) = 0;
    *(_QWORD *)(v12 + 80) = 0LL;
    *(_QWORD *)(v12 + 88) = 0LL;
    *(_DWORD *)(v12 + 96) = 0;
    v13 = (struct ADAPTER_RENDER *)(v12 + 56);
    *(_DWORD *)(v12 + 100) = 1;
    v14 = (_QWORD *)(v12 + 104);
    v14[1] = v14;
    *v14 = v14;
    *(_QWORD *)(v9 + 32) = this;
    *(_QWORD *)(v9 + 48) = a2;
    if ( *((struct _KTHREAD **)a2 + 10) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 4353LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_OpenAdapterLock.IsExclusiveOwner()",
        4353LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = (struct ADAPTER_RENDER **)*((_QWORD *)a2 + 38);
    if ( *v15 != (struct ADAPTER_RENDER *)((char *)a2 + 296) )
      __fastfail(3u);
    *(_QWORD *)v13 = (char *)a2 + 296;
    *(_QWORD *)(v9 + 64) = v15;
    *v15 = v13;
    *((_QWORD *)a2 + 38) = v13;
    ++*((_DWORD *)a2 + 78);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8) = v9;
  }
  ++*(_DWORD *)(v9 + 24);
  if ( a3 )
  {
    v10 = DXGPROCESS_RENDER_ADAPTER_INFO::Initialize((DXGPROCESS_RENDER_ADAPTER_INFO *)v9, this, a2);
    v4 = v10;
    if ( v10 < 0 )
      WdLogSingleEntry1(3LL, v10);
  }
LABEL_5:
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 < 0 )
    DXGPROCESS::CloseAdapter(this, a2);
  return (unsigned int)v4;
}
