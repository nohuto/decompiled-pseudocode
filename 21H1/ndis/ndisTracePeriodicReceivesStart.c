/*
 * XREFs of ndisTracePeriodicReceivesStart @ 0x1C00A3D68
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00A2638 (ndisEmptyPeriodicReceivesQueue.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A35F0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00A3E6C (McTemplateK0q_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall ndisTracePeriodicReceivesStart(__int64 a1)
{
  unsigned __int64 v2; // rax
  NTSTATUS result; // eax
  __int64 v4; // rcx
  __int128 WnodeEventItem; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h]
  GUID v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp-10h]

  v9 = 0LL;
  WnodeEventItem = 0LL;
  BYTE4(WnodeEventItem) = 20;
  LOWORD(WnodeEventItem) = 56;
  v2 = *(_QWORD *)(a1 + 4024);
  v8 = 0x2000000000000LL;
  v6 = 0LL;
  v9 = (v2 >> 24) & 0xFFFFFF;
  v7 = EtwGuidNdisReceive;
  HIDWORD(v9) = KeGetPcr()->Prcb.Number;
  *((_QWORD *)&WnodeEventItem + 1) = qword_1C00E6048;
  result = IoWMIWriteEvent(&WnodeEventItem);
  if ( (byte_1C00E6085 & 2) != 0 )
    return McTemplateK0q_EtwWriteTransfer(
             v4,
             &QueuedReceiveStart,
             a1 + 4008,
             (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFFLL);
  return result;
}
