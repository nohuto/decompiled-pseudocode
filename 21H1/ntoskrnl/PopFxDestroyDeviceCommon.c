/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1403C9340
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1403C91E8 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1405785E8 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405786F8 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P, int a2)
{
  if ( !(unsigned int)Feature_Servicing_27169067__private_IsEnabled()
    || (_m_prefetchw(P + 29), _InterlockedAnd((volatile signed __int32 *)P + 58, ~a2) == a2) )
  {
    ExFreePoolWithTag(P[28], 0x4D584650u);
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}
