/*
 * XREFs of HMAssignmentUnlock @ 0x1C0054AD0
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0008C9C (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0056B00 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0085208 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C008832C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     DestroyKL @ 0x1C00BCED8 (DestroyKL.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018BCDC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A4FE0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMUnlockObjectInternal @ 0x1C0054B50 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMAssignmentUnlock(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  GetDomainLockRef(14LL, a2, a3, a4);
  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(result + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(result);
  }
  return result;
}
