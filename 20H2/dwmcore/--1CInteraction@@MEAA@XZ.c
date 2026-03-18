/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x1800DBED4
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800DBE90 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18006FC14 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800DC548 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800DC604 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800DC690 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x180178BDC (McTemplateU0xxq_EventWriteTransfer.c)
 *     ?Remove@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801C60E0 (-Remove@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInter.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  CResource *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CInteraction *v8; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  v2 = (CInteraction *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0xxq_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&INTERACTION_DESTROYED,
      (_DWORD)this,
      (_DWORD)this + 8,
      *((_DWORD *)this + 424));
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_180342248 + (unsigned int)(Size * *((_DWORD *)this + 424)), 0, (unsigned int)Size);
  *((_DWORD *)this + 424) = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 13);
  CInteraction::UpdateInputSink(this, 0LL);
  if ( (*((_BYTE *)this + 185) & 1) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v8 = this;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Remove(v3, &v8);
  }
  v4 = *((_QWORD *)this + 215);
  if ( v4 )
  {
    *((_QWORD *)this + 215) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 344));
  v5 = *((_QWORD *)this + 34);
  if ( v5 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 16LL))(v5 + 8);
  }
  v6 = *((_QWORD *)this + 33);
  if ( v6 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  CResource::~CResource(v2);
}
