/*
 * XREFs of RtlLookupFunctionTable @ 0x1403C536C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140A1E354 (CcInitializeBcbProfiler.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140228D50 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( a1 < *(&xmmword_140E00020 + 1) || a1 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
  {
    result = RtlpxLookupFunctionTable(a1, (unsigned __int64)&v6, (__int64)a3, *(&xmmword_140E00020 + 1));
  }
  else
  {
    result = (PVOID)xmmword_140E00020;
    v6 = *(_OWORD *)&xmmword_140E00020;
    v7 = qword_140E00030;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
