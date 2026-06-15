/*
 * XREFs of memcmp_0 @ 0x14001F433
 * Callers:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FC70 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x140041E6C (-GetNodeMode@CDisplayNode@@QEAAIXZ.c)
 *     ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x140046340 (-IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
