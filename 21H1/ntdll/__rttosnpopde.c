/*
 * XREFs of __rttosnpopde @ 0x4B2FAF43
 * Callers:
 *     __rttospopde @ 0x4B2FAE47 (__rttospopde.c)
 *     __rtnospopde @ 0x4B2FAE51 (__rtnospopde.c)
 *     sub_4B2FB324 @ 0x4B2FB324 (sub_4B2FB324.c)
 * Callees:
 *     <none>
 */

void __usercall _rttosnpopde(int a1@<ebp>)
{
  *(_BYTE *)(a1 - 144) = 1;
}
