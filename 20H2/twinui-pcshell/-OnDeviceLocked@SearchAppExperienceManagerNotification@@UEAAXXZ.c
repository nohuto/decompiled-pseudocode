/*
 * XREFs of ?OnDeviceLocked@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x1801F5E60
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x180010778 (--$InvokeAll@PEAVSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCortana.c)
 */

void __fastcall SearchAppExperienceManagerNotification::OnDeviceLocked(SearchAppExperienceManagerNotification *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 616) = 1;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
      *((_QWORD *)this + 5) + 336LL,
      *((_QWORD *)this + 5));
  }
}
