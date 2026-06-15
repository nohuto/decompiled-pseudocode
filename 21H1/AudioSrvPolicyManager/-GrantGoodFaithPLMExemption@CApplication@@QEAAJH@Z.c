/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180016F54
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180023CB4 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000FF70 (WPP_SF_S.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800170C0 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180024018 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(char *pv)
{
  int v2; // edx
  _UNKNOWN **v3; // rcx
  int started; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)pv + 108) )
  {
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
        *((const wchar_t **)pv + 3));
      v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    started = -2147024809;
  }
  else
  {
    *((_DWORD *)pv + 141) = 2;
    *((_DWORD *)pv + 142) = 1;
    *((_DWORD *)pv + 143) = 0;
    *((_DWORD *)pv + 144) = 1;
    *((_DWORD *)pv + 145) = 2;
    *((_DWORD *)pv + 146) = 1;
    *((_DWORD *)pv + 147) = 2;
    started = CApplication::StartGoodFaithPLMExemptionTimer(pv, v2);
    if ( started >= 0 )
    {
      *((_DWORD *)pv + 108) = 1;
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)pv, 0xA3u, 0);
      goto LABEL_15;
    }
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x40000000) != 0 && *((_BYTE *)v3 + 25) >= 2u )
    WPP_SF_d((TRACEHANDLE)v3[2], 0x12u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, started);
  AudPolicyLogError("CApplication::GrantGoodFaithPLMExemption", 1273, started);
LABEL_15:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)started;
}
