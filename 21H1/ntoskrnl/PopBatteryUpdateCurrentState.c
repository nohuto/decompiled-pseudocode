/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140779C98
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x140779C64 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402EBC50 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x140397AC8 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C23880; qword_140C23880 + 50000000 <= v3; i = qword_140C23880 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140C23888, &qword_140C23880, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
