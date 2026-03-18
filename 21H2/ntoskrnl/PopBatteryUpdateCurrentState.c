/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x1407ED964
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x1407ED930 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14036972C (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C22B60; qword_140C22B60 + 50000000 <= v3; i = qword_140C22B60 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140C22B68, &qword_140C22B60, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
