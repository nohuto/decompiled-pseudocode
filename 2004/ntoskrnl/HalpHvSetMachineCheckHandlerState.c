/*
 * XREFs of HalpHvSetMachineCheckHandlerState @ 0x1404BDCF0
 * Callers:
 *     HalpPostSleepMP @ 0x140992004 (HalpPostSleepMP.c)
 *     HalpMceInit @ 0x14099D5FC (HalpMceInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetMachineCheckHandlerState()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v1 = 0LL;
  if ( qword_140C4A290 )
  {
    LODWORD(v1) = 1;
    BYTE4(v1) = 1;
    return ((__int64 (__fastcall *)(__int64 *))qword_140C4A290)(&v1);
  }
  return result;
}
