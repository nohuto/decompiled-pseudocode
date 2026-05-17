/*
 * XREFs of _RtlIsNameLegalDOS8Dot3@12 @ 0x4B362D70
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlUpcaseUnicodeStringToCountedOemString@12 @ 0x4B34DE20 (_RtlUpcaseUnicodeStringToCountedOemString@12.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  int v3; // ecx
  POEM_STRING v4; // esi
  BOOLEAN v5; // bl
  bool v6; // cc
  char v7; // bh
  unsigned int Length; // ecx
  char *Buffer; // eax
  unsigned int v11; // edx
  char *v12; // eax
  unsigned __int8 v13; // bl
  _WORD v14[2]; // [esp+Ch] [ebp-24h] BYREF
  char *v15; // [esp+10h] [ebp-20h]
  char *v16; // [esp+14h] [ebp-1Ch]
  unsigned int v17; // [esp+18h] [ebp-18h]
  char v18; // [esp+1Fh] [ebp-11h]
  char v19; // [esp+20h] [ebp-10h] BYREF

  v4 = OemName;
  v5 = 0;
  v6 = Name->Length <= 0x18u;
  v7 = 0;
  v18 = 0;
  if ( !v6 )
    return 0;
  if ( !OemName )
  {
    v15 = &v19;
    v4 = (POEM_STRING)v14;
    v14[0] = 0;
    v3 = 12;
    v14[1] = 12;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString((void *)v3, &v4->Length, &Name->Length, 0) < 0 )
    return 0;
  Length = v4->Length;
  if ( (_WORD)Length == 1 && *v4->Buffer == 46 || Length == 2 && (Buffer = v4->Buffer, *Buffer == 46) && Buffer[1] == 46 )
  {
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  v17 = v4->Length;
  v11 = 0;
  if ( Length )
  {
    v12 = v4->Buffer;
    v16 = v12;
    do
    {
      v13 = v12[v11];
      if ( NlsMbOemCodePageTag && (Length = v17, NlsOemLeadByteInfoTable[v13]) )
      {
        if ( !v7 && v11 >= 7 || v11 == v17 - 1 )
          return 0;
        ++v11;
      }
      else
      {
        if ( v13 < 0x80u )
        {
          if ( ((1 << (v13 & 0x1F)) & RtlFatIllegalTable[v13 >> 5]) != 0 )
            return 0;
          Length = v17;
          v12 = v16;
        }
        if ( v13 == 32 )
          v18 = 1;
        if ( v13 == 46 )
        {
          if ( v7 || !v11 || v12[v11 - 1] == 32 || Length - v11 - 1 > 3 )
            return 0;
          v7 = 1;
        }
        if ( v11 >= 8 && !v7 )
          return 0;
      }
      v12 = v16;
      ++v11;
    }
    while ( v11 < Length );
    if ( v13 != 32 && v13 != 46 )
    {
      v5 = v18;
      goto LABEL_38;
    }
    return 0;
  }
LABEL_38:
  if ( NameContainsSpaces )
    *NameContainsSpaces = v5;
  return 1;
}
