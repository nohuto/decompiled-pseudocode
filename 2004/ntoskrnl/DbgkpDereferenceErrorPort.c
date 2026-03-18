/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x1404E8F68
 * Callers:
 *     DbgkFlushErrorPort @ 0x14061DDE0 (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140883F84 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x140883F58 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
