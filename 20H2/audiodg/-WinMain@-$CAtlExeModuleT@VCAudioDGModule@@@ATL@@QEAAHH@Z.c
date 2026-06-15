/*
 * XREFs of ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140014B94
 * Callers:
 *     WinMain @ 0x140014C30 (WinMain.c)
 * Callees:
 *     _lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator() @ 0x140013E1C (_lambda_469503bf6dae88a4a10e2b9fb17df9f1_--operator().c)
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x1400141B0 (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140014368 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014AE8 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14003E170 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::WinMain(CAudioDGModule *this, int a2)
{
  unsigned int v2; // ebx
  const unsigned __int16 *CommandLineW; // rax
  int *v6; // r8
  int v7; // eax
  void *v8; // rdx
  wil::details *v9; // rcx
  int v10; // esi
  bool v11; // sf
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( ATL::CAtlBaseModule::m_bInitFailed )
    return 0xFFFFFFFFLL;
  CommandLineW = GetCommandLineW();
  if ( CAudioDGModule::ParseCommandLine((void **)this, CommandLineW, v6) == 1 )
  {
    v14 = a2;
    v13[1] = &v14;
    v13[0] = this;
    v7 = lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator()(v13);
    v9 = (wil::details *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 28) = v7;
    if ( v9 )
      wil::details::SetEvent(v9, v8);
    v10 = *((_DWORD *)this + 28);
    v11 = v10 < 0;
    if ( !v10 )
    {
      CAudioDGModule::RunMessageLoop((HANDLE *)this, (__int64)v8);
      v11 = 0;
    }
    if ( !v11 )
      return (unsigned int)CAudioDGModule::PostMessageLoop(this);
    return (unsigned int)v10;
  }
  return v2;
}
