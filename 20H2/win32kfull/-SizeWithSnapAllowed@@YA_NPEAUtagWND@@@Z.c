/*
 * XREFs of ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02236CC
 * Callers:
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223854 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C022371C (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall SizeWithSnapAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C032FC0C & 1) == 0 || (dword_1C032FC0C & 4) == 0 )
    return 0;
  return result;
}
