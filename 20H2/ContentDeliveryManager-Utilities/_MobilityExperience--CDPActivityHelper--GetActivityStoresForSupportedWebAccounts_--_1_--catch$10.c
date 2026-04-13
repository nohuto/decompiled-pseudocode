/*
 * XREFs of _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::catch$10 @ 0x1800D1379
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180049F9C (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  const char *v3; // [rsp+18h] [rbp-10h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x1EC,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
    "Failed to get activity store",
    v3);
  return &loc_18004B6D4;
}
