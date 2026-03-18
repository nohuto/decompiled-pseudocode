/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C01089C0
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C00068E4 (xxxProcessTSFEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0091238 (xxxProcessNotifyWinEvent.c)
 */

HANDLE xxxFlushDeferredWindowEvents()
{
  HANDLE result; // rax
  int v1; // ebx
  __int64 i; // rcx
  int v3; // r8d
  bool v4; // zf

  result = PsGetCurrentThreadId();
  v1 = (int)result;
LABEL_2:
  for ( i = gPendingNotifiesList[0]; i != gPendingNotifiesList[0]; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 56);
    if ( (v3 & 2) != 0 && *(_DWORD *)(i + 48) == v1 )
    {
      v4 = *(_DWORD *)(i + 24) == 0;
      *(_DWORD *)(i + 56) = v3 & 0xFFFFFFFD;
      if ( v4 )
        result = (HANDLE)xxxProcessNotifyWinEvent(i);
      else
        result = xxxProcessTSFEvent((struct tagNOTIFY *)i);
      goto LABEL_2;
    }
  }
  return result;
}
