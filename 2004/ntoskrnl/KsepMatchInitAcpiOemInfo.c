/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140A65F0C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A659C0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140335770 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407AC9B0 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140C53DD8 = 0LL;
  qword_140C53DE8 = 0xFFFFFFFFLL;
  xmmword_140C54018 = 0LL;
  HIDWORD(xmmword_140C53DD8) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C54018) = -1;
  xmmword_140C53DB8 = 0LL;
  qword_140C54028 = 0LL;
  xmmword_140C53DC8 = 0LL;
  xmmword_140C53FF8 = 0LL;
  xmmword_140C54008 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140CF2620, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140CF23F8, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140CF23E8, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C53DB8 = word_140CF2620;
          *((_QWORD *)&xmmword_140C53DB8 + 1) = word_140CF23E8;
          HIDWORD(xmmword_140C53DD8) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C53DE8) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C53FF8 = word_140CF2620;
          *((_QWORD *)&xmmword_140C53FF8 + 1) = word_140CF23F8;
          HIDWORD(xmmword_140C54018) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
