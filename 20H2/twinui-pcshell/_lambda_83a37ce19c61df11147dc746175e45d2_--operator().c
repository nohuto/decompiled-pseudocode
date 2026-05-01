/*
 * XREFs of _lambda_83a37ce19c61df11147dc746175e45d2_::operator() @ 0x180167F8C
 * Callers:
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x180040F5C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     wil::details::lambda_call__lambda_83a37ce19c61df11147dc746175e45d2___::_lambda_call__lambda_83a37ce19c61df11147dc746175e45d2___ @ 0x1801677C0 (wil--details--lambda_call__lambda_83a37ce19c61df11147dc746175e45d2___--_lambda_call__lambda_83a3.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall lambda_83a37ce19c61df11147dc746175e45d2_::operator()(HWND **a1)
{
  RemovePropW(**a1, L"TryPositionView");
  RemovePropW(**a1, L"TryPositionView.Left");
  RemovePropW(**a1, L"TryPositionView.Top");
  RemovePropW(**a1, L"TryPositionView.Right");
  RemovePropW(**a1, L"TryPositionView.Bottom");
  return RemovePropW(**a1, L"TryPositionView.Flags");
}
