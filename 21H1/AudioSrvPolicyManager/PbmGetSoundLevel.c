/*
 * XREFs of PbmGetSoundLevel @ 0x180029020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dS @ 0x180020278 (WPP_SF_dS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180020308 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024798 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmGetSoundLevel(
        void *a1,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        unsigned __int16 *a4,
        int *a5)
{
  int Process; // edi
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  const wchar_t *v11; // rax
  __int64 v12; // r10
  struct CProcess *v14; // [rsp+30h] [rbp-18h] BYREF

  Process = 0;
  v14 = 0LL;
  if ( a5 )
  {
    *a5 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v14);
      if ( Process >= 0 )
        *a5 = CApplicationManager::GetSoundLevel(v9, (__int64)v14, a2, a3, a4);
      v10 = (volatile signed __int32 *)v14;
      if ( v14 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v11 = SoundLevelToString(*a5);
          WPP_SF_dS(
            *(_QWORD *)(v12 + 16),
            0xCu,
            &WPP_4109024a29aa3ddbb06fcdb3e71bfe0c_Traceguids,
            *((_DWORD *)v10 + 48),
            v11);
          v10 = (volatile signed __int32 *)v14;
        }
        if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 32LL))(v10);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)Process;
}
