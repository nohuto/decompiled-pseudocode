/*
 * XREFs of EtwpLogMemInfoRundown @ 0x14093A650
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14077F77C (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14035AE48 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x1405A36E8 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x14093340C (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  MmQuerySystemMemoryInformation(v2);
  EtwpLogMemInfo(a1, (__int64)v2);
  EtwpLogMemInfoWs(a1, *(unsigned __int64 *)&v2[0]);
}
