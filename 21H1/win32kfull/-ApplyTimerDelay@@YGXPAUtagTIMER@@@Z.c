/*
 * XREFs of ?ApplyTimerDelay@@YGXPAUtagTIMER@@@Z @ 0x1560E5
 * Callers:
 *     ?ReadyTimer@@YGXPAUtagTIMER@@K@Z @ 0x156134 (-ReadyTimer@@YGXPAUtagTIMER@@K@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall ApplyTimerDelay(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax

  v1 = *(_DWORD *)(*(_DWORD *)(this[3] + 232) + 628);
  if ( v1 )
  {
    v2 = v1 + this[8];
    if ( v2 >= 0x7FFFFFFF )
      v2 = 0x7FFFFFFF;
    this[8] = v2;
  }
}
