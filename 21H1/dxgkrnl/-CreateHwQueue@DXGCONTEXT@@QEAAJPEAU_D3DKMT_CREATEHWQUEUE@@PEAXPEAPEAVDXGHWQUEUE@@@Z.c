/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C02681AC
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014D494 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateHwQueueInternal @ 0x1C026CA88 (DxgkCreateHwQueueInternal.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C0044F74 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C026877C (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0269204 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v5; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // esi
  DXGHWQUEUE *v23; // rax
  DXGHWQUEUE **v24; // rcx
  __int64 v25; // rdx

  v5 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 427LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v15 + 24) = 429LL;
    WdLogEvent5_WdAssertion(v15);
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x80uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    PoolWithQuotaTag[2] = this;
    *(_OWORD *)PoolWithQuotaTag = 0LL;
    PoolWithQuotaTag[3] = 0LL;
    PoolWithQuotaTag[4] = 0LL;
    PoolWithQuotaTag[5] = 0LL;
    PoolWithQuotaTag[6] = 0LL;
    PoolWithQuotaTag[7] = 0LL;
    PoolWithQuotaTag[8] = 0LL;
    PoolWithQuotaTag[9] = 0LL;
    PoolWithQuotaTag[10] = 0LL;
    PoolWithQuotaTag[11] = 1LL;
    *((_BYTE *)PoolWithQuotaTag + 96) = 0;
    PoolWithQuotaTag[13] = 0LL;
    PoolWithQuotaTag[14] = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 30) = 0;
  }
  else
  {
    PoolWithQuotaTag = 0LL;
  }
  *a4 = (struct DXGHWQUEUE *)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    v21 = -1073741801;
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v20);
LABEL_14:
    if ( *a4 )
    {
      DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
      if ( *a4 )
        DXGHWQUEUE::`scalar deleting destructor'(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v21;
  }
  v21 = DXGHWQUEUE::Initialize((DXGHWQUEUE *)PoolWithQuotaTag, a2, a3);
  if ( v21 < 0 )
    goto LABEL_14;
  v23 = *a4;
  v24 = (DXGHWQUEUE **)((char *)this + 424);
  v25 = *((_QWORD *)this + 53);
  if ( *(DXGCONTEXT **)(v25 + 8) != (DXGCONTEXT *)((char *)this + 424) )
    __fastfail(3u);
  *(_QWORD *)v23 = v25;
  *((_QWORD *)v23 + 1) = v24;
  *(_QWORD *)(v25 + 8) = v23;
  *v24 = v23;
  _InterlockedIncrement64((volatile signed __int64 *)this + 4);
  return 0LL;
}
