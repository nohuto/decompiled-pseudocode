/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x1800209A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180012518 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Ss @ 0x18001A860 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001DBC4 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001F228 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        CApplicationManager *this,
        struct ApplicationStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v5; // r8
  const char *v6; // rax
  int Application; // eax
  unsigned int v8; // esi
  int v9; // edx
  struct CApplication *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v15; // [rsp+48h] [rbp-30h]
  struct CApplication *v16; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+88h] [rbp+10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17 = v4;
  v16 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = "PENDING_TERMINATION";
    if ( !*((_DWORD *)a2 + 3) )
      v6 = "LAUNCHED";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)"LAUNCHED", v5, *(const wchar_t **)a2, v6);
  }
  Application = CApplicationManager::GetApplication(
                  this,
                  *(const unsigned __int16 **)a2,
                  *((_QWORD *)a2 + 2),
                  *((_DWORD *)a2 + 2),
                  &v16,
                  0,
                  0LL);
  v8 = Application;
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Eu,
        &WPP_386a857d2e283c5fe15986819513c374_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnApplicationStateChanged", 3363, v8);
  }
  else
  {
    v9 = *((_DWORD *)a2 + 3);
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v10 = v16;
        if ( *((_DWORD *)v16 + 52) )
          CApplicationManager::OnApplicationClosed(
            this,
            *(unsigned __int16 **)a2,
            *((_QWORD *)v16 + 80),
            *((_DWORD *)a2 + 2));
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v10 + 32);
        v15 = 0;
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        v11 = (_QWORD *)*((_QWORD *)v10 + 9);
        while ( v11 )
        {
          v12 = v11[2];
          v11 = (_QWORD *)*v11;
          if ( !*(_DWORD *)(v12 + 448) )
            *(_DWORD *)(v12 + 448) = 1;
        }
        if ( v15 )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v16);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v8;
}
