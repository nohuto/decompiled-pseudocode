/*
 * XREFs of ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0224468
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C02246E4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02245AC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall DragOperationFromMaximizedAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C0330C0C & 1) == 0 || (dword_1C0330C0C & 2) == 0 )
    return 0;
  return result;
}
