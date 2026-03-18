/*
 * XREFs of ?CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z @ 0xC93F4
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     _xxxGetInputEvent@4 @ 0x82D1E (_xxxGetInputEvent@4.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 * Callees:
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z @ 0xC944C (-UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall CheckProcessForeground(_DWORD *this)
{
  PriorityBoost *v2; // [esp+0h] [ebp-2Ch]
  struct tagTHREADINFO *v3; // [esp+4h] [ebp-28h]

  *(_DWORD *)(this[65] + 4) = 0;
  *(_DWORD *)(this[65] + 20) = this[66] & 0xFFFFFBFF;
  this[66] &= ~0x400u;
  PriorityBoost::UpdateProcessPriorityForSpinning(v2, v3);
  return 0;
}
