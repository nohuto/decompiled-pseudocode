/*
 * XREFs of ?remove_AppUsageStateChanged@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180433300
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000F004 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::remove_AppUsageStateChanged(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (__int64 *)this + 8,
         (struct IUnknown *)a2.value);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD1,
                           (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v3);
  }
  return result;
}
