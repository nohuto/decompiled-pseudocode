/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1C00423B8
 * Callers:
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000C900 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000DCC0 (HUBFDO_PowerSettingCallback.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C00188D0 (HUBPDO_EvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_ComponentInactive()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C006AC88 )
    v1 = qword_1C006AC88();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}
