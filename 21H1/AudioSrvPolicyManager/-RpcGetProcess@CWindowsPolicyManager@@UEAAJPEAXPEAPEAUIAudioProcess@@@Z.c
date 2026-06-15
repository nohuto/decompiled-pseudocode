/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000B300
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000C0F0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18000C380 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x18000C410 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18000CF20 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18000D010 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019F10 (-QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcGetProcess(
        CWindowsPolicyManager *this,
        void *a2,
        struct IAudioProcess **a3)
{
  int Process; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CProcess *v7; // rdi
  CProcess *v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a2, &v9);
  v5 = Process;
  if ( Process >= 0 )
  {
    Process = CProcess::QueryInterface(v9, &GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a, (void **)a3);
    v5 = Process;
    if ( Process >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 306LL;
  }
  else
  {
    v6 = 305LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)Process);
LABEL_7:
  v7 = v9;
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v7 + 32LL))(v7);
    (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  }
  return v5;
}
