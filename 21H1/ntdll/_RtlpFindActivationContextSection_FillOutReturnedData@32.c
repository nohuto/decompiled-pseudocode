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
        PACTIVATION_CONTEXT ActivationContext,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // edx
  int result; // eax
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // eax
  _DWORD *v15; // ecx
  unsigned int *v16; // edi
  unsigned int v17; // edx
  unsigned int v18; // edx
  int v19; // [esp+10h] [ebp-8h] BYREF
  int v20; // [esp+14h] [ebp-4h] BYREF

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
    RtlAddRefActivationContext(ActivationContext);
    v10 = a4;
    a2[8] = ActivationContext;
  }
  if ( (a1 & 2) != 0 )
    a2[10] = *(_DWORD *)(v10 + 20) & 3;
  if ( (a1 & 4) == 0 )
    return 0;
  result = RtlpGetActivationContextData(v10, &v20);
  if ( result >= 0 )
  {
    if ( !v20 )
      return -1073741595;
    v12 = v20;
    a2[11] = v20 + *(_DWORD *)(24 * a2[9] + *(_DWORD *)(*(_DWORD *)(v20 + 24) + v20 + 12) + v20 + 16);
    result = RtlpLocateActivationContextSection(v12, 1, (int)&v20, (int)&v19);
    if ( result >= 0 )
    {
      v13 = v20;
      v14 = v19;
      a2[12] = v20;
      a2[13] = v14;
      if ( !v13 || !v14 )
        return 0;
      v15 = (_DWORD *)(v14 + v13);
      v16 = v15 + 1;
      if ( v15 + 1 <= (_DWORD *)((char *)v15 + v14) && v15 + 2 <= (_DWORD *)((char *)v15 + v14) && *v15 == 1682469715 )
      {
        v17 = *v16;
        if ( *v16 <= v14 && v14 >= 0x2C && v17 >= 0x2C )
        {
          v18 = (unsigned int)v15 + v17;
          if ( (unsigned int)v16 <= v18
            && (unsigned int)(v15 + 2) <= v18
            && (unsigned int)(v15 + 10) <= v18
            && (unsigned int)(v15 + 11) <= v18 )
          {
            a2[14] = (char *)v15 + v15[9];
            a2[15] = v15[10];
            return 0;
          }
        }
      }
      return -1073741595;
    }
  }
  return result;
}
