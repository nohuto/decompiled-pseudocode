/*
 * XREFs of sub_1800F759C @ 0x1800F759C
 * Callers:
 *     sub_1800F7A80 @ 0x1800F7A80 (sub_1800F7A80.c)
 *     sub_1800F7B30 @ 0x1800F7B30 (sub_1800F7B30.c)
 *     sub_1800F7BD0 @ 0x1800F7BD0 (sub_1800F7BD0.c)
 *     sub_1800F7C70 @ 0x1800F7C70 (sub_1800F7C70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F759C(__int64 a1, __int64 a2, WINBOOL *a3)
{
  PSID v3; // rsi
  PSID v4; // rbp
  unsigned int v6; // ebx

  v3 = hMem;
  v4 = SidToCheck;
  v6 = 0;
  if ( !RpcImpersonateClient(0LL) )
  {
    v6 = CheckTokenMembership(0LL, v4, a3);
    if ( v6 && !*a3 )
      v6 = CheckTokenMembership(0LL, v3, a3);
    RpcRevertToSelf();
  }
  return v6;
}
