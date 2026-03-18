/*
 * XREFs of ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0066A18
 * Callers:
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C0067C60 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C0067D50 (NtFlipObjectReadNextMessageToProducer.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C006B9A4 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

__int64 __fastcall FlipManagerObject::QueryNextMessageToProducer(
        FlipManagerObject *this,
        char a2,
        struct CFlipConsumerMessage **a3)
{
  int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // rcx
  struct CFlipConsumerMessage *v9; // rcx
  __int64 v10; // r10
  _QWORD *v11; // r9

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v7 = *((_QWORD *)this + 25);
    v6 = 0;
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 == v7 + 8 )
    {
      v6 = -1073741823;
    }
    else
    {
      v9 = (struct CFlipConsumerMessage *)((v8 - 48) & -(__int64)(v8 != 0));
      *a3 = v9;
      if ( a2 )
      {
        CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v7 + 8);
        --*(_DWORD *)(v10 + 24);
        if ( (_QWORD *)*v11 == v11 )
          KeResetEvent(*(PRKEVENT *)(v10 + 32));
      }
      else
      {
        ++*((_DWORD *)v9 + 2);
      }
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
