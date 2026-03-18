/*
 * XREFs of _WPP_RECORDER_SF_qq@28 @ 0x6FDEA
 * Callers:
 *     _EditionUpdateInputTransformFromHitTest@24 @ 0x11A3E (_EditionUpdateInputTransformFromHitTest@24.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     ?VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z @ 0x6FC58 (-VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z.c)
 *     ?VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z @ 0x6FCFE (-VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z.c)
 *     _DestroyThreadsMessages@8 @ 0x6FE90 (_DestroyThreadsMessages@8.c)
 *     ?_AllowSetForegroundWindow@@YGHK@Z @ 0x811C4 (-_AllowSetForegroundWindow@@YGHK@Z.c)
 *     ?VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z @ 0x9B3CC (-VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z.c)
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 *     ?JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D446 (-JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D474 (-JobCalloutAddProcessWorker@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 *     ?CreateW32Job@@YGPAUtagW32JOB@@PAU_EJOB@@@Z @ 0x9D5D4 (-CreateW32Job@@YGPAUtagW32JOB@@PAU_EJOB@@@Z.c)
 *     _RemoveProcessFromJob@4 @ 0x9D65E (_RemoveProcessFromJob@4.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z @ 0x17E9E4 (-FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 *     _xxxDDETrackSendHook@16 @ 0x180600 (_xxxDDETrackSendHook@16.c)
 *     _xxxDDETrackWindowDying@8 @ 0x180709 (_xxxDDETrackWindowDying@8.c)
 * Callees:
 *     <none>
 */

int __fastcall WPP_RECORDER_SF_qq(int a1, int a2, unsigned int a3, int a4, int a5, char a6, char a7)
{
  unsigned int v7; // edi
  int v9; // [esp+0h] [ebp-14h]
  int v10; // [esp+4h] [ebp-10h]
  struct RECORDER_LOG__ *v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v11 = gFullLog;
  v7 = HIWORD(a3);
  v12 = a2;
  if ( ((1 << ((a3 - 1) & 0x1F)) & *(&WPP_GLOBAL_Control->Characteristics + 14 * HIWORD(a3) + (((a3 - 1) >> 5) & 0x7FF))) != 0
    && *((_BYTE *)&WPP_GLOBAL_Control->Flags + 56 * v7 + 1) >= (unsigned __int8)a2 )
  {
    ((void (__cdecl *)(_DWORD, _DWORD, int, int, int, char *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      *((_DWORD *)&WPP_GLOBAL_Control->AttachedDevice + 14 * v7),
      *((_DWORD *)&WPP_GLOBAL_Control->CurrentIrp + 14 * v7),
      43,
      a5,
      a4,
      &a6,
      4,
      &a7,
      4,
      0);
    a2 = v12;
  }
  return _WppAutoLogTrace(v11, a2, a3, a5, a4, &a6, 4, &a7, 4, 0, v9, v10);
}
