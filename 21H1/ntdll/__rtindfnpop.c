/*
 * XREFs of __rtindfnpop @ 0x4B2FAF32
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __usercall _rtindfnpop@<eax>(int a1@<ebp>)
{
  if ( *(char *)(a1 - 144) > 0 )
    JUMPOUT(0x4B2FAF4A);
  return _rttosnpopde();
}
