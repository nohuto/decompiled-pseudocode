/*
 * XREFs of ?GetProcess@VirtualAudioSessionInfo@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180072670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualAudioSessionInfo::GetProcess(VirtualAudioSessionInfo *this, struct IAudioProcess **a2)
{
  return wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::query_to<IAudioProcess>((char *)this + 16, a2);
}
