/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001D584 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C001D6B8 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0032058 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C009B604 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C009BFB4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C009CB74 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00A60C8 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00A8B74 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        struct DirectComposition::CResourceMarshaler **this,
        char a2)
{
  int v2; // edi
  struct DirectComposition::CResourceMarshaler *v5; // rcx
  void *v6; // rax
  DirectComposition::CAnimationBinding *v7; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rbx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  unsigned int v15; // edx
  DirectComposition::CEvent *v16; // rcx
  DirectComposition::CAnimationBinding *v17; // rbx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this[27] )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v5 = this[92];
  if ( v5 )
  {
    KeSetEvent(*((PRKEVENT *)v5 + 1), 1, 0);
    v16 = this[92];
    if ( v16 )
      DirectComposition::CEvent::`scalar deleting destructor'(v16, v15);
    this[92] = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, this[93]);
  this[93] = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v6 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CLinearObjectTableBase *)(this + 14),
           &v18);
    if ( !v6 )
      break;
    (*(void (__fastcall **)(void *, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v6 + 72LL))(v6, this);
  }
  if ( !a2 )
  {
    for ( i = this[75];
          i != (DirectComposition::CBatchSharedMemoryPool *)(this + 75);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 75),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v7 = this[56];
  *((_DWORD *)this + 164) = 0;
  if ( v7 )
  {
    do
    {
      v17 = *(DirectComposition::CAnimationBinding **)v7;
      *(_QWORD *)v7 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v7, (struct DirectComposition::CApplicationChannel *)this);
      v7 = v17;
    }
    while ( v17 );
  }
  v8 = this[53];
  if ( v8 )
  {
    do
    {
      v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v8 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(
        (DirectComposition::CApplicationChannel *)this,
        v8);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 80LL))(v8, 1LL);
      v8 = v13;
    }
    while ( v13 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList((DirectComposition::CApplicationChannel *)this);
  this[56] = 0LL;
  this[53] = 0LL;
  this[50] = 0LL;
  this[55] = 0LL;
  this[51] = 0LL;
  this[52] = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v9 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CLinearObjectTableBase *)(this + 14),
           &v18);
    if ( !v9 )
      break;
    v9[4] &= 0xFFFFFFEE;
    *((_QWORD *)v9 + 1) = 0LL;
    v10 = *((_QWORD *)v9 + 4);
    if ( v10 )
    {
      do
      {
        v11 = *(_DWORD *)(v10 + 8);
        v12 = *(_QWORD *)(v10 + 32);
        if ( (v11 & 1) != 0 )
          *(_DWORD *)(v10 + 8) = v11 & 0xFFFFFFFC | 2;
        *(_QWORD *)v10 = 0LL;
        v10 = v12;
      }
      while ( v12 );
    }
  }
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 148) - 1) <= 1;
  *((_DWORD *)this + 148) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
