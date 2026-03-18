/*
 * XREFs of ?CoalescableDueTime@@YGKPBUtagTIMER@@@Z @ 0x2CFDA
 * Callers:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _TimersProc@0 @ 0x73F70 (_TimersProc@0.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall CoalescableDueTime(_DWORD *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax

  if ( (this[7] & 0x200) == 0 )
    return this[8];
  v2 = this[6];
  v3 = v2;
  if ( v2 <= gCurrentTimerCoalescingTolerance )
    v3 = gCurrentTimerCoalescingTolerance;
  v4 = this[8];
  if ( v4 + v3 >= 0x7FFFFFFF )
  {
    v5 = 0x7FFFFFFF;
  }
  else
  {
    if ( v2 <= gCurrentTimerCoalescingTolerance )
      v2 = gCurrentTimerCoalescingTolerance;
    v5 = v4 + v2;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(this[3] + 232) + 632);
  if ( v6 )
  {
    v5 += v6;
    if ( v5 >= 0x7FFFFFFF )
      return 0x7FFFFFFF;
  }
  return v5;
}
