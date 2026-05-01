/*
 * XREFs of ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1801BB720
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$ExperienceManager_PopulateDelayLoadedContactCard_Params@AEAU_GUID@@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1801B79FC (--$ExperienceManager_PopulateDelayLoadedContactCard_Params@AEAU_GUID@@@ExperienceManager_Populat.c)
 *     ??$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@0@Z @ 0x1801B7AB4 (--$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@Exp.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B87B8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801B87B8.c)
 *     ??1ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x1801B8C54 (--1ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801B917C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1801BC3D8 (-StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BC5DC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQuickConnectExperienceManager::PopulateDelayLoadedContactCard(
        CQuickConnectExperienceManager *this,
        struct _GUID *a2,
        struct IContact *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  int v10[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"ExperienceManager_PopulateDelayLoadedContactCard");
  *(_QWORD *)v10 = &QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::`vftable';
  QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::StartActivity((QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard *)v10);
  QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::ExperienceManager_PopulateDelayLoadedContactCard_Params<_GUID &>(
    (__int64)v10,
    (__int128 *)a2);
  v6 = *(_QWORD *)&a2->Data1 - *((_QWORD *)this + 35);
  if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)this + 35) )
    v6 = *(_QWORD *)a2->Data4 - *((_QWORD *)this + 36);
  if ( v6 )
  {
    QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch<_GUID &,_GUID &>(
      (__int64)v10,
      (__int128 *)a2,
      (__int128 *)((char *)this + 280));
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
    v7 = 1;
  }
  else
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 43, (__int64)a3);
    v8 = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 24));
    v7 = v8;
    if ( v8 >= 0 )
    {
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::~ExperienceManager_PopulateDelayLoadedContactCard((QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard *)v10);
  return v7;
}
