/*
 * XREFs of ?UnrefAndDestroySMWP@@YGXPAUtagSMWP@@@Z @ 0x13FBB8
 * Callers:
 *     <none>
 * Callees:
 *     _DestroySMWP@4 @ 0x349E4 (_DestroySMWP@4.c)
 */

void __stdcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  int v1; // eax

  v1 = HMUnlockObject(a1);
  if ( v1 )
    DestroySMWP(v1);
}
