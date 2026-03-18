/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x14077C0A8
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x14077C074 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140325580 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x140396C68 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C232C0; qword_140C232C0 + 50000000 <= v3; i = qword_140C232C0 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140C232C8, &qword_140C232C0, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
