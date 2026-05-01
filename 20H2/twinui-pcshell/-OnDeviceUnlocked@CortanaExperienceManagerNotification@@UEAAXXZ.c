/*
 * XREFs of ?OnDeviceUnlocked@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x1801B5EB4 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnDeviceUnlocked(CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 537) = 0;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
      (RTL_SRWLOCK *)(*((_QWORD *)this + 6) + 360LL),
      *((_QWORD *)this + 6));
  }
}
