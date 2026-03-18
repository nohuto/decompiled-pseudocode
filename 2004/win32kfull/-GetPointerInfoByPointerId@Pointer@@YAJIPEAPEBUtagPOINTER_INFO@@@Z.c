/*
 * XREFs of ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C02445D4
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C02556EC (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C02562E8 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02575E0 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F16A0 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0244638 (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall Pointer::GetPointerInfoByPointerId(Pointer *this, _QWORD *a2, const struct tagPOINTER_INFO **a3)
{
  __int16 v3; // bx
  __int64 ThreadWin32Thread; // rax
  struct _LIST_ENTRY *ThreadPointerData; // rax
  const struct tagPOINTER_INFO **v7; // r8
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int16)this;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadPointerData = GetThreadPointerData((struct _LIST_ENTRY *)(ThreadWin32Thread + 1080), v3, &v9, 0LL);
  if ( ThreadPointerData )
    return Pointer::GetPointerInfoByPointerMsgId((Pointer *)ThreadPointerData, (unsigned __int64)a2, v7);
  else
    return 3221225485LL;
}
