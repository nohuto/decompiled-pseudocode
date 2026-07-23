/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x14089E76C
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14075F2D0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     _CmOpenDeviceRegKey @ 0x140617944 (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x140617A84 (_RegRtlQueryValue.c)
 */

void __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, __int128 *a2, __int64 a3)
{
  struct _DMA_ADAPTER *SessionById; // rbx
  unsigned int ExplicitScope; // [rsp+48h] [rbp+7h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+Fh] BYREF
  int v7; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 Buffer; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v10[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v7 = 0;
  ExplicitScope = a1;
  Buffer = 0LL;
  memset(v10, 0, sizeof(v10));
  if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
  {
    v6 = 32;
    if ( (int)RegRtlQueryValue(Handle, L"PortName", &v7, v10, &v6) >= 0 )
    {
      Buffer = *a2;
      if ( ExplicitScope == -1 )
      {
        ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED, &Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(ExplicitScope);
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, &Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          HalPutDmaAdapter(SessionById);
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
}
