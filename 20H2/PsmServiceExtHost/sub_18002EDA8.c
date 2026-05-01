/*
 * XREFs of sub_18002EDA8 @ 0x18002EDA8
 * Callers:
 *     sub_18002EE08 @ 0x18002EE08 (sub_18002EE08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002EDA8(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 136);
  if ( !v1 )
  {
    RtlQueryUnbiasedInterruptTime(a1 + 168);
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_QWORD *)(a1 + 192) = MEMORY[0x7FFE0008];
    v1 = *(_DWORD *)(a1 + 136);
  }
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 136) = result;
  return result;
}
