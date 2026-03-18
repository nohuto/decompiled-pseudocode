/*
 * XREFs of _xxxRemoveQueueCompletion@0 @ 0x6ECD4
 * Callers:
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 *     _xxxWaitForDITMouseInjectionFlush@0 @ 0xAFF56 (_xxxWaitForDITMouseInjectionFlush@0.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788 (-xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z.c)
 *     _xxxMsgWaitForMultipleObjectsEx@20 @ 0xEFE84 (_xxxMsgWaitForMultipleObjectsEx@20.c)
 *     __RemoveQueueCompletion@0 @ 0xF2CBB (__RemoveQueueCompletion@0.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x6EBE2 (-xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@.c)
 */

BOOL __stdcall xxxRemoveQueueCompletion()
{
  int v0; // eax
  int v1; // esi
  ULONG v3; // [esp+10h] [ebp-20h] BYREF
  int v4; // [esp+14h] [ebp-1Ch]
  int v5; // [esp+18h] [ebp-18h]
  int v6; // [esp+1Ch] [ebp-14h]
  _DWORD v7[3]; // [esp+20h] [ebp-10h] BYREF
  int v8; // [esp+2Ch] [ebp-4h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v8 = 0;
  v7[0] = 0;
  v7[1] = 0;
  v0 = ZwRemoveIoCompletionEx(*(_DWORD *)(_gptiCurrent + 816), &v3, 1, &v8, v7, 0);
  v1 = 0;
  if ( v0 )
  {
    v1 = v0 == 258;
  }
  else if ( v4 == 1 )
  {
    v1 = 3;
    ZwAssociateWaitCompletionPacket(
      *(_DWORD *)(_gptiCurrent + 828),
      *(_DWORD *)(_gptiCurrent + 816),
      *(_DWORD *)(_gptiCurrent + 824),
      0,
      1,
      0,
      0,
      0);
  }
  else if ( v4 == 2 )
  {
    v1 = 2;
  }
  else if ( !v4 && *(_DWORD *)(_gptiCurrent + 836) )
  {
    v1 = 4;
    xxxHandleCoreMessagingQueueCompletion(_gptiCurrent, &v3, 1);
  }
  return v1 == 4;
}
