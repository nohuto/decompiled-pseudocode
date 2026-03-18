/*
 * XREFs of RtlInitNlsTables @ 0x1407B9CC4
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1407B9D30 (RtlInitCodePageTable.c)
 */

void __fastcall RtlInitNlsTables(USHORT *a1, USHORT *a2, __int64 a3)
{
  unsigned __int16 v5; // cx

  RtlInitCodePageTable(a1, &CodePageTable);
  RtlInitCodePageTable(a2, &InitTableInfo);
  if ( a3 )
  {
    v5 = *(_WORD *)(a3 + 2) + 1;
    *(_QWORD *)&xmmword_140D56930 = a3 + 4;
    *((_QWORD *)&xmmword_140D56930 + 1) = a3 + 2 * (v5 + 1LL);
  }
  else
  {
    xmmword_140D56930 = 0LL;
  }
}
