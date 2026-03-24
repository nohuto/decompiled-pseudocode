/*
 * XREFs of EtwpPerfMemInfoWork @ 0x1409372F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogMemInfoWs @ 0x140936A0C (EtwpLogMemInfoWs.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpPerfMemInfoWork(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1[4];
  ExFreePoolWithTag(a1, 0);
  EtwpLogMemInfoWs(0LL, v1);
}
