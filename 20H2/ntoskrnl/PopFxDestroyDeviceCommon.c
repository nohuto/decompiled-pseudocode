/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1403CCD54
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1403CCC38 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x14057C668 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14057C778 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P, int a2)
{
  _m_prefetchw(P + 29);
  if ( _InterlockedAnd((volatile signed __int32 *)P + 58, ~a2) == a2 )
  {
    ExFreePoolWithTag(P[28], 0x4D584650u);
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}
