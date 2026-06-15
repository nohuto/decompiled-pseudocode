/*
 * XREFs of ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001B18C
 * Callers:
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180014E80 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800152B8 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B50C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B65C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterSession(
        CApplicationManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CApplicationManager *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // ebx

  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = CApplicationManager::Register(v5, a2);
  if ( v7 >= 0 )
  {
    v7 = CProcess::AddSession(a2, a3);
    if ( v7 >= 0 )
      goto LABEL_9;
    CApplicationManager::Unregister(v5, a2);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v7);
  }
  AudPolicyLogError("CApplicationManager::RegisterSession", 575, v7);
LABEL_9:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v7;
}
