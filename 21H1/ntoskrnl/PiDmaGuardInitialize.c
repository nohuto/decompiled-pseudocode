/*
 * XREFs of PiDmaGuardInitialize @ 0x1403B2530
 * Callers:
 *     PnpBootPhaseComplete @ 0x14078A6C4 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgInitPhaseTwo @ 0x14078B494 (PipDmgInitPhaseTwo.c)
 *     PipDmgInitPhaseZero @ 0x140A4B958 (PipDmgInitPhaseZero.c)
 */

__int64 __fastcall PiDmaGuardInitialize(int a1)
{
  __int64 result; // rax

  result = 0LL;
  switch ( a1 )
  {
    case 0:
      return PipDmgInitPhaseZero();
    case 1:
      if ( PipDmaGuardPolicy )
        PipCslUnlockCallback = (__int64)PipDmgConsoleUnlockCallback;
      break;
    case 2:
      return PipDmgInitPhaseTwo();
    default:
      __fastfail(5u);
  }
  return result;
}
