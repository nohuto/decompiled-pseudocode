/*
 * XREFs of _EtwpRemoveRegistrationFromTable@4 @ 0x4B2D9AD8
 * Callers:
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 */

signed __int32 __thiscall EtwpRemoveRegistrationFromTable(_DWORD *this)
{
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, this);
  *this++ = -1414812757;
  *this = -1414812757;
  this[1] = -1414812757;
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
