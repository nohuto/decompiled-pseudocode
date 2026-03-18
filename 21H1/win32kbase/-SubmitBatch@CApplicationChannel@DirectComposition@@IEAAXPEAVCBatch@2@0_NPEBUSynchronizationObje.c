/*
 * XREFs of ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C00B9704
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C00B8A24 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     NtDCompositionCommitChannel @ 0x1C00B8D00 (NtDCompositionCommitChannel.c)
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C00B964C (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C00070F0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C01D8168 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::SubmitBatch(
        DirectComposition::CApplicationChannel *this,
        struct _SLIST_ENTRY *a2,
        struct DirectComposition::CBatch *a3,
        char a4,
        const struct DirectComposition::SynchronizationObject *a5)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbx
  struct _SLIST_ENTRY *Next; // rax
  union _SLIST_HEADER *v14; // rbx
  struct _ERESOURCE *v15; // rcx
  struct DirectComposition::CBatch *v16; // rbx

  if ( a4 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  a2[4].Next = (struct _SLIST_ENTRY *)PerformanceCounter.QuadPart;
  v9 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v9, 1u);
  if ( a5 && !*((_BYTE *)a5 + 33) )
    DirectComposition::CBatch::SetSynchronizationObject((DirectComposition::CBatch *)a2, a5);
  v10 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v10 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
  }
  if ( *((int *)this + 6) <= 0
    && (v11 = *((_QWORD *)this + 5),
        v12 = *(struct _ERESOURCE **)(v11 + 8),
        KeEnterCriticalRegion(),
        ExAcquireResourceSharedLite(v12, 1u),
        LODWORD(v12) = *(_DWORD *)(v11 + 148),
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 8)),
        KeLeaveCriticalRegion(),
        (_DWORD)v12) )
  {
    Next = a2->Next;
    v14 = (union _SLIST_HEADER *)*((_QWORD *)this + 5);
    *((_QWORD *)&a2[1].Next + 1) = a2->Next;
    if ( Next )
      *((_QWORD *)&Next[1].Next + 1) = a3;
    ExpInterlockedPushEntrySList(v14 + 6, a2);
    KeSetEvent(*(PRKEVENT *)(v14[5].Alignment + 8), 1, 0);
  }
  else
  {
    if ( ((__int64)a2[2].Next & 1) != 0 )
      *((_BYTE *)this + 48) &= ~2u;
    do
    {
      v16 = (struct DirectComposition::CBatch *)a2->Next;
      a2->Next = 0LL;
      DirectComposition::CBatch::ReturnToApplication((DirectComposition::CBatch *)a2, 0);
      a2 = (struct _SLIST_ENTRY *)v16;
    }
    while ( v16 );
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 16LL))(this);
  }
  v15 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v15 )
  {
    ExReleaseResourceLite(v15);
    KeLeaveCriticalRegion();
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
}
