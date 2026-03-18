/*
 * XREFs of _xxxCleanupAndFreeDdeConv@4 @ 0x180056
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ?FreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17EA47 (-FreeListFree@@YGXPAUtagFREELIST@@@Z.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 */

int __thiscall xxxCleanupAndFreeDdeConv(void *this, int a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((int)this, 4, 0xEu, 57, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, a2);
  if ( *(_DWORD *)(a2 + 36) )
  {
    FreeListFree(*(struct tagFREELIST **)(a2 + 36));
    *(_DWORD *)(a2 + 36) = 0;
  }
  return xxxFreeDdeConv(a2);
}
