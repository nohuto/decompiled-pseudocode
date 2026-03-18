/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01D0080
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C0047A10 (DestroySMWP.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  __int64 v1; // rax

  v1 = HMUnlockObject(a1);
  if ( v1 )
    DestroySMWP(v1);
}
