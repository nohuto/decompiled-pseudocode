/*
 * XREFs of StringCbLengthW @ 0x14025C2A4
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x14065A250 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14065B238 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x14065B804 (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     sub_1409636D4 @ 0x1409636D4 (sub_1409636D4.c)
 *     sub_140963AD0 @ 0x140963AD0 (sub_140963AD0.c)
 *     sub_140964A5C @ 0x140964A5C (sub_140964A5C.c)
 *     sub_140965070 @ 0x140965070 (sub_140965070.c)
 *     sub_140965AD8 @ 0x140965AD8 (sub_140965AD8.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  HRESULT v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
