/*
 * XREFs of sub_18003123C @ 0x18003123C
 * Callers:
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_180031128 @ 0x180031128 (sub_180031128.c)
 * Callees:
 *     sub_1800312B0 @ 0x1800312B0 (sub_1800312B0.c)
 */

__int64 __fastcall sub_18003123C(void *a1, void *a2)
{
  NTSTATUS v3; // ebx
  void *TokenHandle; // [rsp+40h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  v3 = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( v3 >= 0 )
    v3 = sub_1800312B0(TokenHandle, a2);
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)v3;
}
