/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C0102738
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C0102398 (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C002AAA4 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C0100838 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C01033F4 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0103468 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0107F24 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116664 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0122A10 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123080 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  struct NDIS_BIND_FILTER_LINK *v8; // rsi
  NDIS_BIND_LINK_BASE *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // di
  int v16; // edx
  unsigned __int64 v17; // rdx
  volatile signed __int32 *Miniport; // rcx
  struct NDIS_BIND_FILTER_LINK *v19; // [rsp+40h] [rbp-F8h]
  char v20[160]; // [rsp+50h] [rbp-E8h] BYREF

  (*a4)->BindState.Miniport = a1;
  if ( Ndis::BindState::SetSource(&(*a4)->BindState, AddBindSource, Registry) )
  {
    memset(v20, 0, sizeof(v20));
    if ( (unsigned __int8)byte_1C00E444B >= 4u )
    {
      ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v20);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          0x1Cu,
          0xAu,
          (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
          *(unsigned __int16 **)&v20[8],
          *(_QWORD *)v20);
    }
  }
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE);
  v8 = *a4;
  *a4 = 0LL;
  v9 = (NDIS_BIND_LINK_BASE *)v8;
  v10 = a2[1];
  v19 = v8;
  if ( a3 > v10 )
    goto LABEL_11;
  v11 = *a2;
  v12 = (unsigned int)(v10 + 1);
  if ( v11 >= v12 )
    goto LABEL_5;
  if ( v12 < 4 )
    v12 = 4LL;
  v17 = ((unsigned int)v11 >> 1) + (unsigned int)v11;
  if ( v12 >= v17 )
    v17 = v12;
  if ( (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
                          a2,
                          v17) )
  {
LABEL_5:
    v13 = a2[1];
    if ( a3 < v13 )
      Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        (__int64)a2,
        a3,
        a3 + 1,
        v13 - a3);
    v9 = 0LL;
    v19 = 0LL;
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * a3) = v8;
    ++a2[1];
    v14 = 1;
    v8 = 0LL;
  }
  else
  {
LABEL_11:
    v14 = 0;
  }
  if ( v8 )
  {
    Miniport = (volatile signed __int32 *)v9[1].BindState.Miniport;
    if ( Miniport )
    {
      if ( _InterlockedExchangeAdd(Miniport + 16, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
      v9 = (NDIS_BIND_LINK_BASE *)v19;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v9);
    ExFreePoolWithTag(v9, 0x4C6C4642u);
  }
  if ( !v14 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
