/*
 * XREFs of sub_1800224D0 @ 0x1800224D0
 * Callers:
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800224D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  result = 0x2000000000000LL;
  v3 = *(_QWORD *)(a1 + 648);
  if ( (v3 & 0x2000000000000LL) != 0 )
  {
    result = a1 + 600;
    if ( *(_QWORD *)result == result )
    {
      result = *(unsigned int *)(a1 + 832);
      if ( (_DWORD)result != -1 && (v3 & 0x4000000000000LL) == 0 )
      {
        *(_QWORD *)(a1 + 648) = v3 | 0x4000000000000LL;
        v4 = -10000 * result;
        return TpSetTimer(*(_QWORD *)(a1 + 824), &v4, 0LL, 5000LL);
      }
    }
  }
  return result;
}
