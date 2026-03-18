/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x1C011BCD4
 * Callers:
 *     NtUserShowCursor @ 0x1C011BC90 (NtUserShowCursor.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00AE114 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(__int64 a1)
{
  char v1; // bl
  struct tagTHREADINFO *CurrentLogicalCursorThread; // r8
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool v8; // zf

  v1 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1);
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  ++gdwDeferWinEvent;
  v4 = *((_DWORD *)CurrentLogicalCursorThread + 188);
  v5 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  if ( v1 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 188) = v4 + 1;
    ++*(_DWORD *)(v5 + 384);
    if ( v3 != gpqCursor )
      goto LABEL_3;
    v8 = *(_DWORD *)(v3 + 384) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 188) = v4 - 1;
    --*(_DWORD *)(v5 + 384);
    if ( v3 != gpqCursor )
      goto LABEL_3;
    v8 = *(_DWORD *)(v3 + 384) == -1;
  }
  if ( v8 )
    zzzUpdateCursorImage();
LABEL_3:
  v6 = *(_DWORD *)(v3 + 384);
  zzzEndDeferWinEventNotify();
  return v6;
}
