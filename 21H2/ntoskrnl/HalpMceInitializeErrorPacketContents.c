/*
 * XREFs of HalpMceInitializeErrorPacketContents @ 0x1409A207C
 * Callers:
 *     HalpMceInitializeErrorPacket @ 0x1409A2010 (HalpMceInitializeErrorPacket.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A7BE0 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A7D20 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

GUID *__fastcall HalpMceInitializeErrorPacketContents(GUID *a1)
{
  GUID *result; // rax

  memset(a1, 0, 0x160uLL);
  *(_DWORD *)a1[1].Data4 = HalpMceErrorSourceId;
  result = a1 + 5;
  *(_QWORD *)&a1[3].Data1 = a1 + 5;
  a1[2] = MCE_NOTIFY_TYPE_GUID;
  a1->Data1 = 1095059543;
  *(_DWORD *)&a1->Data2 = 3;
  *(_DWORD *)a1->Data4 = 352;
  *(_DWORD *)a1[3].Data4 = 1;
  a1[4].Data1 = 80;
  *(_DWORD *)&a1[4].Data2 = 272;
  return result;
}
