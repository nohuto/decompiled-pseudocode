/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x14078A6A8
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x14078A674 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402F3810 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14039A64C (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C23780; qword_140C23780 + 50000000 <= v3; i = qword_140C23780 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140C23788, &qword_140C23780, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
