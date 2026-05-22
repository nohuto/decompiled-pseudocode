/*
 * XREFs of ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C3508
 * Callers:
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007BB3C (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FF14 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1800C1BF0 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800C1E38 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800C1E90 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C27F4 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C3750 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?TransitionZoomTypes@ManipulationInjector@@AEAAXXZ @ 0x1800C3C48 (-TransitionZoomTypes@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z @ 0x1800C3E24 (-UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z.c)
 *     ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x1800C3EB0 (-UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z.c)
 */

void __fastcall ManipulationInjector::InjectZoom(ManipulationInjector *this, float a2, unsigned int a3)
{
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  const char *v22; // r9
  unsigned int v23; // edx
  struct tagRECT v24; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !ManipulationInjector::IsInContactForDeviceId(this, a3) )
    return;
  if ( *((_BYTE *)this + 13) )
    DbgPrint("Zoom Delta: %d.%03d\n", (int)a2, (int)(float)(a2 * 1000.0) - 1000 * (int)a2);
  if ( *((_DWORD *)this + 22) != 32 )
  {
    if ( *((_DWORD *)this + 22) != 16 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        679LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
    if ( a2 >= 1.0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( a2 > 1.0 )
LABEL_10:
    ManipulationInjector::TransitionZoomTypes(this);
LABEL_11:
  if ( *((_DWORD *)this + 12) != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      688LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v5);
    __debugbreak();
  }
  ManipulationInjector::UpdateZoomContacts(this, 0, a2);
  v24 = (struct tagRECT)*((_OWORD *)this + 4);
  ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v24, 0);
  v24 = (struct tagRECT)*((_OWORD *)this + 4);
  ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v24, 0);
  if ( *(_DWORD *)this == 2 )
  {
    v24 = *(struct tagRECT *)((char *)this + 756);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 19, &v24, 0);
    v24 = *(struct tagRECT *)((char *)this + 756);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 38, &v24, 0);
  }
  if ( ManipulationInjector::CheckOverlapAndEvent(this, v6, v7, v8) )
  {
    if ( *((_DWORD *)this + 2) == 1 && *((_BYTE *)this + 12) )
    {
      ManipulationInjector::AddZoomContacts((struct tagPOINT *)this, a3, v10, v11);
      ManipulationInjector::InjectAndScrub(this, v12, v13, v14);
      *((_DWORD *)this + 31) = 0x40000;
      *((_DWORD *)this + 69) = 0x40000;
      ManipulationInjector::UpdateZoomContacts(this, 2u, 0.0);
    }
    else
    {
      ManipulationInjector::InjectAndScrub(this, v9, v10, v11);
      *((_DWORD *)this + 31) = 0x40000;
      *((_DWORD *)this + 69) = 0x40000;
      ManipulationInjector::InjectAndScrub(this, v15, v16, v17);
      ManipulationInjector::AddZoomContacts((struct tagPOINT *)this, a3, v18, v19);
      ManipulationInjector::InjectAndScrub(this, v20, v21, v22);
      ManipulationInjector::UpdateZoomContactsForThreshold(this, v23);
    }
  }
  ManipulationInjector::InjectAndScrub(this, v9, v10, v11);
}
