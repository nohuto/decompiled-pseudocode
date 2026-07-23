/*
 * XREFs of PiDmaGuardInitialize @ 0x1403B7498
 * Callers:
 *     PnpBootPhaseComplete @ 0x1407A33F4 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgInitPhaseTwo @ 0x1407A41C4 (PipDmgInitPhaseTwo.c)
 *     PipDmgInitPhaseZero @ 0x140A54178 (PipDmgInitPhaseZero.c)
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
