/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x180062454
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x180062020 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180062370 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB370 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB5B0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800627AC (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int16 *v4; // r8
  int v5; // r9d
  unsigned int v6; // r11d
  unsigned int v7; // ecx
  unsigned int v9; // r10d
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf

  v2 = a1;
  LOBYTE(a1) = 1;
  if ( !(unsigned __int8)RtlpIsUtf8Process(a1, a2, v2) )
  {
    v6 = *v4;
    if ( NlsMbOemCodePageTag )
    {
      v9 = 0;
      v10 = 0;
      if ( !*v4 )
        return v5;
      v11 = *((_QWORD *)v4 + 1);
      while ( 1 )
      {
        v12 = *(unsigned __int8 *)(v9 + v11);
        if ( NlsOemLeadByteInfoTable[v12] && (v13 = v9 + 1, (unsigned int)v13 < v6) )
        {
          ++v9;
          v14 = ((char)v12 << 8) + *(unsigned __int8 *)(v13 + v11) == OemDefaultChar;
        }
        else
        {
          v14 = (char)v12 == (unsigned __int8)OemDefaultChar;
        }
        if ( v14 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v10) != OemTransUniDefaultChar )
          break;
        v9 += v5;
        v10 += v5;
        if ( v9 >= v6 )
          return v5;
      }
      goto LABEL_8;
    }
    v7 = 0;
    if ( *v4 )
    {
      while ( *(char *)(v7 + *((_QWORD *)v4 + 1)) != (unsigned __int8)OemDefaultChar
           || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v7) == OemTransUniDefaultChar )
      {
        v7 += v5;
        if ( v7 >= v6 )
          return v5;
      }
LABEL_8:
      LOBYTE(v5) = 0;
    }
  }
  return v5;
}
