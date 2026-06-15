/*
 * XREFs of WinMain @ 0x140014C00
 * Callers:
 *     __scrt_common_main_seh @ 0x14001CE18 (__scrt_common_main_seh.c)
 * Callees:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140014B64 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 *     McGenEventRegister_EtwEventRegister @ 0x140014D1C (McGenEventRegister_EtwEventRegister.c)
 *     WppInitUm @ 0x140014D5C (WppInitUm.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x14003EB30 (WPP_SF_S.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140050FB0 (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // eax
  int v9; // edi
  _QWORD *v10; // rbx
  LPVOID Context; // [rsp+20h] [rbp-18h] BYREF

  byte_14008FF60 = 0;
  qword_140090248 = 0LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  qword_140090250 = 1LL;
  WppInitUm(hInstance, hPrevInstance);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, lpCmdLine);
  }
  HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  McGenEventRegister_EtwEventRegister();
  if ( gMaxSize )
  {
    v9 = -2147023649;
  }
  else
  {
    gInitialSize = 0x200000LL;
    gMinSize = 4LL;
    gMaxSize = 0x8000LL;
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
    {
      v8 = ATL::CAtlExeModuleT<CAudioDGModule>::WinMain((CAudioDGModule *)&_AtlModule, nShowCmd);
      v9 = v8;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_4b1fa032b8643535ec497c87501ebc2b_Traceguids, v8);
      }
      AERTMemoryShutdown();
    }
    else
    {
      v9 = -2147024882;
    }
  }
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    while ( v10 )
    {
      if ( v10[1] )
      {
        EtwUnregisterTraceGuids();
        v10[1] = 0LL;
      }
      v10 = (_QWORD *)*v10;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v9;
}
