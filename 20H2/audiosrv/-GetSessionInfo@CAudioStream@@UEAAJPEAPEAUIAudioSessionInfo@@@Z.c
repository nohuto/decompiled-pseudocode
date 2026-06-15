/*
 * XREFs of ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x1800051C0
 * Callers:
 *     ?GetSessionInfo@CAudioStream@@W7EAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x1800744A0 (-GetSessionInfo@CAudioStream@@W7EAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetSessionInfo(CAudioStream *this, struct IAudioSessionInfo **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, struct IAudioSessionInfo **); // rcx

  *a2 = 0LL;
  v2 = (void (__fastcall ***)(_QWORD, GUID *, struct IAudioSessionInfo **))*((_QWORD *)this + 8);
  if ( v2 )
    (**v2)(v2, &GUID_d31c391d_5718_48c7_b013_24e874adf5dd, a2);
  return 0LL;
}
