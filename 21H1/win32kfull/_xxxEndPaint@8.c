/*
 * XREFs of _xxxEndPaint@8 @ 0x12580
 * Callers:
 *     ?xxxDWP_Paint@@YGXPAUtagWND@@@Z @ 0x1246C (-xxxDWP_Paint@@YGXPAUtagWND@@@Z.c)
 *     _NtUserEndPaint@8 @ 0x124D2 (_NtUserEndPaint@8.c)
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _NtUserBeginPaint@8 @ 0x71348 (_NtUserBeginPaint@8.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     ?xxxHandleMenuPainting@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x196AEB (-xxxHandleMenuPainting@@YGXPAUtagWND@@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 *     _zzzInternalShowCaret@0 @ 0xBA734 (_zzzInternalShowCaret@0.c)
 */

int __fastcall xxxEndPaint(struct tagVWPL **a1, _DWORD *a2)
{
  ReleaseCacheDC(*a2, 1);
  if ( (*((_BYTE *)a1[5] + 12) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1, gRdwFlags);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(1026, 1);
  }
  SetOrClrWF(1025, 1);
  SetOrClrWF(1028, 1);
  if ( a1 == *(struct tagVWPL ***)(*(_DWORD *)(_gptiCurrent + 236) + 216) )
    zzzInternalShowCaret();
  return 1;
}
