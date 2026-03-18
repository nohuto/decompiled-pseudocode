/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C00B8F90
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C00B8A24 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     NtDCompositionCommitChannel @ 0x1C00B8D00 (NtDCompositionCommitChannel.c)
 * Callees:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0006EA4 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00B4284 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00B9354 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B941C (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B94BC (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C00B95A0 (EtwTraceDCompCommitBatchEvent.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C00B98FC (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B9F54 (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BA03C (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BA0B0 (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BA124 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BA1E8 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C00BA258 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BE964 (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BE9F4 (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BEAB4 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BEB6C (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        char a4)
{
  char v8; // di
  char v9; // cl
  struct DirectComposition::CBatch *BatchFragment; // r14
  struct DirectComposition::CBatch *v11; // rsi
  struct _ERESOURCE *v12; // r15
  char v14; // al
  __int64 v15; // rsi
  char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  DirectComposition::CEvent *v19; // rcx
  char *v20; // rax
  char *v21; // rcx
  void *v22; // [rsp+20h] [rbp-10h] BYREF
  struct DirectComposition::CBatch *v23; // [rsp+70h] [rbp+40h] BYREF
  void *v24; // [rsp+78h] [rbp+48h] BYREF
  void *v25; // [rsp+80h] [rbp+50h] BYREF

  v8 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v9 = *((_BYTE *)this + 240);
  if ( (v9 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 240) &= ~2u;
    v9 = *((_BYTE *)this + 240);
  }
  BatchFragment = 0LL;
  v11 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 21)
    || (v9 & 0x60) != 0
    || v9 < 0
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 50)
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 52)
    || *((DirectComposition::CApplicationChannel **)this + 66) != (DirectComposition::CApplicationChannel *)((char *)this + 528)
    || *((DirectComposition::CApplicationChannel **)this + 68) != (DirectComposition::CApplicationChannel *)((char *)this + 544)
    || *((DirectComposition::CApplicationChannel **)this + 70) != (DirectComposition::CApplicationChannel *)((char *)this + 560)
    || *((DirectComposition::CApplicationChannel **)this + 72) != (DirectComposition::CApplicationChannel *)((char *)this + 576)
    || *((_QWORD *)this + 93)
    || ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *((_BYTE *)this + 48) |= 2u;
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v15 = *((_QWORD *)this + 54);
    if ( v15 )
    {
      do
      {
        DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)v15 + 16LL));
        *(_DWORD *)(v15 + 24) |= 2u;
        v15 = *(_QWORD *)(v15 + 8);
      }
      while ( v15 );
      v15 = *((_QWORD *)this + 54);
    }
    *((_QWORD *)BatchFragment + 10) = v15;
    *((_QWORD *)this + 54) = 0LL;
    v23 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v23)
      || !DirectComposition::CTelemetryInfo::EmitAnimationCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v23)
      || !DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v23)
      || !DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v23)
      || !DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v23)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v23)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v23)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v23)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v23)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v23)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v23)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v23) )
    {
      goto LABEL_69;
    }
    if ( *((_QWORD *)this + 93) )
    {
      v24 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v23, 0x34uLL, &v24) )
      {
        v16 = (char *)v24;
        *(_DWORD *)v24 = 52;
        *((_DWORD *)v16 + 1) = 53;
        *((_DWORD *)v16 + 11) = *(_DWORD *)(*((_QWORD *)this + 93) + 24LL);
        *((_DWORD *)v16 + 2) = *((_DWORD *)this + 188);
        *((_DWORD *)v16 + 3) = *((_DWORD *)this + 189);
        *((_DWORD *)v16 + 4) = *((_DWORD *)this + 190);
        *((_DWORD *)v16 + 5) = *((_DWORD *)this + 191);
        *((_DWORD *)v16 + 6) = *((_DWORD *)this + 192);
        *(_QWORD *)(v16 + 28) = *((_QWORD *)this + 97);
        *(_QWORD *)(v16 + 36) = *((_QWORD *)this + 98);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 93));
        v19 = (DirectComposition::CEvent *)*((_QWORD *)this + 92);
        *((_QWORD *)this + 93) = 0LL;
        if ( v19 )
          DirectComposition::CEvent::`scalar deleting destructor'(v19, v17, v18);
        *((_QWORD *)this + 92) = 0LL;
      }
      if ( *((_QWORD *)this + 93) )
        goto LABEL_69;
    }
    if ( !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v23) )
      goto LABEL_69;
    if ( ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0 )
    {
      v25 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v23, 0xCuLL, &v25) )
      {
        v20 = (char *)v25;
        *(_DWORD *)v25 = 12;
        *(_QWORD *)(v20 + 4) = 0LL;
        *((_DWORD *)v20 + 1) = 48;
        if ( *((_DWORD *)this + 148) == 1 )
        {
          v20[8] = 1;
          *((_DWORD *)this + 148) = 2;
        }
        else
        {
          v20[8] = 0;
          *((_DWORD *)this + 148) = 0;
        }
      }
    }
    if ( (*((_DWORD *)this + 148) & 0xFFFFFFFD) != 0 )
      goto LABEL_69;
    if ( *((char *)this + 240) < 0 )
    {
      v22 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v23, 0xCuLL, &v22) )
      {
        v21 = (char *)v22;
        *(_DWORD *)v22 = 12;
        *(_QWORD *)(v21 + 4) = 0LL;
        *((_DWORD *)v21 + 1) = 51;
        v21[8] = *((_BYTE *)this + 241) & 1;
        v21[9] = (*((_BYTE *)this + 241) & 2) != 0;
        *((_BYTE *)this + 240) &= ~0x80u;
      }
      if ( *((char *)this + 240) < 0 )
LABEL_69:
        v8 = 0;
    }
    v11 = v23;
  }
  else
  {
    if ( !a4 )
    {
      v12 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
      if ( v12 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v12, 1u);
        if ( !*((_DWORD *)this + 56) )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
      goto LABEL_23;
    }
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v11 = BatchFragment;
  }
  *((_QWORD *)BatchFragment + 13) = *((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v11 )
    *(_BYTE *)(*((_QWORD *)v11 + 17) + 64LL) = 0;
LABEL_23:
  *a2 = BatchFragment;
  *a3 = v11;
  if ( v8 )
  {
    if ( v11 )
    {
      v14 = *((_BYTE *)this + 240);
      if ( (v14 & 0x10) != 0 )
      {
        *((_BYTE *)this + 240) = v14 & 0xEF;
        *((_BYTE *)v11 + 32) |= 8u;
      }
    }
    *((_BYTE *)this + 240) &= ~1u;
    *((_BYTE *)this + 241) &= ~2u;
  }
  return v8;
}
