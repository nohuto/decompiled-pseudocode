/*
 * XREFs of sub_18000FAC0 @ 0x18000FAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800032C0 @ 0x1800032C0 (sub_1800032C0.c)
 */

__int64 __fastcall sub_18000FAC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 48) = a3;
  if ( !SetEvent(*(HANDLE *)(a1 + 56)) )
  {
    sub_1800032C0(retaddr, 2332, v3, v4);
    JUMPOUT(0x18000FAF3LL);
  }
  return 0LL;
}
