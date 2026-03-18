/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C009C874
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001C8B0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C009BFB4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C009C55C (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C001D7F0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0043EEC (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C0044D30 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C009B068 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C009CB4C (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C009CF84 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00A8B74 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  DirectComposition::CAnimationMarshaler **v5; // r14
  unsigned __int64 v6; // rbp
  DirectComposition::CApplicationChannel *v7; // r15
  __int64 v8; // rbx
  DirectComposition::CEvent *v9; // rcx
  int v10; // edx
  __int64 v11; // rdi
  DirectComposition::CAnimationMarshaler *v12; // rbx
  DirectComposition::CAnimationMarshaler **v13; // rdi
  DirectComposition::CAnimationMarshaler *v14; // rcx
  DirectComposition::CEvent *v15; // rbx

  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(this);
    *((_QWORD *)this + 5) = 0LL;
  }
  v2 = *((_QWORD *)this + 17);
  v3 = *((_QWORD *)this + 19) + 40LL;
  v4 = v3 + *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = v4;
  if ( !*(_BYTE *)(v2 + 64) && *(_QWORD *)(v2 + 40) == v4 )
    DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v2);
  *((_BYTE *)this + 32) &= 0xF2u;
  v5 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 10);
  v6 = *((_QWORD *)this + 9);
  v7 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  if ( v5 )
  {
    do
    {
      v12 = *v5;
      v13 = (DirectComposition::CAnimationMarshaler **)v5[1];
      v14 = *v5;
      v5[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v14, v6);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v5);
      DirectComposition::CApplicationChannel::ReleaseResource(
        v7,
        (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v12 + 16) & -(__int64)(v12 != 0LL)));
      v5 = v13;
    }
    while ( v13 );
  }
  v8 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v8 )
  {
    do
    {
      v11 = *(_QWORD *)v8;
      if ( *(_DWORD *)(v8 + 8) )
      {
        DirectComposition::CConnection::ReleaseSystemResource(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40LL),
          *(_DWORD *)(v8 + 8));
        *(_DWORD *)(v8 + 8) = 0;
      }
      Win32FreePool(v8);
      *((_QWORD *)this + 11) = v11;
      v8 = v11;
    }
    while ( v11 );
  }
  v9 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
  if ( v9 )
  {
    do
    {
      v15 = *(DirectComposition::CEvent **)v9;
      DirectComposition::CEvent::`scalar deleting destructor'(v9, v3);
      *((_QWORD *)this + 13) = v15;
      v9 = v15;
    }
    while ( v15 );
  }
  v10 = *((_DWORD *)this + 28);
  if ( v10 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v10);
    *((_DWORD *)this + 28) = 0;
  }
}
