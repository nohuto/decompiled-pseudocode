/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C019EA40
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C019EC30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C019E7C0 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C019E988 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

void __fastcall CBaseInput::OnInputSuppressed(void **this, __int64 a2, __int64 a3, __int64 a4)
{
  int IsInjectionDeviceFromKernelHandle; // eax
  __int64 v6; // r9
  struct DEVICEINFO *DeviceInfo; // rbx

  IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle((CBaseInput *)this, this[6], a3, a4);
  DeviceInfo = CBaseInput::FindDeviceInfo(
                 (CBaseInput *)this,
                 (char *)this[6],
                 IsInjectionDeviceFromKernelHandle != 0,
                 v6);
  if ( DeviceInfo )
  {
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    ++*((_DWORD *)DeviceInfo + 574);
    qword_1C024E418 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
  }
}
