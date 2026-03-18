/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C006E2B0
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006DFDC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E5A8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     PostPendingMouseMove @ 0x1C006C930 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1C006DE10 (IsEqualInputSource.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  int v4; // eax

  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 97) & 0x20) == 0 )
      goto LABEL_3;
    if ( !IsEqualInputSource((_DWORD *)a1 + 105, a2) )
    {
      v4 = a2[1];
      if ( (*((_DWORD *)a1 + 106) & 0xFFFFFFFB) != 0 && (v4 & 0xFFFFFFFB) != 0 )
      {
        if ( (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) & 1) == 0 )
          PostPendingMouseMove(a1);
        goto LABEL_3;
      }
      if ( (v4 & 0xFFFFFFFB) != 0 )
      {
LABEL_3:
        *((_DWORD *)a1 + 105) = *a2;
        *((_DWORD *)a1 + 106) = a2[1];
      }
    }
  }
}
