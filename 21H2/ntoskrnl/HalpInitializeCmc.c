/*
 * XREFs of HalpInitializeCmc @ 0x1409A20E8
 * Callers:
 *     HalpInitializeErrSrc @ 0x1409A1D10 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmcInitializePolling @ 0x1403C5810 (HalpCmcInitializePolling.c)
 *     HalpCmcStartPolling @ 0x1403C5BC8 (HalpCmcStartPolling.c)
 *     HalpIsCmciImplemented @ 0x14099AC64 (HalpIsCmciImplemented.c)
 *     HalpCmciInitProcessor @ 0x14099AD20 (HalpCmciInitProcessor.c)
 *     HalpCmciInit @ 0x1409A2174 (HalpCmciInit.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A229C (HalpCmciInitializeErrorPacket.c)
 */

__int64 __fastcall HalpInitializeCmc(int a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+18h]

  HIDWORD(v5) = 0;
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
      HalpCmcStartPolling(v4);
    }
    else
    {
      LODWORD(v5) = KeGetPcr()->Prcb.Number;
      if ( HalpIsCmciImplemented() )
      {
        HalpCmciInitializeErrorPacket(a2, v5);
        HalpCmciInitProcessor(a2, v5);
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
