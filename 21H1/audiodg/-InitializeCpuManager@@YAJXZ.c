/*
 * XREFs of ?InitializeCpuManager@@YAJXZ @ 0x140013EDC
 * Callers:
 *     _lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator() @ 0x14001412C (_lambda_469503bf6dae88a4a10e2b9fb17df9f1_--operator().c)
 * Callees:
 *     ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140013CC8 (--$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14001AB54 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 InitializeCpuManager(void)
{
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF

  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v2 = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &v2, 4LL, 0LL);
  dword_140085068 = 50000;
  pcbData = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementThresholdHns",
    0x18u,
    0LL,
    &dword_140085068,
    &pcbData);
  pcbData = 8;
  g_UserConfiguredAudioReservedCpu = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementAudioReservedCpuMask",
    0x48u,
    0LL,
    &qword_1400851F8,
    &pcbData);
  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&qword_140085200);
  return Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>((CpuManager **)&qword_140085200);
}
