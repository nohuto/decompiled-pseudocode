/*
 * XREFs of HalpCmcInitializeErrorPacketContents @ 0x1403C5978
 * Callers:
 *     HalpCmcInitializePolling @ 0x1403C5810 (HalpCmcInitializePolling.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A229C (HalpCmciInitializeErrorPacket.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

GUID *__fastcall HalpCmcInitializeErrorPacketContents(GUID *a1)
{
  GUID *result; // rax

  memset(a1, 0, 0x160uLL);
  *(_DWORD *)a1[1].Data4 = HalpCmcErrorSourceId;
  *(_DWORD *)&a1[1].Data4[4] = 1;
  *(_DWORD *)a1[3].Data4 = 1;
  result = a1 + 5;
  *(_QWORD *)&a1[3].Data1 = a1 + 5;
  a1->Data1 = 1095059543;
  *(_DWORD *)&a1->Data2 = 3;
  *(_DWORD *)a1->Data4 = 352;
  a1[2] = CMC_NOTIFY_TYPE_GUID;
  a1[4].Data1 = 80;
  *(_DWORD *)&a1[4].Data2 = 272;
  return result;
}
