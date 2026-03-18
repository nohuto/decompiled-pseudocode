/*
 * XREFs of ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C0067978
 * Callers:
 *     NtFlipObjectDisconnectEndpoint @ 0x1C0068850 (NtFlipObjectDisconnectEndpoint.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C006AD30 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C006ADE4 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::DisconnectEndpoint(FlipManagerObject *this, char a2)
{
  int v4; // ebx
  CFlipManager *v5; // rcx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v5 = (FlipManagerObject *)((char *)this + 32);
    if ( a2 )
    {
      CFlipManager::ProcessProducerDisconnect(v5);
    }
    else if ( *((_QWORD *)this + 10) != 1LL )
    {
      CFlipManager::ProcessConsumerDisconnect(v5);
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
