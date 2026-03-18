/*
 * XREFs of RIMSetTestModeStatus @ 0x1C01555E0
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1C0157390 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1C004E4F0 (RIMSyncWalkRimObjList.c)
 */

__int64 __fastcall RIMSetTestModeStatus(int a1)
{
  gbTestModeOn = a1;
  if ( !a1 )
    RIMSyncWalkRimObjList(
      1,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_853903f4a8935f92af3ddbe6242dc426_::_lambda_invoker_cdecl_);
  return 0LL;
}
