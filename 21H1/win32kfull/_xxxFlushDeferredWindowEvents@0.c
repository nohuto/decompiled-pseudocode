/*
 * XREFs of _xxxFlushDeferredWindowEvents@0 @ 0x458CC
 * Callers:
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 * Callees:
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 *     _xxxProcessTSFEvent@4 @ 0x155866 (_xxxProcessTSFEvent@4.c)
 */

int __stdcall xxxFlushDeferredWindowEvents()
{
  int result; // eax
  int v1; // esi
  _DWORD *i; // ecx
  bool v3; // zf

  result = (int)PsGetCurrentThreadId();
  v1 = result;
LABEL_2:
  for ( i = (_DWORD *)_gPendingNotifiesList; i != (_DWORD *)_gPendingNotifiesList; i = (_DWORD *)*i )
  {
    result = i[10];
    if ( (result & 2) != 0 && i[8] == v1 )
    {
      v3 = i[3] == 0;
      i[10] = result & 0xFFFFFFFD;
      if ( v3 )
        result = xxxProcessNotifyWinEvent(i);
      else
        result = xxxProcessTSFEvent();
      goto LABEL_2;
    }
  }
  return result;
}
