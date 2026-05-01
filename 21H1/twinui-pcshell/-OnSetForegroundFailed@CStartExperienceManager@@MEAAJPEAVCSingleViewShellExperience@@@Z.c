/*
 * XREFs of ?OnSetForegroundFailed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B0D00
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x18006710C (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 */

__int64 __fastcall CStartExperienceManager::OnSetForegroundFailed(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
    (__int64)this + 152,
    (__int64)this - 88);
  return 0LL;
}
