/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C009BBF0
 * Callers:
 *     NtDCompositionCommitChannel @ 0x1C009B960 (NtDCompositionCommitChannel.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C009D068 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001D584 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C009BFB4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009C07C (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009C11C (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C009C200 (EtwTraceDCompCommitBatchEvent.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C009C55C (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009CBB4 (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009CC9C (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009CD10 (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009CD84 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009CE48 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C009CEB8 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A3024 (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A30B4 (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A3174 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A322C (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00A8B74 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  unsigned int v17; // edx
  DirectComposition::CEvent *v18; // rcx
  char *v19; // rax
  char *v20; // rcx
  void *v21; // [rsp+20h] [rbp-10h] BYREF
  struct DirectComposition::CBatch *v22; // [rsp+70h] [rbp+40h] BYREF
  void *v23; // [rsp+78h] [rbp+48h] BYREF
  void *v24; // [rsp+80h] [rbp+50h] BYREF

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
    v22 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v22)
      || !DirectComposition::CTelemetryInfo::EmitAnimationCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v22)
      || !DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v22)
      || !DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v22)
      || !DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v22) )
    {
      goto LABEL_69;
    }
    if ( *((_QWORD *)this + 93) )
    {
      v23 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v22, 0x34uLL, &v23) )
      {
        v16 = (char *)v23;
        *(_DWORD *)v23 = 52;
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
        v18 = (DirectComposition::CEvent *)*((_QWORD *)this + 92);
        *((_QWORD *)this + 93) = 0LL;
        if ( v18 )
          DirectComposition::CEvent::`scalar deleting destructor'(v18, v17);
        *((_QWORD *)this + 92) = 0LL;
      }
      if ( *((_QWORD *)this + 93) )
        goto LABEL_69;
    }
    if ( !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v22) )
      goto LABEL_69;
    if ( ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0 )
    {
      v24 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v22, 0xCuLL, &v24) )
      {
        v19 = (char *)v24;
        *(_DWORD *)v24 = 12;
        *(_QWORD *)(v19 + 4) = 0LL;
        *((_DWORD *)v19 + 1) = 48;
        if ( *((_DWORD *)this + 148) == 1 )
        {
          v19[8] = 1;
          *((_DWORD *)this + 148) = 2;
        }
        else
        {
          v19[8] = 0;
          *((_DWORD *)this + 148) = 0;
        }
      }
    }
    if ( (*((_DWORD *)this + 148) & 0xFFFFFFFD) != 0 )
      goto LABEL_69;
    if ( *((char *)this + 240) < 0 )
    {
      v21 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v22, 0xCuLL, &v21) )
      {
        v20 = (char *)v21;
        *(_DWORD *)v21 = 12;
        *(_QWORD *)(v20 + 4) = 0LL;
        *((_DWORD *)v20 + 1) = 51;
        v20[8] = *((_BYTE *)this + 241) & 1;
        v20[9] = (*((_BYTE *)this + 241) & 2) != 0;
        *((_BYTE *)this + 240) &= ~0x80u;
      }
      if ( *((char *)this + 240) < 0 )
LABEL_69:
        v8 = 0;
    }
    v11 = v22;
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
