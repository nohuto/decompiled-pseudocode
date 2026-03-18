/*
 * XREFs of ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0010F78
 * Callers:
 *     _lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_ @ 0x1C00107A0 (_lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_--_lambda_invoker_cdecl_.c)
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0010EF0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C009DDE0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01C045C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     <none>
 */

CInpLockSharedIfNeeded *__fastcall CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        CInpLockSharedIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v4; // al

  *(_QWORD *)this = a2;
  v4 = *((_QWORD *)a2 + 1) == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v4;
  if ( !v4 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(a2, 0LL);
  }
  return this;
}
