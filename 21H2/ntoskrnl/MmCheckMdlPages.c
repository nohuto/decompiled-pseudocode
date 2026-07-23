/*
 * XREFs of MmCheckMdlPages @ 0x1409C6D9C
 * Callers:
 *     ViMmMapLockedPagesSanityChecks @ 0x1409E8588 (ViMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMdlPages(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // rbx
  __int16 v2; // r14
  ULONG_PTR v3; // rbp
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // rdi
  __int64 result; // rax

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 48);
  v2 = *(_WORD *)(BugCheckParameter2 + 10) & 0x800;
  v3 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v5 = BugCheckParameter2 + 48 + 8 * v3;
  do
  {
    v6 = *v1;
    result = MiIsPfn(*v1);
    if ( v2 )
    {
      if ( (_DWORD)result != 1 )
        goto LABEL_8;
    }
    else if ( !(_DWORD)result )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0x89uLL, BugCheckParameter2, (ULONG_PTR)v1, v6);
      v6 = *v1;
    }
    result = 0xFFFFFA8000000020uLL;
    if ( !*(_WORD *)(48 * v6 - 0x57FFFFFFFE0LL) )
      result = VerifierBugCheckIfAppropriate(0xC4u, 0x85uLL, BugCheckParameter2, v3, (__int64)(48 * v6) / 48);
LABEL_8:
    ++v1;
  }
  while ( (unsigned __int64)v1 < v5 );
  return result;
}
