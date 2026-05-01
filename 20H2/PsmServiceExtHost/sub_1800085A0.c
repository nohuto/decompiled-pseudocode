/*
 * XREFs of sub_1800085A0 @ 0x1800085A0
 * Callers:
 *     sub_1800082C0 @ 0x1800082C0 (sub_1800082C0.c)
 *     sub_180008408 @ 0x180008408 (sub_180008408.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800085A0(unsigned __int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  if ( a1 >= *(_QWORD *)(a2 + 48) )
  {
    *(_DWORD *)(a2 + 64) = v2 & 0xFFFFFFF7;
  }
  else
  {
    v3 = (unsigned int)(*(_DWORD *)(a2 + 48) - a1);
    *(_DWORD *)(a2 + 64) = v2 | 8;
    v5 = -10000 * v3;
    return TpSetTimer(*(_QWORD *)(a2 + 56), &v5, 0LL, 0LL);
  }
  return result;
}
