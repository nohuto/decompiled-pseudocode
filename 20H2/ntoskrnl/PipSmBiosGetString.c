/*
 * XREFs of PipSmBiosGetString @ 0x140A5BD50
 * Callers:
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 * Callees:
 *     strchr @ 0x1403D2D80 (strchr.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PipSmBiosGetString(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        int a4,
        UNICODE_STRING *DestinationString)
{
  unsigned int v5; // r10d
  char *v6; // rcx
  unsigned __int64 v7; // r8
  int v8; // edx
  char v9; // al
  unsigned __int16 v10; // bx
  char *v11; // rdi
  char v12; // al
  bool v14; // zf
  ANSI_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  SourceString = 0LL;
  if ( !a2 )
    return -1073741275;
  v6 = (char *)(*(unsigned __int8 *)(a1 + 1) + a1);
  v7 = a3 + (unsigned int)(a4 - 1);
  v8 = 1;
  if ( v5 > 1 )
  {
    v9 = *v6;
    while ( !v9 )
    {
LABEL_7:
      if ( !++v6 )
        return -1073741275;
      v9 = *v6;
      if ( !*v6 )
      {
        v6 = 0LL;
        goto LABEL_10;
      }
      if ( ++v8 >= v5 )
        goto LABEL_10;
    }
    while ( (unsigned __int64)++v6 < v7 )
    {
      if ( !*v6 )
        goto LABEL_7;
    }
    return -1073741275;
  }
LABEL_10:
  if ( !v6 )
    return -1073741275;
  v10 = 0;
  SourceString.Buffer = v6;
  SourceString.Length = 0;
  v11 = v6;
  while ( *v6 )
  {
    ++v10;
    ++v6;
    SourceString.Length = v10;
    if ( (unsigned __int64)v6 >= v7 || v10 > 0x40u )
      return -1073741275;
  }
  if ( v6 == (char *)-1LL )
    return -1073741275;
  v12 = *v11;
  if ( *v11 )
  {
    do
    {
      if ( !strchr(" \t\r", v12) )
        break;
      ++v11;
      SourceString.Length = --v10;
      v12 = *v11;
    }
    while ( *v11 );
    SourceString.Buffer = v11;
  }
  if ( v10 )
  {
    do
    {
      if ( !strchr(" \t\r", v11[v10 - 1]) )
        break;
      v14 = v10-- == 1;
      SourceString.Length = v10;
    }
    while ( !v14 );
  }
  SourceString.MaximumLength = v10 + 1;
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
}
