/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403CCE40
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1406889F0 (NtQueryInformationThread.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     IommuDomainConfigure @ 0x140863130 (IommuDomainConfigure.c)
 *     IommuFlushDomainVaList @ 0x1408631C0 (IommuFlushDomainVaList.c)
 *     HaliQuerySystemInformation @ 0x14098CF00 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
