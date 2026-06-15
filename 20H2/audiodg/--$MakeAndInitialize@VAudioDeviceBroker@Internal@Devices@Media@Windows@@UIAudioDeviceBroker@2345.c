/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140012B74
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140012D40 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x140010CE0 (--0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140011420 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140012BF4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x1400194A0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1400557CC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
        RTL_SRWLOCK **a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rbx
  int CanCastTo; // edi
  BOOL IsEqualGUID; // eax
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // r9
  __int64 v11; // rdx

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(v4);
  CanCastTo = Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(
                (Windows::Media::Devices::Internal::AudioDeviceBroker *)v5,
                *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    IsEqualGUID = InlineIsEqualGUID(
                    &GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674,
                    &GUID_00000000_0000_0000_c000_000000000046);
    if ( IsEqualGUID || InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v5;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v9, v10) )
      {
        *a1 = v5;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                      &v5[1],
                      v11);
        if ( CanCastTo < 0 )
          goto LABEL_12;
      }
      (*((void (__fastcall **)(RTL_SRWLOCK *))(*a1)->Ptr + 1))(*a1);
    }
  }
LABEL_12:
  if ( v5 )
    Windows::Media::Devices::AudioDeviceModulesManager::Release((Windows::Media::Devices::AudioDeviceModulesManager *)v5);
  return (unsigned int)CanCastTo;
}
