/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C00804F0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006500 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007BD0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitPagingCommand @ 0x1C006DEEC (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C008DD04 (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00D1030 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007AC0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007B40 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00112D0 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0082620 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0082740 (VidSchRegisterCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  size_t v7; // r14
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[25]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v4 = *(_DWORD *)(v3 + 144) * ((*(_DWORD *)(v3 + 68) << 6) + ((8 * *(_DWORD *)(v3 + 68) + 199) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v3 + 68) + 108);
  if ( v4 <= 0x430 )
    v4 = 1072;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v3 + 1720), (_QWORD **)(a1 + 712), (_DWORD *)(a1 + 728));
  if ( v5 )
  {
    v6 = v5 - 1;
  }
  else
  {
    v7 = v4;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v4, 0x35616956u);
    v6 = PoolWithTag;
    if ( a2 )
    {
      if ( PoolWithTag )
        goto LABEL_7;
      memset(v12, 0, 0xA0uLL);
      v10 = *(_QWORD *)(a1 + 96);
      LODWORD(v12[4]) |= 0x40u;
      LODWORD(v12[2]) = 1;
      LODWORD(v12[6]) = *(unsigned __int16 *)(v10 + 4);
      VidSchRegisterCompletionEvent(v3, v12);
      do
      {
        v11 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v3 + 1720),
                (_QWORD **)(a1 + 712),
                (_DWORD *)(a1 + 728));
        if ( v11 )
          v6 = v11 - 1;
        else
          VidSchWaitForCompletionEvent(v3, v12, 19LL);
      }
      while ( !v6 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v3 + 1728), v12, 0LL);
    }
  }
  if ( v6 )
  {
    v7 = v4;
LABEL_7:
    memset(v6, 0, v7);
    v6[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v6 + 13) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v3 + 1720), a1 + 760, v6 + 1, (_DWORD *)(a1 + 776));
  }
  return v6;
}
