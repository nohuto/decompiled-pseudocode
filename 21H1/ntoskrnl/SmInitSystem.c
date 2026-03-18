/*
 * XREFs of SmInitSystem @ 0x140A676A4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140A6770C (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140A67790 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140D244F0) >= 0 )
    {
      dword_140D244F8 |= 1u;
      dword_140D244FC = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
