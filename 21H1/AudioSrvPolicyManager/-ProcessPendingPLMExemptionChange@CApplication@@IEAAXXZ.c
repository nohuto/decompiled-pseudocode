/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180016A44
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016520 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180017240 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18001B7AC (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ProcessPendingPLMExemptionChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int i; // ebp
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  if ( !*((_DWORD *)this + 94) )
  {
    *((_DWORD *)this + 94) = 1;
    for ( i = *((_DWORD *)this + 95); i; i = *((_DWORD *)this + 95) )
    {
      *((_DWORD *)this + 95) = 0;
      LeaveCriticalSection(v2);
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
      v7 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, i);
      }
      v4 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v4 )
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        CProcess::NotifyPLM(v5, i);
      }
      if ( v7 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
      }
      EnterCriticalSection(v2);
    }
    *((_DWORD *)this + 94) = 0;
  }
  LeaveCriticalSection(v2);
}
