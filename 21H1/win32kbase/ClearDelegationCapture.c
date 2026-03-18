/*
 * XREFs of ClearDelegationCapture @ 0x1C00341E0
 * Callers:
 *     zzzDestroyQueue @ 0x1C006FE70 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ClearDelegationCapture())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257FC8;
  if ( qword_1C0257FC8 )
    return (__int64 (*)(void))qword_1C0257FC8();
  return result;
}
