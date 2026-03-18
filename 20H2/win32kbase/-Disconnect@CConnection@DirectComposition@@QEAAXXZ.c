/*
 * XREFs of ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0080880
 * Callers:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00814CC (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0081588 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0081638 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0067304 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C006733C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0067630 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C007DA50 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0080A4C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C0080FA8 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0081000 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C008114C (-OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v4; // rbx
  DirectComposition::CBatch *v5; // rcx
  DirectComposition::CBatch *v6; // rcx
  struct DirectComposition::CBatch *v7; // rax
  DirectComposition::CBatch *v8; // rax
  DirectComposition::CBatch *v9; // rbx
  DirectComposition::CEvent *v10; // rcx
  __int64 v11; // rdi
  DirectComposition::CBatch *v12; // rbx
  DirectComposition::CBatch *v13; // rbx
  struct DirectComposition::CBatch *v14; // rbx
  struct _ERESOURCE *v15; // rbx
  struct _ERESOURCE *v16; // rbx
  struct _ERESOURCE *v17; // rbx
  struct _ERESOURCE *v18; // rbx
  struct DirectComposition::CBatch *v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 24);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    0LL);
  v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v5 )
  {
    do
    {
      v12 = *(DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v12;
    }
    while ( v12 );
  }
  v6 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v6 )
  {
    do
    {
      v13 = *(DirectComposition::CBatch **)v6;
      DirectComposition::CBatch::ReturnToApplication(v6, 0);
      v6 = v13;
    }
    while ( v13 );
  }
  v7 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  v19 = v7;
  if ( v7 )
  {
    do
    {
      v14 = *(struct DirectComposition::CBatch **)v7;
      DirectComposition::CBatch::ReturnToApplication(v7, 0);
      v7 = v14;
    }
    while ( v14 );
    v19 = 0LL;
  }
  DirectComposition::CConnection::GetNewBatches(this, &v19);
  v8 = v19;
  if ( v19 )
  {
    do
    {
      v9 = *(DirectComposition::CBatch **)v8;
      DirectComposition::CBatch::ReturnToApplication(v8, 0);
      v8 = v9;
    }
    while ( v9 );
    v19 = 0LL;
  }
  if ( v2 )
    DirectComposition::CChannelGroup::OnConnectionDisconnected((DirectComposition::CConnection *)((char *)this + 16));
  v10 = (DirectComposition::CEvent *)*((_QWORD *)this + 10);
  if ( v10 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v10);
    *((_QWORD *)this + 10) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v11 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 2, 1) == 1 )
    {
      v15 = *(struct _ERESOURCE **)(v11 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, 0LL);
      v16 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v16, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
        *(_DWORD *)(v11 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 5, 4) == 4 )
    {
      v17 = *(struct _ERESOURCE **)(v11 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v17, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
      v18 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v18, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
        *(_DWORD *)(v11 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v11 + 24) == 1 );
}
