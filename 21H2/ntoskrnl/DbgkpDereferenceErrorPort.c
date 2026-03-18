/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x140540210
 * Callers:
 *     DbgkFlushErrorPort @ 0x1407DBF04 (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140929F90 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x140929F64 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
