/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004D30 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C002EBFC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C0051B28 (DestroyThreadsObjects.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0054F94 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     HandleInputDestDestruction @ 0x1C005527C (HandleInputDestDestruction.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 *     xxxResetDisplayDevice @ 0x1C006F460 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C006F7A0 (-ResetSystemColors@@YAXXZ.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00B03A8 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00B4030 (NtUserRegisterTouchPadCapable.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7700 (HMDestroyUnlockedObject.c)
 *     NtUserEnableTouchPad @ 0x1C01306E0 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0136C20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0191E2C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     PostEvent @ 0x1C01A9808 (PostEvent.c)
 *     PostThreadEvent @ 0x1C01A994C (PostThreadEvent.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01B9040 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01B91EC (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C00554C0 (UserIsUserCritSecInExclusive.c)
 */

void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v2; // edx

  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      if ( !*(_BYTE *)this )
      {
        LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
        if ( gpAtomickCheckStacks )
        {
          v2 = 0;
          if ( gdwAtomicCheckLogSize )
          {
            while ( *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
            {
              if ( ++v2 >= gdwAtomicCheckLogSize )
                return;
            }
            *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) = 0;
          }
        }
      }
    }
  }
}
