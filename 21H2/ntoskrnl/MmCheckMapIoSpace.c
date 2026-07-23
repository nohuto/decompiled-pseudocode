/*
 * XREFs of MmCheckMapIoSpace @ 0x1409C6EA8
 * Callers:
 *     VerifierMmMapIoSpace @ 0x1409E79A0 (VerifierMmMapIoSpace.c)
 * Callees:
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
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
    if ( (_DWORD)result == 1 )
    {
      result = 0xFFFFFA8000000020uLL;
      if ( !*(_WORD *)(v6 - 0x57FFFFFFFE0LL) )
        result = VerifierBugCheckIfAppropriate(0xC4u, 0x83uLL, BugCheckParameter2, BugCheckParameter3, v6 / 48);
    }
    v6 += 48LL;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
