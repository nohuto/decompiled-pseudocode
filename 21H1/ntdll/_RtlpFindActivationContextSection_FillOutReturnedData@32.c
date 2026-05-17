/*
 * XREFs of _RtlpFindActivationContextSection_FillOutReturnedData@32 @ 0x4B2B43E8
 * Callers:
 *     _RtlFindActivationContextSectionString@20 @ 0x4B2CA130 (_RtlFindActivationContextSectionString@20.c)
 *     _RtlFindActivationContextSectionGuid@20 @ 0x4B2CD660 (_RtlFindActivationContextSectionGuid@20.c)
 * Callees:
 *     _RtlpGetActivationContextData@16 @ 0x4B2B4F76 (_RtlpGetActivationContextData@16.c)
 *     _RtlAddRefActivationContext@4 @ 0x4B2B5090 (_RtlAddRefActivationContext@4.c)
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 */

int __fastcall RtlpFindActivationContextSection_FillOutReturnedData(
        char a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // edx
  int result; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // ecx
  unsigned int *v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // [esp+10h] [ebp-8h] BYREF
  int v19; // [esp+14h] [ebp-4h] BYREF

  v10 = a4;
  if ( !a4 || !a5 )
    return -1073741811;
  if ( !a2 )
    return 0;
  if ( a6 )
  {
    a2[4] = a5 + a6;
    a2[5] = a7;
  }
  a2[6] = a5;
  a2[7] = a8;
  if ( (a1 & 1) != 0 )
  {
    RtlAddRefActivationContext(a3);
    v10 = a4;
    a2[8] = a3;
  }
  if ( (a1 & 2) != 0 )
    a2[10] = *(_DWORD *)(v10 + 20) & 3;
  if ( (a1 & 4) == 0 )
    return 0;
  result = RtlpGetActivationContextData(v10, &v19);
  if ( result >= 0 )
  {
    if ( !v19 )
      return -1073741595;
    a2[11] = v19 + *(_DWORD *)(24 * a2[9] + *(_DWORD *)(*(_DWORD *)(v19 + 24) + v19 + 12) + v19 + 16);
    result = RtlpLocateActivationContextSection(1, &v19, &v18);
    if ( result >= 0 )
    {
      v12 = v19;
      v13 = v18;
      a2[12] = v19;
      a2[13] = v13;
      if ( !v12 || !v13 )
        return 0;
      v14 = (_DWORD *)(v13 + v12);
      v15 = v14 + 1;
      if ( v14 + 1 <= (_DWORD *)((char *)v14 + v13) && v14 + 2 <= (_DWORD *)((char *)v14 + v13) && *v14 == 1682469715 )
      {
        v16 = *v15;
        if ( *v15 <= v13 && v13 >= 0x2C && v16 >= 0x2C )
        {
          v17 = (unsigned int)v14 + v16;
          if ( (unsigned int)v15 <= v17
            && (unsigned int)(v14 + 2) <= v17
            && (unsigned int)(v14 + 10) <= v17
            && (unsigned int)(v14 + 11) <= v17 )
          {
            a2[14] = (char *)v14 + v14[9];
            a2[15] = v14[10];
            return 0;
          }
        }
      }
      return -1073741595;
    }
  }
  return result;
}
