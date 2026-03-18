/*
 * XREFs of RtlSizeOfRetpolineRelocationEntry @ 0x1403298B0
 * Callers:
 *     RtlValidateRetpolineRelocation @ 0x1403294B0 (RtlValidateRetpolineRelocation.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14032958C (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x140329808 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineRelocationEntry(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  if ( (unsigned __int64)(v1 - 1) < 2 )
    return 2LL;
  return 0xFFFFFFFFLL;
}
