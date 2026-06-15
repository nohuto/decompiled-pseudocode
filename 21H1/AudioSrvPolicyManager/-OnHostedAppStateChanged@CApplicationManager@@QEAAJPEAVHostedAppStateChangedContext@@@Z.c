/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x1800251B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x1800162E0 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     WPP_SF_Sis @ 0x1800200F0 (WPP_SF_Sis.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180023524 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180025364 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        struct HostedAppStateChangedContext *a2,
        __int64 a3)
{
  BOOL v5; // ebp
  struct CApplication *v6; // r14
  const char *v7; // rax
  int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdi
  const unsigned __int16 *v11; // rsi
  int Application; // ebx
  int v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  CApplication *v16; // [rsp+A0h] [rbp+18h] BYREF
  char *v17; // [rsp+A8h] [rbp+20h]

  v5 = 0;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = "HAC_NON_INTERACTIVE";
    if ( *((_DWORD *)a2 + 3) )
      v7 = "HAC_INTERACTIVE";
    WPP_SF_Sis(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (__int64)"HAC_INTERACTIVE",
      a3,
      *(const wchar_t **)a2,
      *((_QWORD *)a2 + 2),
      v7);
  }
  v8 = *((_DWORD *)a2 + 3);
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_QWORD *)a2 + 2);
  v11 = *(const unsigned __int16 **)a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17 = (char *)this + 32;
  v14 = 0;
  v15 = 0;
  Application = CApplicationManager::GetApplication(this, v11, v10, v9, &v16, 1, &v14);
  if ( Application >= 0 )
  {
    Application = CApplication::UpdateHostedAppState(v16, v8, &v15);
    if ( Application >= 0 )
    {
      v5 = v14 || v15;
      v6 = v16;
    }
  }
  if ( this != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        &WPP_386a857d2e283c5fe15986819513c374_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnHostedAppStateChanged", 2809, Application);
  }
  else if ( v5 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  return (unsigned int)Application;
}
