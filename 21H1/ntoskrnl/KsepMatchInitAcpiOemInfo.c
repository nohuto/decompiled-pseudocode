/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140A6652C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A65FE0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402F8740 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407A9850 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140C53ED8 = 0LL;
  qword_140C53EE8 = 0xFFFFFFFFLL;
  xmmword_140C54118 = 0LL;
  HIDWORD(xmmword_140C53ED8) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C54118) = -1;
  xmmword_140C53EB8 = 0LL;
  qword_140C54128 = 0LL;
  xmmword_140C53EC8 = 0LL;
  xmmword_140C540F8 = 0LL;
  xmmword_140C54108 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140CF2760, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140CF2538, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140CF2528, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C53EB8 = word_140CF2760;
          *((_QWORD *)&xmmword_140C53EB8 + 1) = word_140CF2528;
          HIDWORD(xmmword_140C53ED8) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C53EE8) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C540F8 = word_140CF2760;
          *((_QWORD *)&xmmword_140C540F8 + 1) = word_140CF2538;
          HIDWORD(xmmword_140C54118) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
