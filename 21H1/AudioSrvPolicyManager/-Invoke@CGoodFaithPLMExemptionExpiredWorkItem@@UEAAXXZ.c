/*
 * XREFs of ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180032380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18000FF70 (WPP_SF_S.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800163AC (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800173F8 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x180017A98 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180024018 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGoodFaithPLMExemptionExpiredWorkItem::Invoke(CGoodFaithPLMExemptionExpiredWorkItem *this)
{
  __int64 v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rdi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
      *(const wchar_t **)(*((_QWORD *)this + 1) + 24LL));
  }
  v2 = *((_QWORD *)this + 1);
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( *(_DWORD *)(v2 + 564) == 2 )
  {
    *(_DWORD *)(v2 + 564) = 0;
    *(_DWORD *)(v2 + 568) = 0;
    *(_DWORD *)(v2 + 572) = 0;
    *(_DWORD *)(v2 + 576) = 0;
    *(_DWORD *)(v2 + 580) = 0;
    *(_DWORD *)(v2 + 584) = 0;
    *(_DWORD *)(v2 + 588) = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
      *(const wchar_t **)(v2 + 24));
  }
  if ( (unsigned int)CApplication::Category(v2) != 1 )
  {
    if ( !*(_DWORD *)(v2 + 208) )
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption((CApplication *)v2);
    *(_DWORD *)(v2 + 432) = 0;
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)v2, 0xD1u, 0);
    CApplication::CleanupGoodFaithExemptionTimer((CApplication *)v2);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
