/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x1800E01C4
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800E0180 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x18004A0BC (--$ReleaseInterface@V-$CWeakReference@VCResource@@@@@@YAXAEAPEAV-$CWeakReference@VCResource@@@@@.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E0BC8 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800E0C84 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800E105C (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ppq_EventWriteTransfer @ 0x180180CD4 (McTemplateU0ppq_EventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18026C340 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CInteraction **v8; // rax

  *(_QWORD *)this = &CInteraction::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CInteraction::`vftable'{for `IInteractionResource'};
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0ppq_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&INTERACTION_DESTROYED,
      (_DWORD)this,
      (_DWORD)this,
      *((_DWORD *)this + 426));
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_1803D1268 + (unsigned int)(Size * *((_DWORD *)this + 426)), 0, (unsigned int)Size);
  *((_DWORD *)this + 426) = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<CWeakReference<CResource>>((__int64 *)this + 14);
  SAFE_DELETE<CInputSinkStruct>((char *)this + 104);
  if ( (*((_BYTE *)this + 193) & 2) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v2 = (unsigned int)dword_1803D3820;
    v3 = 0LL;
    if ( dword_1803D3820 > 0 )
    {
      v8 = (CInteraction **)CInteraction::s_DefaultStateLockedInteractions;
      while ( *v8 != this )
      {
        v3 = (unsigned int)(v3 + 1);
        ++v8;
        if ( (int)v3 >= dword_1803D3820 )
          goto LABEL_6;
      }
      if ( (int)v3 >= 0 && (int)v3 + 1 <= dword_1803D3820 )
      {
        if ( (_DWORD)v3 + 1 != dword_1803D3820 )
        {
          memmove_0(
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * (int)v3,
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * (int)v3 + 8,
            8LL * (dword_1803D3820 - (int)v3 - 1));
          LODWORD(v2) = dword_1803D3820;
        }
        v2 = (unsigned int)(v2 - 1);
        dword_1803D3820 = v2;
      }
    }
  }
LABEL_6:
  if ( *((_QWORD *)this + 27) || *((_QWORD *)this + 30) || *((_QWORD *)this + 29) || *((_QWORD *)this + 28) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v4 = *((_QWORD *)this + 216);
  if ( v4 )
  {
    *((_QWORD *)this + 216) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, v2, v3);
  }
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 352));
  v5 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 16LL))(v5 + 8);
  }
  v6 = *((_QWORD *)this + 34);
  if ( v6 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CResource::~CResource(this);
}
