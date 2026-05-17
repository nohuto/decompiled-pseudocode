/*
 * XREFs of __NLG_Call @ 0x4B2FB934
 * Callers:
 *     __local_unwind4 @ 0x4B2F6EA0 (__local_unwind4.c)
 *     __local_unwind2 @ 0x4B2FB865 (__local_unwind2.c)
 * Callees:
 *     <none>
 */

void __usercall _NLG_Call(void (*a1)(void)@<eax>)
{
  a1();
  JUMPOUT(0x4B2FB936);
}
