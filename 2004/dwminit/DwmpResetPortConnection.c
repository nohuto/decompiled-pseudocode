/*
 * XREFs of DwmpResetPortConnection @ 0x180003E14
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002660 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DwmpResetPortConnection(CApiPortClient *a1)
{
  CApiPortClient::ResetConnection(a1);
}
