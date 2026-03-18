/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00C34CC
 * Callers:
 *     xxxGetInputEvent @ 0x1C004DC30 (xxxGetInputEvent.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0051B80 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C007E9C8 (xxxDesktopThreadWaiter.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00C3514 (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // rdx

  *(_QWORD *)(*((_QWORD *)a1 + 60) + 8LL) = 0LL;
  v1 = (struct tagTHREADINFO *)(*((_DWORD *)a1 + 122) & 0xFFFFFBFF);
  *(_DWORD *)(*((_QWORD *)a1 + 60) + 28LL) = (_DWORD)v1;
  *((_DWORD *)a1 + 122) &= ~0x400u;
  PriorityBoost::UpdateProcessPriorityForSpinning(a1, v1);
  return 0LL;
}
