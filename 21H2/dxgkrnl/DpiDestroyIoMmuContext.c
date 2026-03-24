/*
 * XREFs of DpiDestroyIoMmuContext @ 0x1C02D1CE8
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C02CA620 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapters @ 0x1C02D30D0 (DpiKsrStopAdapters.c)
 * Callees:
 *     IoMmuDestroyPageManager @ 0x1C0056FBC (IoMmuDestroyPageManager.c)
 *     IoMmuDeleteIoMmuDomain @ 0x1C02D1B10 (IoMmuDeleteIoMmuDomain.c)
 *     IoMmuDetachDomainFromDevices @ 0x1C02D1B44 (IoMmuDetachDomainFromDevices.c)
 */

void __fastcall DpiDestroyIoMmuContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( !*(_BYTE *)(a1 + 480) )
  {
    if ( *(_QWORD *)(a1 + 5864) != a1 + 5864 )
    {
      v3 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v3 + 24) = 1410LL;
      WdLogEvent5_WdAssertion(v3);
    }
    IoMmuDetachDomainFromDevices(a1);
    IoMmuDeleteIoMmuDomain(a1 + 5744);
    IoMmuDestroyPageManager((_QWORD *)(a1 + 5760));
  }
}
