/*
 * XREFs of ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D5D68
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C001BA50 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     <none>
 */

struct tagMONITOR *__fastcall FindNewMonitor(struct tagRECT *a1)
{
  __int64 i; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx

  for ( i = *(_QWORD *)(gpDispInfo + 104LL); ; i = *(_QWORD *)(i + 56) )
  {
    if ( !i )
      return 0LL;
    v3 = *(_QWORD *)(i + 40);
    v4 = *(_QWORD *)&a1->left - *(_QWORD *)(v3 + 28);
    if ( *(_QWORD *)&a1->left == *(_QWORD *)(v3 + 28) )
      v4 = *(_QWORD *)&a1->right - *(_QWORD *)(v3 + 36);
    if ( !v4 )
      break;
  }
  return (struct tagMONITOR *)i;
}
