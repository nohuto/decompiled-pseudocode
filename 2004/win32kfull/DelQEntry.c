/*
 * XREFs of DelQEntry @ 0x1C00B0784
 * Callers:
 *     EditionDelQEntry @ 0x1C0007D80 (EditionDelQEntry.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C0032E34 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C00964B0 (FindQMsg.c)
 *     DestroyThreadsMessages @ 0x1C00B3070 (DestroyThreadsMessages.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00BEB28 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     FreeMessageList @ 0x1C0104AD0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C010D6B0 (SuspendThreadQueue.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E1280 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1DB4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EFD44 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F14F4 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F25D0 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FC080 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0096880 (WPP_RECORDER_SF_qiqdd.c)
 *     FreeQEntry @ 0x1C00B06FC (FreeQEntry.c)
 *     IsHiddenByInputService @ 0x1C00B085C (IsHiddenByInputService.c)
 */

__int64 __fastcall DelQEntry(unsigned int **a1, unsigned int *a2, int a3)
{
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v6 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( v6 )
    *v6 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  if ( *a1 == a2 )
    *a1 = *(unsigned int **)a2;
  if ( a1[1] == a2 )
    a1[1] = (unsigned int *)*((_QWORD *)a2 + 1);
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
                 *((_QWORD *)a2 + 17),
                 v8,
                 v10,
                 v11);
    }
  }
  if ( a3 )
    return FreeQEntry(a2);
  return result;
}
