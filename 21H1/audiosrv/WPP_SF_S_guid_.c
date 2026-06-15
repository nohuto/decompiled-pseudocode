/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800CBC30
 * Callers:
 *     _lambda_4ee4a630d91b577e4d31f4c6e0d18ad2_::operator() @ 0x18006D9C0 (_lambda_4ee4a630d91b577e4d31f4c6e0d18ad2_--operator().c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, 74LL, a4);
}
