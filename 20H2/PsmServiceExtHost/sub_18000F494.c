/*
 * XREFs of sub_18000F494 @ 0x18000F494
 * Callers:
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 * Callees:
 *     sub_18000F5F8 @ 0x18000F5F8 (sub_18000F5F8.c)
 *     sub_18000F8EC @ 0x18000F8EC (sub_18000F8EC.c)
 */

__int64 __fastcall sub_18000F494(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  if ( *(_DWORD *)(a1 + 536) == 2 )
  {
    v4 = v3 >> 23;
  }
  else
  {
    if ( (v3 & 0x400) != 0 )
      return 0LL;
    v4 = v3 >> 23;
    if ( ((v3 >> 23) & 3) > 1 )
      return 0LL;
  }
  if ( (v4 & 3) == 0 || (v3 & 0x2000) != 0 )
  {
    v5 = a2[68];
    if ( a2[67] == 5 )
    {
      if ( v5 )
        return 0LL;
    }
    else if ( v5 - 10 > 0x122 || (a2[2] & 0xC) != 0 || (a2[1] & 4) != 0 )
    {
      return 0LL;
    }
    if ( (v3 & 0x7F) <= 0x40
      && (v3 & 0x180) < 0x180
      && (v3 & 0x2400) != 0x400
      && ((v3 & 0x180) == 0 || (a2[1] & 0x200) == 0)
      && (v3 & 0x1400) != 0x1400
      && (v3 & 0xC00) != 0xC00
      && (v3 & 0x100400) != 0x100000 )
    {
      if ( (unsigned int)sub_18000F8EC(a2, 3072LL, 1024LL) )
      {
        RtlInitializeBitMap(&BitMapHeader, a2 + 96, 0x2Fu);
        if ( !RtlNumberOfSetBits(&BitMapHeader) )
        {
          if ( (unsigned int)sub_18000F5F8(a2 + 70) )
            return 1LL;
        }
      }
    }
  }
  return 0LL;
}
