/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01A6B40
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6D30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A68C0 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C01A6A88 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

void __fastcall CBaseInput::OnInputSuppressed(void **this)
{
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rbx

  IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle((CBaseInput *)this, this[6]);
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, (char *)this[6], IsInjectionDeviceFromKernelHandle != 0);
  if ( DeviceInfo )
  {
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    ++*((_DWORD *)DeviceInfo + 572);
    qword_1C02563A8 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
  }
}
