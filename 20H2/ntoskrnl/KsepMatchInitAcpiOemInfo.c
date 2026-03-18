/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140A6D1DC
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A6CC90 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14025EF70 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407BA8F0 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140C53E58 = 0LL;
  qword_140C53E68 = 0xFFFFFFFFLL;
  xmmword_140C54098 = 0LL;
  HIDWORD(xmmword_140C53E58) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C54098) = -1;
  xmmword_140C53E38 = 0LL;
  qword_140C540A8 = 0LL;
  xmmword_140C53E48 = 0LL;
  xmmword_140C54078 = 0LL;
  xmmword_140C54088 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140CF26E0, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140CF24B8, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140CF24A8, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C53E38 = word_140CF26E0;
          *((_QWORD *)&xmmword_140C53E38 + 1) = word_140CF24A8;
          HIDWORD(xmmword_140C53E58) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C53E68) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C54078 = word_140CF26E0;
          *((_QWORD *)&xmmword_140C54078 + 1) = word_140CF24B8;
          HIDWORD(xmmword_140C54098) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
