/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C00404E0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C012CCE8 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  void *v6; // rax
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2)) )
  {
    v6 = (void *)ReferenceDwmApiPort(v5);
    DwmAsyncTopLevelMouseLeave(v6);
  }
  if ( (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2) )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v7 = &gspwndCursorNC;
    v8 = a1;
    HMAssignmentLock(&v7);
  }
  v8 = a1;
  v7 = &gspwndCursor;
  return HMAssignmentLock(&v7);
}
