/*
 * XREFs of _dynamic_atexit_destructor_for__init_atexit__ @ 0x1800DB0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__init_atexit__()
{
  void *v0; // rcx
  void (*v1)(void); // rax
  __int64 result; // rax

  while ( 1 )
  {
    result = qword_18019C1B8;
    if ( (unsigned __int64)qword_18019C1B8 >= 0xA )
      break;
    v0 = (void *)qword_18019C500[qword_18019C1B8++];
    v1 = (void (*)(void))DecodePointer(v0);
    if ( v1 )
      v1();
  }
  return result;
}
