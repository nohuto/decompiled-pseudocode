/*
 * XREFs of EtwRegisterClassicProvider @ 0x14075E470
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1403CE3EC (VslpIumPhase4Initialize.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C0DF0 (WmipProcessLegacyEtwRegister.c)
 * Callees:
 *     EtwpRegisterProvider @ 0x14075E530 (EtwpRegisterProvider.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
    return EtwpRegisterProvider(EtwpHostSiloState, a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}
