/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403CFAD0
 * Callers:
 *     NtQueryInformationThread @ 0x1405F1760 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     IommuDomainConfigure @ 0x140868B50 (IommuDomainConfigure.c)
 *     IommuFlushDomainVaList @ 0x140868BE0 (IommuFlushDomainVaList.c)
 *     HaliQuerySystemInformation @ 0x140992C80 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
