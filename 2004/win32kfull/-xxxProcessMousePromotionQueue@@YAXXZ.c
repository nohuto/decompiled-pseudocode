/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0219E2C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00EFA90 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021A064 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C021A270 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C003B140 (xxxWaitForDITMouseInjectionFlush.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C0219218 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C021A3B8 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // edi
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // cl
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v0 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( !qword_1C033ABB0 && qword_1C033AB30 )
  {
    dword_1C033ABB8 &= ~1u;
    qword_1C033ABB0 = gptiCurrent;
    for ( i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C033AB30);
          ;
          i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C033AB30) )
    {
      v11 = (__int64)i;
      if ( !i )
        break;
      v5 = (unsigned __int8)HasCapture()
        && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 880LL));
      if ( glDitMouseHandling || (*(_DWORD *)(v11 + 44) & 0x20) != 0 && v5 )
      {
        v6 = 1;
        v0 = 1;
      }
      else
      {
        v6 = 0;
      }
      PushW32ThreadLock(v11, &v13, (__int64)SpbApcRundown);
      if ( gdwInAtomicOperation )
      {
        v8 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v8, v7, v9);
      xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v11, v6);
      EnterCrit(0LL, 1LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v13;
      Win32FreePool(v11);
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned __int8)IsInputThread(v3, v2, v4) )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_26:
        qword_1C033ABB0 = 0LL;
        return;
      }
    }
    else
    {
      if ( v0 )
        goto LABEL_26;
      v12 = gdwInAtomicOperation;
      if ( gdwInAtomicOperation )
      {
        v3 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    UserSessionSwitchLeaveCrit(v3, v12, v4);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    goto LABEL_26;
  }
}
