/*
 * XREFs of MiInitializeColors @ 0x140A460F4
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A446BC (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x140A4617C (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax
  unsigned __int8 v2; // cl
  unsigned int v3; // eax
  __int64 result; // rax

  MiInitializeCacheSizes();
  _BitScanReverse(&v0, dword_140C4DF3C);
  LOBYTE(v1) = 1;
  byte_140C4DECD = v0;
  v2 = 1;
  MiChannelMaximumPowerOf2 = 1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
    {
      v1 = (unsigned __int8)(2 * v1);
      MiChannelMaximumPowerOf2 = v1;
      v2 = v1;
    }
    while ( v1 < MmNumberOfChannels );
  }
  MiChannelMaximumPowerOf2Mask = v2 - 1;
  _BitScanReverse(&v3, v2);
  byte_140C4DECC = v3 + byte_140C4DECD;
  dword_140C4DEC0 = (1 << (v3 + byte_140C4DECD)) - 1;
  result = (unsigned int)dword_140C4DF38;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_140C4DF38;
  return result;
}
