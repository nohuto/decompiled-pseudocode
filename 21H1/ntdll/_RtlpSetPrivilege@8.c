/*
 * XREFs of _RtlpSetPrivilege@8 @ 0x4B355FFE
 * Callers:
 *     _RtlpVerifyAndCommitUILanguageSettings@4 @ 0x4B356030 (_RtlpVerifyAndCommitUILanguageSettings@4.c)
 * Callees:
 *     _RtlAdjustPrivilege@16 @ 0x4B2E6D40 (_RtlAdjustPrivilege@16.c)
 */

NTSTATUS __fastcall RtlpSetPrivilege(int a1)
{
  NTSTATUS result; // eax
  BOOLEAN WasEnabled; // [esp+1h] [ebp-1h] BYREF

  WasEnabled = HIBYTE(a1);
  result = RtlAdjustPrivilege(0x13u, 1u, 1u, &WasEnabled);
  if ( result == -1073741700 )
    return RtlAdjustPrivilege(0x13u, 1u, 0, &WasEnabled);
  return result;
}
