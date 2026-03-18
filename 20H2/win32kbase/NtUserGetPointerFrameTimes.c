/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x1C0131900
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C018FCA8 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // r15
  int PointerFrameTimesInternal; // ebx
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v4 = a2;
  v7 = EnterSharedCrit(0, 1);
  PointerFrameTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || (v9 = (unsigned int)(v4 - 1), (unsigned int)v9 > 0x63) || !a3 || a1 == 1 )
  {
    UserSetLastError(87LL, v6);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
    ProbeForWrite(a3, 40 * v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  v11,
                                  v7,
                                  a1,
                                  v4,
                                  (struct tagTELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return PointerFrameTimesInternal;
}
