/*
 * XREFs of ?GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z @ 0x1A15D9
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@ABEJI@Z @ 0x1AFE5F (-ValidatePointer@HideInkCursorProvider@@ABEJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@ABEJIPAM@Z @ 0x1B0714 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@ABEJIPAM@Z.c)
 *     ?ValidatePointer@InkDevice@@ABEJI@Z @ 0x1B1401 (-ValidatePointer@InkDevice@@ABEJI@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z @ 0x15ADC8 (-GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YGJKPAPBUtagPOINTER_INFO@@@Z @ 0x1A1621 (-GetPointerInfoByPointerMsgId@Pointer@@YGJKPAPBUtagPOINTER_INFO@@@Z.c)
 */

int __fastcall Pointer::GetPointerInfoByPointerId(__int16 a1, _DWORD *a2)
{
  PKTHREAD CurrentThread; // eax
  unsigned int *v4; // ecx
  int ThreadWin32Thread; // eax
  unsigned int *v7; // [esp-4h] [ebp-10h]
  int *v8; // [esp+0h] [ebp-Ch]
  Pointer *v9; // [esp+0h] [ebp-Ch]
  HWND *v10; // [esp+4h] [ebp-8h]
  unsigned int v11; // [esp+4h] [ebp-8h]
  const struct tagPOINTER_INFO **v12; // [esp+8h] [ebp-4h] BYREF

  *a2 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = v4;
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( GetThreadPointerData(
         a1,
         (struct tagTHREADPOINTERDATA **)(ThreadWin32Thread + 612),
         (struct tagTHREADINPUTPOINTERLIST *)&v12,
         0,
         v7,
         v8,
         v10) )
  {
    return Pointer::GetPointerInfoByPointerMsgId(v9, v11, v12);
  }
  else
  {
    return -1073741811;
  }
}
