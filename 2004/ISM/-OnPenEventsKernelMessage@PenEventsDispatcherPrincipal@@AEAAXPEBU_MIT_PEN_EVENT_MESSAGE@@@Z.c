/*
 * XREFs of ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180133938
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_169f4db4f162cf2479feb08acf74ea7d__void__MIT_PEN_EVENT_MESSAGE_const___::_Do_call @ 0x180134F00 (std--_Func_impl_no_alloc__lambda_169f4db4f162cf2479feb08acf74ea7d__void__MIT_PEN_EV_ea_180134F00.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800C5DC8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133428 (-OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180133858 (-OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 *     ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133A04 (-OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133A84 (-OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133B08 (-OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133B88 (-OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z @ 0x180134284 (-SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z.c)
 */

void __fastcall PenEventsDispatcherPrincipal::OnPenEventsKernelMessage(
        PenEventsDispatcherPrincipal *this,
        const struct _MIT_PEN_EVENT_MESSAGE *a2)
{
  int v4; // ecx
  int v5; // ecx
  const char *v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::PenEvents::OnPenEventsKernelMessage(a2);
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( *((_DWORD *)a2 + 1) )
        PenEventsDispatcherPrincipal::OnDock(this);
      else
        PenEventsDispatcherPrincipal::OnUndock(this);
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
      {
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          377LL,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pene"
                        "ventsdispatcherprincipal.cpp",
          "Invalid pen event type provided.",
          v6);
        __debugbreak();
      }
      PenEventsDispatcherPrincipal::SettingsChangedApplicationPenButtonEventsEnabled(this, *((_DWORD *)a2 + 1) != 0);
    }
  }
  else
  {
    v4 = *((_DWORD *)a2 + 1);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            356LL,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pe"
                          "neventsdispatcherprincipal.cpp",
            "Invalid pen button action provided.",
            v6);
          __debugbreak();
        }
        PenEventsDispatcherPrincipal::OnTailButtonLongPress(this);
      }
      else
      {
        PenEventsDispatcherPrincipal::OnTailButtonDoubleClick(this);
      }
    }
    else
    {
      PenEventsDispatcherPrincipal::OnTailButtonClick(this);
    }
  }
}
