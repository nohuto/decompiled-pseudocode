/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019379C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C0023D58 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C0156088 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C0193948 (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rbp
  char *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGMMS_EXPORT *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  DXGPROCESS *Current; // rax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v28[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v4 = (char *)operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
  v9 = (DXGMMS_EXPORT *)v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *v4 = 0;
    *(_OWORD *)(v4 + 8) = 0LL;
    *(_OWORD *)(v4 + 24) = 0LL;
    *(_OWORD *)(v4 + 40) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    v21 = -1073741801;
    *(_QWORD *)(v24 + 24) = v2;
    *(_QWORD *)(v24 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    return (unsigned int)v21;
  }
  v10 = DXGMMS_EXPORT::Initialize(v9, v2);
  v15 = v10;
  if ( v10 < 0 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v25 + 24) = v2;
    *(_QWORD *)(v25 + 32) = v15;
    WdLogEvent5_WdLowResource(v25);
  }
  else
  {
    v16 = (*(__int64 (**)(void))(*(_QWORD *)(*((_QWORD *)v9 + 9) + 8LL) + 8LL))();
    v15 = v16;
    if ( v16 >= 0 )
    {
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v27);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      DXGGLOBAL::m_pDxgmmsExport[v2] = v9;
      *((_QWORD *)this + v2 + 27) = *((_QWORD *)v9 + 9);
      *((_QWORD *)this + v2 + 29) = *((_QWORD *)v9 + 8);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)this + 376, 0LL);
      v19 = (_QWORD *)*((_QWORD *)this + 45);
      v28[0] = (char *)this + 360;
      while ( 1 )
      {
        v28[1] = v19;
        Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v28);
        if ( !Current )
          break;
        v21 = DXGPROCESS::DeferredInitialize(Current, (unsigned int)v2);
        if ( v21 < 0 )
        {
          ExReleasePushLockSharedEx((char *)this + 376, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_13;
        }
        v19 = (_QWORD *)*v19;
      }
      ExReleasePushLockSharedEx((char *)this + 376, 0LL);
      KeLeaveCriticalRegion();
      v21 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 157), (unsigned int)v2);
      if ( v21 >= 0 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v22);
LABEL_13:
      if ( v27[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v22);
      return (unsigned int)v21;
    }
    v26 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v26 + 24) = v2;
    *(_QWORD *)(v26 + 32) = v15;
    WdLogEvent5_WdError(v26);
  }
  return (unsigned int)v15;
}
