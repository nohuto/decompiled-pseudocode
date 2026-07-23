/*
 * XREFs of MiInitializeSystemDefaults @ 0x140A72EC8
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiInitializeSystemDefaults(__int64 a1)
{
  unsigned int LogicalProcessorsPerCore; // edx
  ULONG_PTR result; // rax
  int v3; // edx

  byte_140C4F014 = 4;
  dword_140C4DF20 = 48;
  if ( HalpInterruptHyperThreading )
    LogicalProcessorsPerCore = KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  else
    LogicalProcessorsPerCore = 1;
  dword_140C4DF24 = LogicalProcessorsPerCore;
  MiFlags ^= (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000;
  switch ( ((unsigned int)MiFlags >> 22) & 3 )
  {
    case 0u:
      goto LABEL_23;
    case 1u:
      word_140C4E048 = 0;
      break;
    case 2u:
      word_140C4E048 = 256;
      break;
    case 3u:
LABEL_23:
      word_140C4E048 = 1;
      break;
  }
  if ( (((unsigned int)MiFlags >> 22) & 3) != 0 && KiImplementedPhysicalBits > 0 )
  {
    byte_140C00DE3 = 4;
    qword_140C4DF80 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
    byte_140C00DE2 = KiImplementedPhysicalBits - 1;
  }
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    v3 = MiFlags | 0x4000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_12;
    v3 = MiFlags | 0x800;
  }
  MiFlags = v3;
LABEL_12:
  if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags |= 0x800u;
  result = KeFeatureBits;
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    MiFlags |= 0x100u;
  }
  else if ( (KeFeatureBits & 0x1000000) != 0 )
  {
    MiFlags |= 0x200u;
  }
  if ( (KeFeatureBits & 0x400000000000LL) != 0 )
    MiFlags |= 0x2000000u;
  return result;
}
