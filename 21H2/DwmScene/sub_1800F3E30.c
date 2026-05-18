/*
 * XREFs of sub_1800F3E30 @ 0x1800F3E30
 * Callers:
 *     sub_1800F5E58 @ 0x1800F5E58 (sub_1800F5E58.c)
 * Callees:
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 */

__int64 __fastcall sub_1800F3E30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1800F558C(a1, a2, 5LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
