/*
 * XREFs of sub_261DA @ 0x261DA
 * Callers:
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     <none>
 */

void __usercall sub_261DA(int a1@<eax>)
{
  int v1; // [esp+0h] [ebp-8h]
  int v2; // [esp+4h] [ebp-4h]

  if ( GrePtInRegion(a1, v1, v2) )
    JUMPOUT(0x261E7);
  JUMPOUT(0x261A5);
}
