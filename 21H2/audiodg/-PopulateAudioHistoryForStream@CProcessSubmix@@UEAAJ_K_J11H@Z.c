/*
 * XREFs of ?PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z @ 0x14004F890
 * Callers:
 *     ?PopulateAudioHistoryForStream@CProcessSubmix@@WBA@EAAJ_K_J11H@Z @ 0x14002A860 (-PopulateAudioHistoryForStream@CProcessSubmix@@WBA@EAAJ_K_J11H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::PopulateAudioHistoryForStream(
        CProcessSubmix *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  return CSubmixImpl::PopulateAudioHistoryForStream((CProcessSubmix *)((char *)this + 16), a2, a3, a4, a5, a6);
}
