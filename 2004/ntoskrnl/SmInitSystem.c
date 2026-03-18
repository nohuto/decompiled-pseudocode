/*
 * XREFs of SmInitSystem @ 0x140A67B2C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140A67B94 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140A67C18 (SmGlobalsInitialize.c)
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
