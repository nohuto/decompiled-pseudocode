/*
 * XREFs of ndisTracePeriodicReceivesEnd @ 0x1C00A42C0
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00A2C78 (ndisEmptyPeriodicReceivesQueue.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A3C30 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C00A45F0 (McTemplateK0qxq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall ndisTracePeriodicReceivesEnd(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  NTSTATUS result; // eax
  int v8; // edx
  int v9; // ecx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a3;
  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  BYTE4(WnodeEventItem[0]) = 18;
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  WnodeEventItem[7] = a2;
  LODWORD(WnodeEventItem[9]) = KeGetPcr()->Prcb.Number;
  v6 = *(_QWORD *)(a1 + 4024) >> 24;
  LOWORD(WnodeEventItem[0]) = 80;
  WnodeEventItem[8] = v3;
  LODWORD(WnodeEventItem[6]) = v6 & 0xFFFFFF;
  WnodeEventItem[1] = qword_1C00E6148;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00E6185 & 2) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(v9, v8, (int)a1 + 4008, (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF, a2, v3);
  return result;
}
