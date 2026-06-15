/*
 * XREFs of ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140019470
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140012B44 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140019FB0 (-Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001FE90 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x14002B1B0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14002B1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModul.c)
 *     ??1?$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x14003A8D4 (--1-$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001EB78 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::Release(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  signed __int64 v1; // rax
  Windows::Media::Devices::AudioDeviceModulesManager *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 7);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v1 + 16));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64))(*(_QWORD *)v2 + 80LL))(
        v2,
        1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
