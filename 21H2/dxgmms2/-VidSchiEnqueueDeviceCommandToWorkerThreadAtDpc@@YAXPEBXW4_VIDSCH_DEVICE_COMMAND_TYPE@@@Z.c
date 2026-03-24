/*
 * XREFs of ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C002AB14
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002AC6C (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 * Callees:
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002A3E4 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiUpdatePriorityTables @ 0x1C00326B0 (VidSchiUpdatePriorityTables.c)
 */

LONG __fastcall VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(__int128 *a1, int a2)
{
  __int128 v3; // xmm0
  __int64 v4; // rdi
  __int128 v5; // xmm1
  __int64 v6; // rbx
  struct _VIDSCH_QUEUE_PACKET *PacketFromGuaranteedPacketPool; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  LONG result; // eax
  _OWORD v17[9]; // [rsp+20h] [rbp-98h] BYREF
  int v18; // [rsp+C8h] [rbp+10h] BYREF

  v18 = a2;
  memset(v17, 0, 0x88uLL);
  v3 = *a1;
  v4 = *(_QWORD *)a1;
  v5 = a1[1];
  *((_QWORD *)&v17[1] + 1) = VidSchiExecuteMmIoFlipAtPassiveLevel;
  v17[3] = v3;
  v6 = *(_QWORD *)(v4 + 240);
  v17[4] = v5;
  DWORD2(v17[2]) = 5;
  PacketFromGuaranteedPacketPool = VidSchiAllocatePacketFromGuaranteedPacketPool((struct _VIDSCH_CONTEXT *)v6);
  *(_DWORD *)PacketFromGuaranteedPacketPool = 895576406;
  *((_DWORD *)PacketFromGuaranteedPacketPool + 12) = 6;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PacketFromGuaranteedPacketPool + 13) = 2;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 11) = v6;
  v8 = v17[0];
  v18 = 0;
  v9 = v17[1];
  *((_QWORD *)PacketFromGuaranteedPacketPool + 13) = KeGetCurrentThread();
  *((_OWORD *)PacketFromGuaranteedPacketPool + 17) = v8;
  v10 = v17[2];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 18) = v9;
  v11 = v17[3];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 19) = v10;
  v12 = v17[4];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 20) = v11;
  v13 = v17[5];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 21) = v12;
  v14 = v17[6];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 22) = v13;
  *((_OWORD *)PacketFromGuaranteedPacketPool + 23) = v14;
  v15 = *(_QWORD *)&v17[8];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 24) = v17[7];
  *((_QWORD *)PacketFromGuaranteedPacketPool + 50) = v15;
  result = VidSchiUpdatePriorityTables(v4, PacketFromGuaranteedPacketPool, &v18);
  ++*(_DWORD *)(v6 + 808);
  if ( v18 )
  {
    *(_QWORD *)(v4 + 1208) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1176), 0, 0);
  }
  return result;
}
