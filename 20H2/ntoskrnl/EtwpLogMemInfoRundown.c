/*
 * XREFs of EtwpLogMemInfoRundown @ 0x140940480
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14078D08C (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14032B8A8 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x1405A7188 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x14093923C (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  MmQuerySystemMemoryInformation(v2);
  EtwpLogMemInfo(a1, (__int64)v2);
  EtwpLogMemInfoWs(a1, *(unsigned __int64 *)&v2[0]);
}
