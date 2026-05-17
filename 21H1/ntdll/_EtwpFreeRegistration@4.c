/*
 * XREFs of _EtwpFreeRegistration@4 @ 0x4B2D9A81
 * Callers:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

signed __int32 __thiscall EtwpFreeRegistration(_DWORD *this)
{
  signed __int32 result; // eax

  memset(this + 12, 0, 0xA0u);
  RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks[((unsigned int)&EtwpFreeRegistrationList >> 2) & 0x1F]);
  *this = EtwpFreeRegistrationList;
  LOWORD(dword_4B3A41E4) = dword_4B3A41E4 + 1;
  EtwpFreeRegistrationList = (int)this;
  result = RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks[((unsigned int)&EtwpFreeRegistrationList >> 2) & 0x1F]);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
