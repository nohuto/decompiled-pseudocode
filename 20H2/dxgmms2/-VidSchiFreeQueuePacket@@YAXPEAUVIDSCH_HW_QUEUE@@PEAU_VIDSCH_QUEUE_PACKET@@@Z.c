/*
 * XREFs of ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037830
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00069E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00376A0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0039920 (VidSchCreateHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A140 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C003A710 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00D1E60 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00068D0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00148FC (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C003D81C (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 */

void __fastcall VidSchiFreeQueuePacket(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  KSPIN_LOCK *v6; // rdi
  __int64 v7; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  v5 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = a1;
  WdLogEvent5_WdEvent(v5);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  v6 = (KSPIN_LOCK *)(v4 + 1720);
  *((_DWORD *)a2 + 13) = 0;
  VidSchiInterlockedRemoveEntryList(v6, (_QWORD *)a2 + 1, (_DWORD *)a1 + 64);
  VidSchiInterlockedInsertTailList(v6, (__int64)a1 + 216, (_QWORD *)a2 + 1, (_DWORD *)a1 + 58);
  while ( 1 )
  {
    v7 = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v6, (char *)a1 + 216, (char *)a1 + 232);
    if ( !v7 )
      break;
    ExFreePoolWithTag((PVOID)(v7 - 8), 0);
  }
}
