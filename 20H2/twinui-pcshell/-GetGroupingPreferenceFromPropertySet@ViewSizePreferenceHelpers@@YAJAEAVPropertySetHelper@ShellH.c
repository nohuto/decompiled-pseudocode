/*
 * XREFs of ?GetGroupingPreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAI@Z @ 0x180282428
 * Callers:
 *     ?GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1802828A8 (-GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGrouping@ViewM.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180023EA0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewSizePreferenceHelpers::GetGroupingPreferenceFromPropertySet(
        ViewSizePreferenceHelpers *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        unsigned int *a3)
{
  HSTRING_HEADER *v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // r8
  HSTRING_HEADER v8; // [rsp+20h] [rbp-38h] BYREF

  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v8,
         (const WCHAR **)off_1804CF470,
         (unsigned int)a3);
  return Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
           (__int64)v5[1].Reserved.Reserved1,
           v6,
           a2);
}
