/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C0103268
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0103194 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C0103318 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C0103394 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0103408 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C20 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0122A50 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        Ndis::BindState **a4)
{
  Ndis::BindState *v8; // rax
  char v9; // al
  NDIS_BIND_LINK_BASE *v10; // rbx
  bool v11; // di
  unsigned __int16 *v13; // rdx
  volatile signed __int32 *v14; // rcx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  (*a4)->Miniport = a1;
  if ( Ndis::BindState::SetSource(*a4, AddBindSource, Registry)
    && (unsigned __int8)byte_1C00E448B >= 4u
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = (unsigned __int16 *)*((_QWORD *)(*a4)[1].m_AdditionalContext + 3);
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v13,
      0x1Cu,
      0xAu,
      (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
      v13,
      (*a4)->Miniport);
  }
  NDIS_BIND_LINK_BASE::LinkToDriver(
    (NDIS_BIND_LINK_BASE *)*a4,
    (struct NDIS_BIND_DRIVER_BASE *)(*a4)[1].m_AdditionalContext);
  v8 = *a4;
  *a4 = 0LL;
  P = v8;
  v9 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
         a2,
         a3,
         &P);
  v10 = (NDIS_BIND_LINK_BASE *)P;
  v11 = v9 == 0;
  if ( P )
  {
    v14 = (volatile signed __int32 *)*((_QWORD *)P + 10);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 12, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v14);
      v10 = (NDIS_BIND_LINK_BASE *)P;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v10);
    ExFreePoolWithTag(v10, 0x4C745042u);
  }
  if ( v11 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
