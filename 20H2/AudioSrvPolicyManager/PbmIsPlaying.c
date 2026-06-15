/*
 * XREFs of PbmIsPlaying @ 0x180023860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dS @ 0x18001A918 (WPP_SF_dS.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18001EF44 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmIsPlaying(void *a1, _DWORD *a2)
{
  int Process; // edi
  CApplicationManager *v4; // rcx
  volatile signed __int32 *v5; // rbx
  const wchar_t *v6; // rax
  struct CProcess *v8; // [rsp+50h] [rbp+18h] BYREF

  Process = 0;
  v8 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v8);
      if ( Process >= 0 )
        *a2 = CApplicationManager::IsPlaying(v4, v8);
      v5 = (volatile signed __int32 *)v8;
      if ( v8 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v6 = L"Paused";
          if ( *a2 )
            v6 = (const wchar_t *)L"Playing";
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xDu,
            &WPP_4109024a29aa3ddbb06fcdb3e71bfe0c_Traceguids,
            *((_DWORD *)v8 + 48),
            v6);
          v5 = (volatile signed __int32 *)v8;
        }
        if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
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
