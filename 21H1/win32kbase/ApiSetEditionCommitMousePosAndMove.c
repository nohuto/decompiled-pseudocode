/*
 * XREFs of ApiSetEditionCommitMousePosAndMove @ 0x1C003931C
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C0039134 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 * Callees:
 *     EditionCommitMousePosAndMove @ 0x1C0039438 (EditionCommitMousePosAndMove.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCommitMousePosAndMove(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  int v13; // ebp
  unsigned int v15; // ebx
  int v16; // eax

  v13 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      314,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v15 = 0;
  if ( qword_1C02597B8 )
    v16 = qword_1C02597B8();
  else
    v16 = -1073741637;
  if ( v16 >= 0 )
    v15 = EditionCommitMousePosAndMove(a1, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      315,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v15;
}
