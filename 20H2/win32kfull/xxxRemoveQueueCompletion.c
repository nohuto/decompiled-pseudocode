/*
 * XREFs of xxxRemoveQueueCompletion @ 0x1C007EC40
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 *     xxxDesktopThreadWaiter @ 0x1C007E9C8 (xxxDesktopThreadWaiter.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C0114314 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0123444 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C015ADAC (xxxMsgWaitForMultipleObjectsEx.c)
 *     _RemoveQueueCompletion @ 0x1C015C810 (_RemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C007ED14 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 */

__int64 xxxRemoveQueueCompletion()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  int v2; // esi
  _OWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v5 = 0;
  memset(v4, 0, sizeof(v4));
  v6 = 0LL;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1424LL), v4, 1LL, &v5, &v6, 0);
  v2 = xxxHandleQueueCompletion(gptiCurrent, v1, v4, 1LL);
  if ( v2 == 3 )
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1448LL),
      *(_QWORD *)(gptiCurrent + 1424LL),
      *(_QWORD *)(gptiCurrent + 1440LL),
      0LL,
      1LL,
      0,
      0LL,
      0LL);
  LOBYTE(v0) = v2 == 4;
  return v0;
}
