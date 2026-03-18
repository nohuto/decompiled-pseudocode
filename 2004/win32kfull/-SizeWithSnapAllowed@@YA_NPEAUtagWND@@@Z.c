/*
 * XREFs of ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C022455C
 * Callers:
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 *     xxxHandleNCMouseGuys @ 0x1C02246E4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02245AC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall SizeWithSnapAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C0330C0C & 1) == 0 || (dword_1C0330C0C & 4) == 0 )
    return 0;
  return result;
}
