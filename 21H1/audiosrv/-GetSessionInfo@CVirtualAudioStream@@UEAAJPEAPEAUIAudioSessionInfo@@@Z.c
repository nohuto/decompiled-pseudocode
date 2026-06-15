/*
 * XREFs of ?GetSessionInfo@CVirtualAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180072090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAudioStream::GetSessionInfo(CVirtualAudioStream *this, struct IAudioSessionInfo **a2)
{
  return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioSessionInfo **))this + 6))(
           *((_QWORD *)this + 6),
           &GUID_d31c391d_5718_48c7_b013_24e874adf5dd,
           a2);
}
