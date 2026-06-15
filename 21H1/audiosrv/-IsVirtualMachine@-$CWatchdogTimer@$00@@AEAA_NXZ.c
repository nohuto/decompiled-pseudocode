/*
 * XREFs of ?IsVirtualMachine@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BCBB4
 * Callers:
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BC8D0 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 */

bool CWatchdogTimer<1>::IsVirtualMachine()
{
  DWORD pcbData[4]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE pvData[528]; // [rsp+50h] [rbp-228h] BYREF

  memset_0(pvData, 0, 0x208uLL);
  pcbData[0] = 520;
  return RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Virtual Machine\\Guest\\Parameters",
           L"PhysicalHostName",
           2u,
           0LL,
           pvData,
           pcbData) == 0;
}
