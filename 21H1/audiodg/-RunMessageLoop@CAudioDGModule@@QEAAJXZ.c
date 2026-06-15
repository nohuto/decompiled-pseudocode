/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014DF8
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140014EA4 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x14000538C (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1400341BC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     WPP_SF_ @ 0x140034220 (WPP_SF_.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140034408 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rcx
  DWORD v5; // edi
  __int64 v6; // rcx
  HANDLE CurrentProcess; // rax
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  HANDLE Handles[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v11[32]; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+74h] [rbp-14h]

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_4b1fa032b8643535ec497c87501ebc2b_Traceguids);
  }
  Handles[0] = this[15];
  Handles[1] = this[17];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, a2, *((unsigned int *)this + 38));
  do
  {
    v5 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v5 == 1 )
    {
      *((_BYTE *)this + 148) = 1;
      v6 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
             v4,
             _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v6 > 2u
        && (*(_QWORD *)(v6 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v6 + 24) & 0x400000000000LL) == *(_QWORD *)(v6 + 24) )
      {
        v14 = 0;
        v12 = &v9;
        v9 = 0x1000000LL;
        v13 = 8;
        tlgWriteTransfer_EtwEventWriteTransfer(v6, (unsigned int)&unk_140071CE2, 0, 0, 3, (__int64)v11);
      }
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v5 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_4b1fa032b8643535ec497c87501ebc2b_Traceguids);
  }
  return 0LL;
}
