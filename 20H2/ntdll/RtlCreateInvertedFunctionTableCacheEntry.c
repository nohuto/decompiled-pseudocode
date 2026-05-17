/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0D44
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180070DF4 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(
        unsigned __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v5; // edi
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( a1 < *((_QWORD *)&xmmword_180181510 + 1)
    || a1 >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
  {
    v7 = RtlpxLookupFunctionTable(a1, (signed __int64)&v13, a3, a4);
  }
  else
  {
    v7 = xmmword_180181510;
    v13 = xmmword_180181510;
    v14 = qword_180181520;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v13 + 1);
    v5 = HIDWORD(v14);
  }
  else
  {
    v8 = v15;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_180181510 = v7;
  HIDWORD(qword_180181520) = v5;
  *((_QWORD *)&xmmword_180181510 + 1) = v8;
  LODWORD(qword_180181520) = a2;
  RtlRemoveInvertedFunctionTable(a1, v9, v10, v11);
  return LdrProtectMrdata(1);
}
