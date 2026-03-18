/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01F0D14
 * Callers:
 *     NtUserPromotePointer @ 0x1C02011F0 (NtUserPromotePointer.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0242B40 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 *     xxxDefPointerProc @ 0x1C02449C0 (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F16A0 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

int __fastcall xxxPromotePointerToMouse(unsigned __int16 a1, unsigned int a2)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  HWND *v7; // [rsp+20h] [rbp-18h]

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL), a1, 0LL, 0LL, v7);
  if ( ThreadPointerData )
    return CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, ThreadPointerData, a2);
  UserSetLastError(87LL, v4, v5);
  return 0;
}
