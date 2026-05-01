/*
 * XREFs of sub_18003EAB8 @ 0x18003EAB8
 * Callers:
 *     sub_18003EB10 @ 0x18003EB10 (sub_18003EB10.c)
 * Callees:
 *     sub_18003E850 @ 0x18003E850 (sub_18003E850.c)
 */

__int64 __fastcall sub_18003EAB8(__int64 a1, __int64 a2, bool *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  *a3 = 0;
  v4 = CapabilityCheck(a1, L"gameList", &v9);
  if ( v4 < 0 )
    return sub_18003E850(retaddr, v5, v6, (unsigned int)v4);
  *a3 = (_BYTE)v9 != 0;
  return 0LL;
}
