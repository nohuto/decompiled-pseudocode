/*
 * XREFs of _RtlpSetPrivilege@8 @ 0x4B355FFE
 * Callers:
 *     _RtlpVerifyAndCommitUILanguageSettings@4 @ 0x4B356030 (_RtlpVerifyAndCommitUILanguageSettings@4.c)
 * Callees:
 *     _RtlAdjustPrivilege@16 @ 0x4B2E6D40 (_RtlAdjustPrivilege@16.c)
 */

int __fastcall RtlpSetPrivilege(int a1)
{
  int result; // eax
  bool v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  result = RtlAdjustPrivilege(19, 1, 1, &v2);
  if ( result == -1073741700 )
    return RtlAdjustPrivilege(19, 1, 0, &v2);
  return result;
}
