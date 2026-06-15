/*
 * XREFs of ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x180127440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x1801273B0 (--1CSpatialAudioTech@@UEAA@XZ.c)
 */

CSpatialAudioDtsxHeadphones *__fastcall CSpatialAudioDtsxHeadphones::`vector deleting destructor'(
        CSpatialAudioDtsxHeadphones *this,
        char a2)
{
  CSpatialAudioTech::~CSpatialAudioTech(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x520);
  return this;
}
