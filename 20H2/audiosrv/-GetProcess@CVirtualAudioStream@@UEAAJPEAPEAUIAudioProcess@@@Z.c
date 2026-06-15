/*
 * XREFs of ?GetProcess@CVirtualAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800716C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAudioStream::GetProcess(CVirtualAudioStream *this, struct IAudioProcess **a2)
{
  return wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::query_to<IAudioProcess>((char *)this + 32, a2);
}
