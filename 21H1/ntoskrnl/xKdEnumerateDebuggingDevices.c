/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403CC000
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     IommuDomainConfigure @ 0x140861E10 (IommuDomainConfigure.c)
 *     IommuFlushDomainVaList @ 0x140861EA0 (IommuFlushDomainVaList.c)
 *     HaliQuerySystemInformation @ 0x14098B9E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
