/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C011C374
 * Callers:
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C011C294 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0129C34 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0175F08 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E3B14 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C015AB2C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  __int64 v4; // rdi
  __int64 v7; // r13
  _QWORD *v8; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct ADAPTER_RENDER *v14; // r14
  struct ADAPTER_RENDER **v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax

  LODWORD(v4) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 72, 0LL);
  *((_QWORD *)a2 + 10) = KeGetCurrentThread();
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 232LL);
  v8 = *(_QWORD **)(*((_QWORD *)this + 6) + 8 * v7);
  if ( !v8 )
  {
    v10 = operator new(0x78uLL, 0x4B677844u, 1, PagedPool);
    v8 = v10;
    if ( v10 )
    {
      v10[1] = 0LL;
      v10[2] = 0LL;
      v10[3] = 0LL;
      v10[4] = 0LL;
      v10[5] = 0LL;
      v10[6] = 0LL;
      *((_DWORD *)v10 + 18) = 0;
      *((_WORD *)v10 + 38) = 0;
      v10[10] = 0LL;
      v10[11] = 0LL;
      *((_DWORD *)v10 + 24) = 0;
      *((_DWORD *)v10 + 25) = 1;
      v13 = v10 + 13;
      v13[1] = v13;
      *v13 = v13;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      LODWORD(v4) = -1073741801;
      goto LABEL_3;
    }
    v8[4] = this;
    v14 = (struct ADAPTER_RENDER *)(v8 + 7);
    v8[6] = a2;
    if ( *((struct _KTHREAD **)a2 + 10) != KeGetCurrentThread() )
    {
      v20 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v20 + 24) = 4355LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v15 = (struct ADAPTER_RENDER **)*((_QWORD *)a2 + 37);
    if ( *v15 != (struct ADAPTER_RENDER *)((char *)a2 + 288) )
      __fastfail(3u);
    *(_QWORD *)v14 = (char *)a2 + 288;
    v8[8] = v15;
    *v15 = v14;
    *((_QWORD *)a2 + 37) = v14;
    ++*((_DWORD *)a2 + 76);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7) = v8;
  }
  ++*((_DWORD *)v8 + 6);
  if ( a3 )
  {
    v16 = DXGPROCESS_ADAPTER_INFO::Initialize((DXGPROCESS_ADAPTER_INFO *)v8, this, a2);
    v4 = v16;
    if ( v16 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = v4;
      WdLogEvent5_WdWarning(v21);
    }
  }
LABEL_3:
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( (int)v4 < 0 )
    DXGPROCESS::CloseAdapter(this, (struct DXGADAPTER *const *)a2);
  return (unsigned int)v4;
}
