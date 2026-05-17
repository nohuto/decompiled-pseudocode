/*
 * XREFs of RtlpSanitizeContext @ 0x180051C58
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlDispatchException @ 0x180051210 (RtlDispatchException.c)
 *     RtlpVirtualUnwind @ 0x180051AF8 (RtlpVirtualUnwind.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x180051D10 (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContext(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 result; // rax
  int v5; // r8d
  unsigned int v6; // r10d
  unsigned int v7; // r9d
  int v8; // ecx

  v2 = a1 + 12;
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(a1 + 12, a2);
  if ( (int)result < 0 )
  {
    *v2 = 1048587;
  }
  else
  {
    result = *v2 & 0x100040;
    if ( (_DWORD)result == 1048640 )
    {
      result = (unsigned int)a1[308];
      v5 = a1[312];
      if ( (int)result > v5
        || (v6 = a1[309], v7 = a1[313], v8 = v6 + result, result = v7 + v5, v8 < (int)result)
        || v6 < 0x528
        || a1[311] != 1232
        || v7 < 0x40
        || (result = (int)a1[310], (_DWORD *)((char *)a1 + result + 1232) != a1) )
      {
        *v2 &= ~0x40u;
      }
    }
  }
  return result;
}
