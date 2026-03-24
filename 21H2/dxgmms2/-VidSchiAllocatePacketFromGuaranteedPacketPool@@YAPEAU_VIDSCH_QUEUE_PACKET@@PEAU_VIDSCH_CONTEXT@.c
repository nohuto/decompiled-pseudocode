/*
 * XREFs of ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002A3E4
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C002AB14 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007AC0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007B40 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiAllocatePacketFromGuaranteedPacketPool(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v3; // r14
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  _QWORD *v11; // rax

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v3 = (KSPIN_LOCK *)(v2 + 1720);
  v4 = *(_DWORD *)(v2 + 144) * ((*(_DWORD *)(v2 + 68) << 6) + ((8 * *(_DWORD *)(v2 + 68) + 199) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v2 + 68) + 108);
  if ( v4 <= 0x430 )
    v4 = 1072;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1720), (_QWORD **)a1 + 92, (_DWORD *)a1 + 188);
  v8 = v5;
  if ( !v5 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v11[7] = (char *)a1 + 776;
    v11[3] = 281LL;
    v11[4] = 3584LL;
    v11[5] = v2;
    v11[6] = a1;
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
    JUMPOUT(0x1C002A503LL);
  }
  v9 = v5 - 1;
  if ( v5 != (_QWORD *)8 )
  {
    memset(v5 - 1, 0, v4);
    *((_DWORD *)v9 + 16) |= 0x40u;
    v9[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v9 + 13) = 1;
    VidSchiInterlockedInsertTailList(v3, (__int64)a1 + 760, v8, (_DWORD *)a1 + 194);
  }
  return (struct _VIDSCH_QUEUE_PACKET *)v9;
}
