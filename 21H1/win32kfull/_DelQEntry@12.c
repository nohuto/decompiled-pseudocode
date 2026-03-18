/*
 * XREFs of _DelQEntry@12 @ 0x6D770
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _FindQMsg@24 @ 0x6A480 (_FindQMsg@24.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     _DestroyThreadsMessages@8 @ 0x6FE90 (_DestroyThreadsMessages@8.c)
 *     ?AdjustForCoalescing@@YGXPAUtagMLIST@@PAUHWND__@@I@Z @ 0x827F4 (-AdjustForCoalescing@@YGXPAUtagMLIST@@PAUHWND__@@I@Z.c)
 *     _FreeMessageList@4 @ 0x9C39C (_FreeMessageList@4.c)
 *     _SuspendThreadQueue@4 @ 0xA68FC (_SuspendThreadQueue@4.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0xEFA58 (_anonymous_namespace_--RemoveEventMessage.c)
 *     _EditionDelQEntry@12 @ 0x141D22 (_EditionDelQEntry@12.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAUtagWND@@PAUtagMSG@@@Z @ 0x15ACBC (-DiscardPointerMessage@@YG-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAU.c)
 *     _DelegateCoalescePointerMessage@12 @ 0x15B8F5 (_DelegateCoalescePointerMessage@12.c)
 *     _NtUserGetRawInputBuffer@12 @ 0x16426F (_NtUserGetRawInputBuffer@12.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6 (_WPP_RECORDER_SF_qiqdd@44.c)
 *     _FreePointerMessageParams@4 @ 0x15A014 (_FreePointerMessageParams@4.c)
 */

void __fastcall DelQEntry(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // edx
  int v5; // eax

  v4 = (_DWORD *)a2[1];
  if ( v4 )
    *v4 = *a2;
  if ( *a2 )
    *(_DWORD *)(*a2 + 4) = a2[1];
  if ( (_DWORD *)*a1 == a2 )
    *a1 = *a2;
  if ( (_DWORD *)a1[1] == a2 )
    a1[1] = a2[1];
  if ( (((unsigned int)&loc_AFFFF + 1) & a2[16]) == 0 )
  {
    v5 = a1[2] - 1;
    a1[2] = v5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qiqdd(
        (int)a1,
        20,
        (int)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
        (char)a2,
        a2[24],
        a2[25],
        (char)a1,
        a1[3],
        v5);
  }
  if ( a3 )
  {
    if ( (a2[16] & 8) != 0 && !a2[15] )
    {
      if ( IsPointerInputMessage(a2[3]) )
        FreePointerMessageParams(a2);
    }
    Win32FreeToPagedLookasideList(_QEntryLookaside, a2);
  }
}
