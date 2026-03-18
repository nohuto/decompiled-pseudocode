/*
 * XREFs of ACPIEcRunQueryMethod @ 0x1C0053734
 * Callers:
 *     ACPIEcDispatchQueries @ 0x1C00535B8 (ACPIEcDispatchQueries.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ACPIEcCompleteQueryMethod @ 0x1C0053540 (ACPIEcCompleteQueryMethod.c)
 */

__int64 __fastcall ACPIEcRunQueryMethod(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebx

  v3 = AMLIGetNamedChild(
         *(__int64 **)(a1 + 56),
         (((unsigned __int8)HexDigit[(unsigned __int64)a2 >> 4] | ((unsigned __int8)HexDigit[a2 & 0xF] << 8)) << 16) | 0x515Fu);
  if ( !v3 )
  {
    v4 = -1073741772;
LABEL_5:
    ACPIEcCompleteQueryMethod(0LL, v4, 0LL, a1);
    return v4;
  }
  v4 = AMLIAsyncEvalObject(v3, 0LL, 0, 0LL, ACPIEcCompleteQueryMethod, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v3);
  if ( v4 != 259 )
    goto LABEL_5;
  return v4;
}
