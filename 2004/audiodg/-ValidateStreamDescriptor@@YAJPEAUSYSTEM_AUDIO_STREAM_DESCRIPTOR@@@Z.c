/*
 * XREFs of ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14001AAF8
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AB0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000BB60 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall ValidateStreamDescriptor(struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1)
{
  unsigned int v1; // eax
  const struct tWAVEFORMATEX *v2; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 2147500035LL;
  if ( *(_DWORD *)a1 > 2u )
    return 2147942487LL;
  v1 = *((_DWORD *)a1 + 30);
  if ( v1 < 0x12 )
    return 2147942487LL;
  v2 = (const struct tWAVEFORMATEX *)*((_QWORD *)a1 + 16);
  if ( !v2 )
    return 2147500035LL;
  if ( v2->wFormatTag == 0xFFFE && v1 < 0x28 )
    return 2147942487LL;
  result = ValidateWaveFormatEx(v2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
