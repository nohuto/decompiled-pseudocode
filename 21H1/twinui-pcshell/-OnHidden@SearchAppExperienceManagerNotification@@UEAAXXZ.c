/*
 * XREFs of ?OnHidden@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x180088E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x18000EB88 (--$InvokeAll@PEAVSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCortana.c)
 */

void __fastcall SearchAppExperienceManagerNotification::OnHidden(SearchAppExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
      v1 + 72,
      v1);
}
