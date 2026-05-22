/*
 * XREFs of ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x180133118
 * Callers:
 *     ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180133280 (-OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnDockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801333D0 (-OnDockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801339C0 (-OnTailButtonClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180133A40 (-OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180133AC0 (-OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnUndockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180133B30 (-OnUndockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x180133160 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 56) )
  {
    LOBYTE(a4) = a3;
    v4 = PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged(*(_QWORD *)(a1 + 56), a1, a2, a4);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        36LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
        (const char *)(unsigned int)v4);
  }
  return 0LL;
}
