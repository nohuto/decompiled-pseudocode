/*
 * XREFs of VidSchiAllocateHwQueuePacket @ 0x1C00D49BC
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C003A0B0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A400 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C003A9D0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00D2460 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D4DDC (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007330 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00073B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0012F6C (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C20 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080D40 (VidSchRegisterCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateHwQueuePacket(__int64 a1, char a2)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  size_t v9; // rdi
  _QWORD *PoolWithTag; // rax
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(_DWORD *)(v5 + 144) * ((*(_DWORD *)(v5 + 68) << 6) + ((8 * *(_DWORD *)(v5 + 68) + 199) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v5 + 68) + 107);
  if ( v6 <= 0x420 )
    v6 = 1056;
  v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v5 + 1720), (_QWORD **)(a1 + 216), (_DWORD *)(a1 + 232));
  if ( v7 )
  {
    v8 = v7 - 1;
  }
  else
  {
    v9 = v6;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x35616956u);
    v8 = PoolWithTag;
    if ( a2 )
    {
      if ( PoolWithTag )
      {
LABEL_15:
        memset(v8, 0, v9);
        v8[7] = MEMORY[0xFFFFF78000000320];
        *((_DWORD *)v8 + 13) = 1;
        VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v5 + 1720), a1 + 240, v8 + 1, (_DWORD *)(a1 + 256));
        return v8;
      }
      memset(v14, 0, sizeof(v14));
      v11 = *(unsigned __int16 *)(v4 + 4);
      LODWORD(v14[4]) |= 0x40u;
      LODWORD(v14[6]) = v11;
      LODWORD(v14[2]) = 1;
      VidSchRegisterCompletionEvent(v5, (__int64)v14);
      do
      {
        v12 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v5 + 1720),
                (_QWORD **)(a1 + 216),
                (_DWORD *)(a1 + 232));
        if ( v12 )
          v8 = v12 - 1;
        else
          VidSchWaitForCompletionEvent(v5, (__int64)v14, 19LL);
      }
      while ( !v8 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v5 + 1728), v14, 0LL);
    }
  }
  if ( v8 )
  {
    v9 = v6;
    goto LABEL_15;
  }
  return v8;
}
