/*
 * XREFs of LdrpCalcAllocSize @ 0x1800473B4
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800468E0 (RtlGetFileMUIPath.c)
 *     RtlpCreateTraverseNodes @ 0x180047340 (RtlpCreateTraverseNodes.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF484 (RtlpAddLanguagesToMultiSZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCalcAllocSize(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // ecx

  v2 = a2 * a1;
  result = 0LL;
  if ( is_mul_ok(a2, a1) )
  {
    v4 = 0;
  }
  else
  {
    v2 = -1LL;
    v4 = -1073741675;
  }
  if ( v4 >= 0 )
    return v2;
  return result;
}
