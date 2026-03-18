/*
 * XREFs of _anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0xC950C
 * Callers:
 *     _anonymous_namespace_::SetProcessPriorityByClass @ 0x18E54 (_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z @ 0xC944C (-UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall anonymous_namespace_::IsProcessForegroundBoostedNoSpin(_DWORD *this)
{
  return (this[116] & 0x60000) == (_DWORD)&loc_20000;
}
