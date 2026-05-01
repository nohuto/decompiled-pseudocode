/*
 * XREFs of _lambda_6f903727e28235e985aa4aa4647c4ffc_::__lambda_6f903727e28235e985aa4aa4647c4ffc_ @ 0x18023BFE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f903727e28235e985aa4aa4647c4ffc___::_scalar_deleting_destructor_ @ 0x18023C580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f903727e28235e985aa4aa4647c4ffc___--_scala.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18023EC20 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x18023C100 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_6f903727e28235e985aa4aa4647c4ffc_::__lambda_6f903727e28235e985aa4aa4647c4ffc_(__int64 a1)
{
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)(a1 + 72));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 8);
}
