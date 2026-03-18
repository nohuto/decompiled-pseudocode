/*
 * XREFs of __NLG_Call @ 0xEE2F8
 * Callers:
 *     __local_unwind4 @ 0xEE174 (__local_unwind4.c)
 * Callees:
 *     <none>
 */

void __usercall _NLG_Call(void (*a1)(void)@<eax>)
{
  a1();
  JUMPOUT(0xEE2FA);
}
