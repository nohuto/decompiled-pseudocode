/*
 * XREFs of SetWakeBit @ 0x1C005DD1C
 * Callers:
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SetWakeBit())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0252018;
  if ( qword_1C0252018 )
    return (__int64 (*)(void))qword_1C0252018();
  return result;
}
