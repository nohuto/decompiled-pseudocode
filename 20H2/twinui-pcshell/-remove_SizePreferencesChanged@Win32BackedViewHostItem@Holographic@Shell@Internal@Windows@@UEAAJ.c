/*
 * XREFs of ?remove_SizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180256760
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180011BD4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::remove_SizePreferencesChanged(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 224);
  AcquireSRWLockExclusive((PSRWLOCK)this + 28);
  v5 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (volatile int *)this + 178,
         (struct IUnknown *)a2.value);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v5);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v6;
}
