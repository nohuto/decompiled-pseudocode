/*
 * XREFs of HalpInitializeCmc @ 0x140A5AA64
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A5A680 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmcInitializePolling @ 0x1403D256C (HalpCmcInitializePolling.c)
 *     HalpCmciInitializeErrorPacket @ 0x1403D2750 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmcStartPolling @ 0x1403D2BFC (HalpCmcStartPolling.c)
 *     HalpIsCmciImplemented @ 0x140A5367C (HalpIsCmciImplemented.c)
 *     HalpCmciInitProcessor @ 0x140A53718 (HalpCmciInitProcessor.c)
 *     HalpCmciInit @ 0x140A5AAF0 (HalpCmciInit.c)
 */

__int64 __fastcall HalpInitializeCmc(int a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h]

  HIDWORD(v4) = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      HalpCmcErrorSourceId = *(_DWORD *)(a2 + 28);
      HalpCmcErrorSource = (PVOID)a2;
      if ( HalpIsCmciImplemented() )
      {
        *(_BYTE *)(a2 + 48) = 5;
        HalpCmciInit(a2);
      }
      HalpCmcInitializePolling(a2);
      HalpCmcStartPolling();
    }
    else
    {
      LODWORD(v4) = KeGetPcr()->Prcb.Number;
      if ( HalpIsCmciImplemented() )
      {
        HalpCmciInitializeErrorPacket(a2, v4);
        HalpCmciInitProcessor(a2, v4);
      }
    }
  }
  else
  {
    HalpCmcErrorSourceId = *(_DWORD *)(a2 + 28);
    HalpCmcErrorSource = (PVOID)a2;
    if ( HalpIsCmciImplemented() )
    {
      HalpCmciEnabled = 1;
      *(_BYTE *)(a2 + 48) = 5;
      HalpCmciInit(a2);
    }
  }
  return 0LL;
}
