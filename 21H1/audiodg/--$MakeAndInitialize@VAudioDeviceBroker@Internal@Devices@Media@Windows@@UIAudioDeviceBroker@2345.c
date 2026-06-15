/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140011754
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140012E64 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400113E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140012914 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x140012D54 (--0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140019490 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004C384 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
        Windows::Media::Devices::Internal::AudioDeviceBroker **a1,
        HANDLE *a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBroker *v4; // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v5; // rbx
  int CanCastTo; // edi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r9
  __int64 v10; // rdx

  *a1 = 0LL;
  v4 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)operator new(
                                                                 0xD8uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(v4);
  CanCastTo = Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(v5, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v8, v9) )
      {
        *a1 = v5;
        CanCastTo = 0;
LABEL_7:
        (*(void (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_8;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v5 + 8,
                    v10);
      if ( CanCastTo >= 0 )
        goto LABEL_7;
    }
  }
LABEL_8:
  if ( v5 )
    Windows::Media::Devices::AudioDeviceModulesManager::Release(v5);
  return (unsigned int)CanCastTo;
}
