/*
 * XREFs of SmInitSystem @ 0x140A6E354
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140A6E3BC (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140A6E440 (SmGlobalsInitialize.c)
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
