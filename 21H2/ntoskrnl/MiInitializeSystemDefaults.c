/*
 * XREFs of MiInitializeSystemDefaults @ 0x140B2E82C
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

int __fastcall MiInitializeSystemDefaults(__int64 a1)
{
  unsigned int LogicalProcessorsPerCore; // edx
  unsigned int v2; // edx
  int v3; // edx
  int result; // eax

  byte_140C53554 = 4;
  if ( HalpInterruptHyperThreading )
    LogicalProcessorsPerCore = KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  else
    LogicalProcessorsPerCore = 1;
  dword_140C50728 = LogicalProcessorsPerCore;
  if ( (((MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000u) >> 22) & 3) != 0 )
  {
    switch ( ((MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000u) >> 22) & 3 )
    {
      case 1u:
        word_140C51864 = 0;
        break;
      case 2u:
        word_140C51864 = 256;
        break;
      case 3u:
        word_140C51864 = 1;
        break;
      case 0u:
        goto LABEL_16;
    }
    if ( KiImplementedPhysicalBits > 0 )
    {
      byte_140C02453 = 4;
      qword_140C50780 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
      byte_140C02452 = KiImplementedPhysicalBits - 1;
    }
  }
  else
  {
    word_140C51864 = 1;
  }
LABEL_16:
  v2 = (MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000) & 0xF7FFFFFF;
  MiFlags = (MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000) & 0xE7FFFFFF | 0x10000000;
  if ( KiAccessBitErrata == 1 )
  {
    v3 = v2 | 0x14000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_21;
    v3 = v2 & 0xE7FFFFFF;
  }
  MiFlags = v3;
LABEL_21:
  if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags &= 0xE7FFFFFF;
  result = MiFlags;
  if ( (((unsigned int)MiFlags >> 27) & 3) == 1 )
  {
    byte_140C506CE = 1;
  }
  else if ( (((unsigned int)MiFlags >> 27) & 3) == 2 )
  {
    byte_140C506CE = -1;
  }
  else
  {
    byte_140C506CE = 0;
  }
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    result = MiFlags | 0x100;
  }
  else
  {
    if ( (KeFeatureBits & 0x1000000) == 0 )
      goto LABEL_33;
    result = MiFlags | 0x200;
  }
  MiFlags = result;
LABEL_33:
  if ( (KeFeatureBits & 0x400000000000LL) != 0 )
  {
    result |= 0x2000000u;
    MiFlags = result;
  }
  return result;
}
