/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800B5784
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180041F64 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x180044868 (-ProcessRoundTripRequest@CComposition@@AEAA_NXZ.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800B56A8 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Reset@CComposition@@UEAAXXZ @ 0x1800D28D0 (-Reset@CComposition@@UEAAXXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18018DE54 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800B58A8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi

  v2 = *((_DWORD *)this + 104);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = v2;
    do
    {
      v8 = CChannelContext::PostMessageToChannel(*(CChannelContext **)(v6 + *((_QWORD *)this + 49)), a2);
      v10 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x957u, 0LL);
      if ( !v3 || v3 >= 0 && v10 < 0 )
        v3 = v10;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v3;
}
