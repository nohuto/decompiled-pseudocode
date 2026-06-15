/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180015EEC
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180020930 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020FBC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180015254 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18001A650 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18001D91C (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  int ApplicationSpecificEndpointInfo; // eax
  struct IApplicationSpecificEndpointInfo *v5; // rbx
  int v6; // eax
  __int64 **i; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IApplicationSpecificEndpointInfo *v12; // [rsp+68h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v12 = 0LL;
  ApplicationSpecificEndpointInfo = CProcess::GetApplicationSpecificEndpointInfo(
                                      (struct CProcess *)((char *)a2 + 16),
                                      &v12);
  v5 = v12;
  if ( ApplicationSpecificEndpointInfo >= 0 )
  {
    if ( v12 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IApplicationSpecificEndpointInfo *, _QWORD))(*(_QWORD *)v12 + 72LL))(
             v12,
             *((unsigned int *)a2 + 48));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x168,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  for ( i = (__int64 **)*((_QWORD *)this + 9); i && i[2] != (__int64 *)a2; i = (__int64 **)*i )
    ;
  if ( i )
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt();
  if ( v5 )
    (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
