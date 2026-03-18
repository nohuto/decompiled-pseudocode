/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C0097180
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0004DF0 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchEnqueueCpuEvent @ 0x1C007B880 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00A6478 (VidSchSubmitGlobalCommand.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0005BF0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD v11[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(_DWORD *)(v4 + 152) * ((*(_DWORD *)(v4 + 76) << 6) + ((8 * *(_DWORD *)(v4 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v4 + 76) + 111);
  if ( v5 <= 0x460 )
    v5 = 1120;
  v6 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1736), (_QWORD **)(a1 + 712), (_DWORD *)(a1 + 728));
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v6 == (_QWORD *)8 )
      return (__int64)v7;
    goto LABEL_5;
  }
  result = ExAllocatePool2(64LL, v5, 895576406LL);
  v7 = (_QWORD *)result;
  if ( result )
    goto LABEL_6;
  if ( a2 )
  {
    memset(v11, 0, sizeof(v11));
    v9 = *(_QWORD *)(a1 + 96);
    LODWORD(v11[4]) |= 0x40u;
    LODWORD(v11[2]) = 1;
    LODWORD(v11[6]) = *(unsigned __int16 *)(v9 + 4);
    VidSchRegisterCompletionEvent(v4, (__int64)v11);
    do
    {
      v10 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v4 + 1736),
              (_QWORD **)(a1 + 712),
              (_DWORD *)(a1 + 728));
      if ( v10 )
        v7 = v10 - 1;
      else
        VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v4, (__int64)v11, 19LL);
    }
    while ( !v7 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 1744), v11, 0LL);
LABEL_5:
    memset(v7, 0, v5);
LABEL_6:
    v7[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v7 + 13) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1736), a1 + 760, v7 + 1, (_DWORD *)(a1 + 776));
    return (__int64)v7;
  }
  return result;
}
