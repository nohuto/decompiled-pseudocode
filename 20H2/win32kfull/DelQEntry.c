/*
 * XREFs of DelQEntry @ 0x1C00F6B9C
 * Callers:
 *     EditionDelQEntry @ 0x1C0007D80 (EditionDelQEntry.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C0052180 (FindQMsg.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00BCFB8 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00BEA50 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     DestroyThreadsMessages @ 0x1C00D7600 (DestroyThreadsMessages.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00D799C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     FreeMessageList @ 0x1C00F6B40 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C010F150 (SuspendThreadQueue.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E05C0 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0BBC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E10F4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF0D4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F0884 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F1960 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB210 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0052550 (WPP_RECORDER_SF_qiqdd.c)
 *     IsHiddenByInputService @ 0x1C00F6C74 (IsHiddenByInputService.c)
 *     FreeQEntry @ 0x1C00F6C9C (FreeQEntry.c)
 */

__int64 __fastcall DelQEntry(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v6 = (_QWORD *)a2[1];
  if ( v6 )
    *v6 = *a2;
  if ( *a2 )
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  if ( (_QWORD *)*a1 == a2 )
    *a1 = *a2;
  if ( (_QWORD *)a1[1] == a2 )
    a1[1] = a2[1];
  result = IsHiddenByInputService(a2);
  if ( !(_DWORD)result )
  {
    result = (unsigned int)(*(_DWORD *)(v8 + 16) - 1);
    *(_DWORD *)(v8 + 16) = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = result;
      v10 = *(_DWORD *)(v8 + 20);
      result = WPP_RECORDER_SF_qiqdd(
                 (__int64)&WPP_RECORDER_INITIALIZED,
                 v8,
                 v9,
                 0x14u,
                 (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
                 a2,
                 a2[17],
                 v8,
                 v10,
                 v11);
    }
  }
  if ( a3 )
    return FreeQEntry(a2);
  return result;
}
