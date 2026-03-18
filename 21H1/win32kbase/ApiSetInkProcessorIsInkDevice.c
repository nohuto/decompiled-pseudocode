/*
 * XREFs of ApiSetInkProcessorIsInkDevice @ 0x1C00473E8
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetInkProcessorIsInkDevice(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v4; // si
  unsigned int v6; // ebx
  int v7; // eax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      110,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v6 = 0;
  if ( qword_1C0258FA8 )
    v7 = qword_1C0258FA8();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0258FB0 )
    v6 = qword_1C0258FB0(a1, v4, a3, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      111,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v6;
}
