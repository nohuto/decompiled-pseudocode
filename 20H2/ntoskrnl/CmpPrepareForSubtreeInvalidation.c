/*
 * XREFs of CmpPrepareForSubtreeInvalidation @ 0x14076E954
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x140878C30 (CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1406A3680 (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidation(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+24h] [rbp-24h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0;
  v3 = 0;
  v6 = a2;
  CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpPrepareForSubtreeInvalidationWorker, (__int64)&v3);
  result = (unsigned int)v3;
  if ( v3 >= 0 )
  {
    if ( (_DWORD)v4 )
      return 3221225761LL;
    else
      return HIDWORD(v4) != 0 ? 0xC000022D : 0;
  }
  return result;
}
