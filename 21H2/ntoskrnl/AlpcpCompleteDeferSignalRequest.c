/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x1407A7658
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1407A76C0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     AlpcpSignal @ 0x14035AA74 (AlpcpSignal.c)
 */

unsigned __int8 __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1)
{
  unsigned __int8 result; // al
  void *v3; // rcx

  result = _bittestandreset((signed __int32 *)(a1 + 48), 2u);
  if ( result )
  {
    result = AlpcpSignal(a1, 0LL, 0LL);
    v3 = *(void **)(a1 + 32);
    if ( v3 )
      return ObfDereferenceObject(v3);
  }
  return result;
}
