/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004BE0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C0045F70 (NtUserRegisterTouchPadCapable.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C005D47C (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 *     HandleInputDestDestruction @ 0x1C007166C (HandleInputDestDestruction.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0071A84 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00AB3EC (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7D70 (HMDestroyUnlockedObject.c)
 *     NtUserEnableTouchPad @ 0x1C0138A20 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C013EC10 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C019A05C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     PostEvent @ 0x1C01B18E8 (PostEvent.c)
 *     PostThreadEvent @ 0x1C01B1A2C (PostThreadEvent.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01C1110 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01C12BC (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C0071880 (UserIsUserCritSecInExclusive.c)
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
