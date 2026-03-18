/*
 * XREFs of MmCheckMapIoSpace @ 0x140A815FC
 * Callers:
 *     VerifierMmMapIoSpace @ 0x140A9FE70 (VerifierMmMapIoSpace.c)
 * Callees:
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMapIoSpace(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rbp
  signed __int64 v6; // rsi
  __int64 result; // rax

  v2 = BugCheckParameter2 >> 12;
  v3 = ((BugCheckParameter2 & 0xFFF) + BugCheckParameter3 + 4095) >> 12;
  v6 = 48 * (BugCheckParameter2 >> 12);
  do
  {
    result = MiIsPfn(v2);
    if ( (_DWORD)result )
    {
      result = 0xFFFFDE0000000020uLL;
      if ( !*(_WORD *)(v6 - 0x21FFFFFFFFE0LL) )
        result = VerifierBugCheckIfAppropriate(
                   0xC4u,
                   0x83uLL,
                   BugCheckParameter2,
                   BugCheckParameter3,
                   0xAAAAAAAAAAAAAAABuLL * (v6 >> 4));
    }
    v6 += 48LL;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
