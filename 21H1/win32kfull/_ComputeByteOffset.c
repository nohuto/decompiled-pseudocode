/*
 * XREFs of _ComputeByteOffset @ 0x1BB2FE
 * Callers:
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 *     _CheckBMPNeedFixup @ 0x1C43B3 (_CheckBMPNeedFixup.c)
 * Callees:
 *     <none>
 */

int __fastcall ComputeByteOffset(unsigned int a1, int a2, _BYTE *a3)
{
  char v3; // bl
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  v3 = 0;
  if ( a1 > 6 )
  {
    if ( a1 < 0xF5 )
      return 0;
    if ( a1 <= 0xFB )
      goto LABEL_18;
    if ( a1 <= 0xFD )
    {
LABEL_17:
      a2 *= 2;
      goto LABEL_18;
    }
    if ( a1 == 254 )
      goto LABEL_18;
    if ( a1 != 255 )
      return 0;
LABEL_16:
    v3 = a2 & 1;
    a2 >>= 1;
    goto LABEL_18;
  }
  if ( a1 == 6 )
  {
    a2 *= 4;
    goto LABEL_18;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    v3 = a2 & 7;
    a2 >>= 3;
    goto LABEL_18;
  }
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_16;
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_18:
    *a3 = v3;
    return a2;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_17;
  if ( v7 == 1 )
  {
    a2 *= 3;
    goto LABEL_18;
  }
  return 0;
}
