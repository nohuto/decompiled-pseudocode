/*
 * XREFs of ?CreateWaitedConsumerReturnForConsumer@CFlipManager@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C007D3D4
 * Callers:
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C007BA00 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::CreateWaitedConsumerReturnForConsumer(
        CFlipManager *this,
        __int64 a2,
        struct CFlipWaitedConsumerReturn **a3,
        __int64 a4)
{
  struct CFlipWaitedConsumerReturn *Pool2; // rax

  Pool2 = (struct CFlipWaitedConsumerReturn *)ExAllocatePool2(257LL, 24LL, 1920418630LL, a4);
  if ( Pool2 )
  {
    *((_QWORD *)Pool2 + 1) = 0LL;
    *(_QWORD *)Pool2 = &CFlipWaitedConsumerReturn::`vftable';
    *((_QWORD *)Pool2 + 2) = a2;
  }
  *a3 = Pool2;
  return Pool2 == 0LL ? 0xC0000017 : 0;
}
