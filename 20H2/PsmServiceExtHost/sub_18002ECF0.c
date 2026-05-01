/*
 * XREFs of sub_18002ECF0 @ 0x18002ECF0
 * Callers:
 *     sub_180030800 @ 0x180030800 (sub_180030800.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002ECF0(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 136) )
  {
    result = RtlQueryUnbiasedInterruptTime(&v7);
    v5 = v7;
    v6 = v7 - *(_QWORD *)(a1 + 168);
    if ( a2 && (a2 != 2 || (result = *(unsigned int *)(a1 + 88), *(_DWORD *)(a1 + 92) == (_DWORD)result)) )
      *(_QWORD *)(a1 + 176) += v6;
    else
      *(_QWORD *)(a1 + 184) += v6;
    *(_QWORD *)(a1 + 168) = v5;
  }
  return result;
}
