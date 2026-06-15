/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800CBCF0
 * Callers:
 *     _lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator() @ 0x18006E2AC (_lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, 74LL, a4);
}
