/*
 * XREFs of VidSchWaitForQueuedPresentLimit @ 0x1C00939A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchWaitForQueuedPresentLimit(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v9; // rcx
  _QWORD v10[20]; // [rsp+50h] [rbp-A8h] BYREF

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( a2 >= *(_DWORD *)(v5 + 40) )
    {
      WdLogSingleEntry2(3LL, a2, -1073741811LL);
      return 3221225485LL;
    }
    else if ( *(_BYTE *)(a1 + 204) || (v6 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0)) )
    {
      WdLogSingleEntry2(3LL, a1, -1071775232LL);
      return 3223192064LL;
    }
    else
    {
      v7 = a1 + 4LL * a2;
      if ( *(_DWORD *)(v7 + 1444) >= *(_DWORD *)(a1 + 244) )
      {
        if ( !a3 )
          return 3223191810LL;
        memset(v10, 0, sizeof(v10));
        LODWORD(v10[2]) = 4;
        v10[3] = a1;
        LODWORD(v10[5]) = a2;
        LOBYTE(v10[19]) = 1;
        VidSchRegisterCompletionEvent(v5, v10);
        if ( *(_DWORD *)(v7 + 1444) >= *(_DWORD *)(a1 + 244) )
          v6 = VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v5, (__int64)v10, 2LL);
        VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v5 + 1744), v10, 0LL);
      }
      return v6;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
}
