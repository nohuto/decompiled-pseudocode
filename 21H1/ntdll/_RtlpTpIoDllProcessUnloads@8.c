/*
 * XREFs of _RtlpTpIoDllProcessUnloads@8 @ 0x4B38592E
 * Callers:
 *     _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1 (_RtlpTpIoDllUnloaded@4.c)
 * Callees:
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0 (_RtlDuplicateUnicodeString@12.c)
 */

unsigned int __fastcall RtlpTpIoDllProcessUnloads(int *a1, unsigned int *a2)
{
  unsigned int *i; // esi
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int result; // eax
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // [esp-4h] [ebp-10h]

  for ( i = a2; ; i = (unsigned int *)(i[14] - 56) )
  {
    while ( 1 )
    {
      v5 = i[17];
      if ( (v5 & 2) != 0 )
        break;
      v6 = i[15];
      v10 = 2;
LABEL_6:
      i[17] = v10 | v5;
      if ( v6 )
        i = (unsigned int *)(v6 - 56);
    }
    if ( (v5 & 4) == 0 )
    {
      v6 = i[16];
      v10 = 4;
      goto LABEL_6;
    }
    result = *i;
    v8 = i[17];
    if ( a1[3] <= *i )
    {
      result = a1[3] + a1[4];
      if ( *i < result )
      {
        v9 = i[12];
        i[17] = v5 | 1;
        TpAdjustBindingCount(v9, -i[13]);
        i[9] = 0;
        i[20] = a1[3];
        i[21] = a1[4];
        result = RtlDuplicateUnicodeString(1, a1[1], (int)(i + 18));
        v8 = i[17];
      }
    }
    i[17] = v8 & 0xFFFFFFF9;
    if ( i == a2 )
      break;
  }
  return result;
}
