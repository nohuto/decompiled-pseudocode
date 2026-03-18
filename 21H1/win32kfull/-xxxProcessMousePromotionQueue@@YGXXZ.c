/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YGXXZ @ 0x17D847
 * Callers:
 *     _xxxCleanupThreadPointerInputInfo@4 @ 0x9AFC6 (_xxxCleanupThreadPointerInputInfo@4.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@@Z @ 0x17D816 (-xxxCompletePendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YGHGKK@Z @ 0x17DB68 (-xxxPromotePointer@PointerPromotion@@YGHGKK@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxWaitForDITMouseInjectionFlush@0 @ 0xAFF56 (_xxxWaitForDITMouseInjectionFlush@0.c)
 *     ?DequeueMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@AAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x17CE53 (-DequeueMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@AAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YGXABUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x17DC6B (-xxxSendMousePromotion@@YGXABUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void __stdcall xxxProcessMousePromotionQueue()
{
  struct tagMOUSE_PROMOTION_ENTRY *i; // eax
  bool v1; // al
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v4; // esi
  const struct tagMOUSE_PROMOTION_ENTRY *v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+4h] [ebp-1Ch]
  int v7; // [esp+10h] [ebp-10h]
  _DWORD v8[3]; // [esp+14h] [ebp-Ch] BYREF

  v7 = 0;
  memset(v8, 0, sizeof(v8));
  if ( !dword_2752F8 && dword_27528C )
  {
    dword_2752FC &= ~1u;
    dword_2752F8 = _gptiCurrent;
    for ( i = DequeueMousePromotionEntry(&dword_27528C); ; i = DequeueMousePromotionEntry(&dword_27528C) )
    {
      v4 = (int)i;
      if ( !i )
        break;
      v1 = (unsigned __int8)HasCapture()
        && !CheckIntegrityAccessToCapture(
              *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 496),
              *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 500));
      if ( glDitMouseHandling || (*(_BYTE *)(v4 + 44) & 0x20) != 0 && v1 )
        v7 = 1;
      PushW32ThreadLock(v4, v8, (int)RundownAPCInvalidateCOMPOSITEDWnd);
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      UserSessionSwitchLeaveCrit();
      xxxSendMousePromotion(v5, v6);
      EnterCrit(0, 1);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      *(_DWORD *)(ThreadWin32Thread + 8) = v8[0];
      Win32FreePool(v4);
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned __int8)IsInputThread() )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_26:
        dword_2752F8 = 0;
        return;
      }
    }
    else
    {
      if ( v7 )
        goto LABEL_26;
      if ( _gdwInAtomicOperation )
      {
        if ( (_gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      }
    }
    UserSessionSwitchLeaveCrit();
    ProcessMouseEvent();
    EnterCrit(0, 1);
    goto LABEL_26;
  }
}
