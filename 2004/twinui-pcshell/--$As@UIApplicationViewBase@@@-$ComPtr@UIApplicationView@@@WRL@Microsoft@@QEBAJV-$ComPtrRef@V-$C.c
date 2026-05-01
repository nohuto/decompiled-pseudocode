/*
 * XREFs of ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C0F0
 * Callers:
 *     _lambda_0f26d6a788efdefbe2c747d83abf1d95_::operator() @ 0x18018E030 (_lambda_0f26d6a788efdefbe2c747d83abf1d95_--operator().c)
 *     _lambda_58d0b42f459fba30bfac1d074d7fc715_::operator() @ 0x18018E398 (_lambda_58d0b42f459fba30bfac1d074d7fc715_--operator().c)
 *     ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180190600 (-TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
           a2);
}
