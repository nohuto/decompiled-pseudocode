/*
 * XREFs of xxxDoSyncPaint @ 0x1C001ACA0
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C001AD10 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C00490C0 (xxxInternalDoSyncPaint.c)
 */

__int64 __fastcall xxxDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 i; // r8
  __int64 v5; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 104); i; i = *(_QWORD *)(i + 104) )
  {
    v5 = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(v5 + 31) & 2) != 0 )
      break;
    if ( *(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0 )
      goto LABEL_5;
  }
  i = 0LL;
LABEL_5:
  if ( !i )
  {
    DoQueuedSyncPaint((struct tagWND *)a1, a2, gptiCurrent);
    return xxxInternalDoSyncPaint(a1, a2);
  }
  return result;
}
