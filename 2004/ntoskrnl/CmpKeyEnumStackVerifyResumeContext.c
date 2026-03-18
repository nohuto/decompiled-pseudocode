/*
 * XREFs of CmpKeyEnumStackVerifyResumeContext @ 0x14087786C
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackVerifyResumeContext(__int64 a1)
{
  unsigned int v1; // r9d
  __int16 v3; // dx
  __int64 KcbAtLayerHeight; // rax
  __int16 v5; // dx
  __int16 v6; // r10
  __int64 v7; // r11

  v1 = 0;
  v3 = 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v3);
      if ( KcbAtLayerHeight != *(_QWORD *)(v7 + 24LL * v5 + 16)
        || *(_QWORD *)(KcbAtLayerHeight + 304) != *(_QWORD *)(v7 + 24LL * v5 + 8) )
      {
        break;
      }
      v3 = v5 + 1;
      if ( v3 > v6 )
        return v1;
    }
    return (unsigned int)-1073741735;
  }
  return v1;
}
