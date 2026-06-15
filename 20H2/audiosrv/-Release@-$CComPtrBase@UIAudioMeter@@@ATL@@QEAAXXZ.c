/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800465D0
 * Callers:
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x180046560 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x1800BD130 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800BD440 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x1800BD5F0 (-ProviderFinalRelease@CMeterSoftware@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CComPtrBase<IAudioMeter>::Release(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
