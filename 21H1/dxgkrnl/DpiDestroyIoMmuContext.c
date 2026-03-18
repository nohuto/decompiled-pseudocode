/*
 * XREFs of DpiDestroyIoMmuContext @ 0x1C02CD42C
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C02C5CF0 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapters @ 0x1C02CE810 (DpiKsrStopAdapters.c)
 * Callees:
 *     IoMmuDestroyPageManager @ 0x1C005515C (IoMmuDestroyPageManager.c)
 *     IoMmuDeleteIoMmuDomain @ 0x1C02CD254 (IoMmuDeleteIoMmuDomain.c)
 *     IoMmuDetachDomainFromDevices @ 0x1C02CD288 (IoMmuDetachDomainFromDevices.c)
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
