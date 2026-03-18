/*
 * XREFs of StringCbLengthW @ 0x140304E08
 * Callers:
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     SPCallServerHandleQueryPolicy @ 0x14066E740 (SPCallServerHandleQueryPolicy.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406CCC74 (SPCallServerHandleIsAppLicensed.c)
 *     PfVerifyScenarioBuffer @ 0x1406CD4F0 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140705648 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_14095D914 @ 0x14095D914 (sub_14095D914.c)
 *     sub_14095DD10 @ 0x14095DD10 (sub_14095DD10.c)
 *     sub_14095EC8C @ 0x14095EC8C (sub_14095EC8C.c)
 *     sub_14095F2A0 @ 0x14095F2A0 (sub_14095F2A0.c)
 *     sub_14095FD08 @ 0x14095FD08 (sub_14095FD08.c)
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
