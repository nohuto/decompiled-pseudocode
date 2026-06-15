/*
 * XREFs of ?PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11H@Z @ 0x14003E160
 * Callers:
 *     ?PopulateAudioHistoryForStream@CStreamGroup@@WBI@EAAJ_K_J11H@Z @ 0x140029F30 (-PopulateAudioHistoryForStream@CStreamGroup@@WBI@EAAJ_K_J11H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::PopulateAudioHistoryForStream(
        CStreamGroup *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return CSubmixImpl::PopulateAudioHistoryForStream((CStreamGroup *)((char *)this + 24), a2, a3, a4, a5, a6);
}
