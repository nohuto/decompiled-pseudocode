/*
 * XREFs of RtlInitNlsTables @ 0x1407B6B54
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1407B6BC0 (RtlInitCodePageTable.c)
 */

void __fastcall RtlInitNlsTables(USHORT *a1, USHORT *a2, __int64 a3)
{
  unsigned __int16 v5; // cx

  RtlInitCodePageTable(a1, &CodePageTable);
  RtlInitCodePageTable(a2, &InitTableInfo);
  if ( a3 )
  {
    v5 = *(_WORD *)(a3 + 2) + 1;
    *(_QWORD *)&xmmword_140D55930 = a3 + 4;
    *((_QWORD *)&xmmword_140D55930 + 1) = a3 + 2 * (v5 + 1LL);
  }
  else
  {
    xmmword_140D55930 = 0LL;
  }
}
