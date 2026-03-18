/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021CB88
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C021C34C (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021D734 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C021DACC (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C021DF78 (xxxDDETrackWindowDying.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxClientFreeDDEHandle @ 0x1C0233528 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  int v2; // edi
  int v3; // edx
  int v4; // ecx
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  if ( a1 )
  {
    v8 = 0LL;
    v1 = a1;
    v7 = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 480LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v1, &v7, (__int64)FreeListFree);
      if ( !v2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 4;
          WPP_RECORDER_SF_q(
            v4,
            v3,
            14,
            55,
            (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
            *((_QWORD *)v1 + 1));
        }
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4));
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v7;
      v6 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v6);
    }
    while ( v1 );
  }
}
