/*
 * XREFs of StringCbLengthW @ 0x1402C2B50
 * Callers:
 *     SPCallServerHandleGetAppPolicyValue @ 0x1405D4670 (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1405D4D94 (SPCallServerHandleIsAppLicensed.c)
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     PfVerifyScenarioBuffer @ 0x140652E90 (PfVerifyScenarioBuffer.c)
 *     sub_14095C574 @ 0x14095C574 (sub_14095C574.c)
 *     sub_14095C970 @ 0x14095C970 (sub_14095C970.c)
 *     sub_14095D8EC @ 0x14095D8EC (sub_14095D8EC.c)
 *     sub_14095DF00 @ 0x14095DF00 (sub_14095DF00.c)
 *     sub_14095E968 @ 0x14095E968 (sub_14095E968.c)
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
