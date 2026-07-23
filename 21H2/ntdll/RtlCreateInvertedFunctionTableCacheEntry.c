/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AB4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180071E24 (RtlRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlCreateInvertedFunctionTableCacheEntry(unsigned __int64 BaseAddress, int a2, char *a3, char *a4)
{
  int v5; // edi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( BaseAddress < *((_QWORD *)&xmmword_180181510 + 1)
    || BaseAddress >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
  {
    v7 = RtlpxLookupFunctionTable(BaseAddress, (signed __int64)&v9, a3, a4);
  }
  else
  {
    v7 = xmmword_180181510;
    v9 = xmmword_180181510;
    v10 = qword_180181520;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v9 + 1);
    v5 = HIDWORD(v10);
  }
  else
  {
    v8 = v11;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_180181510 = v7;
  HIDWORD(qword_180181520) = v5;
  *((_QWORD *)&xmmword_180181510 + 1) = v8;
  LODWORD(qword_180181520) = a2;
  RtlRemoveInvertedFunctionTable(BaseAddress);
  LdrProtectMrdata(1);
}
