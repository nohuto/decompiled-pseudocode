/*
 * XREFs of ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011170
 * Callers:
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020560 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020570 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400113E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004C384 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed) )
  {
    *v7 = v8;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  v8 + 8,
                  v9);
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)CanCastTo;
}
