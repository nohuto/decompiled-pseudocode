/*
 * XREFs of MiInitializeColors @ 0x140A460FC
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A446C4 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x140A46184 (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax
  unsigned __int8 v2; // cl
  unsigned int v3; // eax
  __int64 result; // rax

  MiInitializeCacheSizes();
  _BitScanReverse(&v0, dword_140C4DE3C);
  LOBYTE(v1) = 1;
  byte_140C4DDCD = v0;
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
  byte_140C4DDCC = v3 + byte_140C4DDCD;
  dword_140C4DDC0 = (1 << (v3 + byte_140C4DDCD)) - 1;
  result = (unsigned int)dword_140C4DE38;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_140C4DE38;
  return result;
}
