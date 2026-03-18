/*
 * XREFs of VidSchWaitForQueuedPresentLimit @ 0x1C00806E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0012F6C (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C20 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080D40 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchWaitForQueuedPresentLimit(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD v11[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return (unsigned int)v9;
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)a2 >= *(_DWORD *)(v6 + 40) )
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2);
    v9 = -1073741811LL;
    *(_QWORD *)(v10 + 24) = v4;
LABEL_15:
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)v9;
  }
  if ( *(_BYTE *)(a1 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0) )
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v10 + 24) = a1;
    v9 = -1071775232LL;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 4LL * (unsigned int)a2 + 1444) < *(_DWORD *)(a1 + 244) )
    return v3;
  if ( (_BYTE)a3 )
  {
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[2]) = 4;
    v11[3] = a1;
    LODWORD(v11[5]) = v4;
    LOBYTE(v11[19]) = 1;
    VidSchRegisterCompletionEvent(v6, v11);
    if ( *(_DWORD *)(a1 + 4 * v4 + 1444) >= *(_DWORD *)(a1 + 244) )
      v3 = VidSchWaitForCompletionEvent(v6, v11, 2LL);
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 1728), v11, 0LL);
    return v3;
  }
  return 3223191810LL;
}
