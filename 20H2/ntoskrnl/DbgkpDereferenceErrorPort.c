/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x1404EC7F8
 * Callers:
 *     DbgkFlushErrorPort @ 0x14064EA20 (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140889AD4 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x140889AA8 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
