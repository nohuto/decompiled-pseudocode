/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x18000A700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800055F4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  unsigned int v1; // ebx
  _UNKNOWN **v2; // rcx
  unsigned __int64 v4; // rbx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_0ac7ceda380f348c0a4a10ff46190401_Traceguids);
        v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x40000000) != 0 && *((_BYTE *)v2 + 25) >= 2u )
        WPP_SF_d((TRACEHANDLE)v2[2], 0xBu, &WPP_0ac7ceda380f348c0a4a10ff46190401_Traceguids, v1);
    }
    AudPolicyLogError("EventWorkerThread", 131, v1);
    return v1;
  }
  else
  {
    while ( 1 )
    {
      while ( !GetQueuedCompletionStatus(
                 g_WorkerEventPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) )
        ;
      if ( NumberOfBytesTransferred == -1 )
        break;
      v4 = CompletionKey;
      (**(void (__fastcall ***)(unsigned __int64))CompletionKey)(CompletionKey);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
    }
    CoUninitialize();
    return 0LL;
  }
}
