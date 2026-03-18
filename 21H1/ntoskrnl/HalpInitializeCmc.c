/*
 * XREFs of HalpInitializeCmc @ 0x14099C0F8
 * Callers:
 *     HalpInitializeErrSrc @ 0x14099BD20 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmcInitializePolling @ 0x1403C1650 (HalpCmcInitializePolling.c)
 *     HalpCmcStartPolling @ 0x1403C1A08 (HalpCmcStartPolling.c)
 *     HalpIsCmciImplemented @ 0x1409952D4 (HalpIsCmciImplemented.c)
 *     HalpCmciInitProcessor @ 0x140995390 (HalpCmciInitProcessor.c)
 *     HalpCmciInit @ 0x14099C184 (HalpCmciInit.c)
 *     HalpCmciInitializeErrorPacket @ 0x14099C2AC (HalpCmciInitializeErrorPacket.c)
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
