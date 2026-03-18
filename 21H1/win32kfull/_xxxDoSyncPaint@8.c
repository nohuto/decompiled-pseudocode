/*
 * XREFs of _xxxDoSyncPaint@8 @ 0x7348A
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 * Callees:
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     ?DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z @ 0x739C0 (-DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z.c)
 */

int __fastcall xxxDoSyncPaint(int a1, int a2)
{
  int result; // eax
  int v5; // edx
  unsigned int v6; // [esp+0h] [ebp-Ch]
  struct tagTHREADINFO *v7; // [esp+4h] [ebp-8h]

  for ( result = *(_DWORD *)(a1 + 56); result; result = *(_DWORD *)(result + 56) )
  {
    v5 = *(_DWORD *)(result + 20);
    if ( (*(_BYTE *)(v5 + 23) & 2) != 0 )
      break;
    if ( *(_DWORD *)(v5 + 92) || (*(_BYTE *)(v5 + 9) & 0x10) != 0 )
      goto LABEL_5;
  }
  result = 0;
LABEL_5:
  if ( !result )
  {
    DoQueuedSyncPaint(_gptiCurrent, v6, v7);
    return xxxInternalDoSyncPaint(a1, a2);
  }
  return result;
}
