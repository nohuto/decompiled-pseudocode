/*
 * XREFs of _WPP_RECORDER_SF_qqq@32 @ 0x350A8
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _FindQMsg@24 @ 0x6A480 (_FindQMsg@24.c)
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z @ 0x17F3F5 (-xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall WPP_RECORDER_SF_qqq(int a1, int a2, unsigned int a3, int a4, int a5, char a6, char a7, char a8)
{
  unsigned int v8; // edi
  struct RECORDER_LOG__ *v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v10 = gFullLog;
  v8 = HIWORD(a3);
  v11 = a2;
  if ( ((1 << ((a3 - 1) & 0x1F)) & *(&WPP_GLOBAL_Control->Characteristics + 14 * HIWORD(a3) + (((a3 - 1) >> 5) & 0x7FF))) != 0
    && *((_BYTE *)&WPP_GLOBAL_Control->Flags + 56 * v8 + 1) >= (unsigned __int8)a2 )
  {
    pfnWppTraceMessage(
      *((_DWORD *)&WPP_GLOBAL_Control->AttachedDevice + 14 * v8),
      *((_DWORD *)&WPP_GLOBAL_Control->CurrentIrp + 14 * v8),
      43,
      a5,
      a4,
      &a6,
      4,
      &a7,
      4,
      &a8,
      4,
      0);
    a2 = v11;
  }
  return _WppAutoLogTrace(v10, a2, a3, a5, a4, &a6, 4, &a7, 4, &a8, 4, 0);
}
