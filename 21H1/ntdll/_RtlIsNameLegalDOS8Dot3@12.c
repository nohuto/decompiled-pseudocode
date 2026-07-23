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
  POEM_STRING v3; // esi
  BOOLEAN v4; // bl
  bool v5; // cc
  char v6; // bh
  unsigned int Length; // ecx
  char *Buffer; // eax
  unsigned int v10; // edx
  char *v11; // eax
  unsigned __int8 v12; // bl
  _WORD v13[2]; // [esp+Ch] [ebp-24h] BYREF
  char *v14; // [esp+10h] [ebp-20h]
  char *v15; // [esp+14h] [ebp-1Ch]
  unsigned int v16; // [esp+18h] [ebp-18h]
  char v17; // [esp+1Fh] [ebp-11h]
  char v18; // [esp+20h] [ebp-10h] BYREF

  v3 = OemName;
  v4 = 0;
  v5 = Name->Length <= 0x18u;
  v6 = 0;
  v17 = 0;
  if ( !v5 )
    return 0;
  if ( !OemName )
  {
    v14 = &v18;
    v3 = (POEM_STRING)v13;
    v13[0] = 0;
    v13[1] = 12;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(v3, Name, 0) < 0 )
    return 0;
  Length = v3->Length;
  if ( (_WORD)Length == 1 && *v3->Buffer == 46 || Length == 2 && (Buffer = v3->Buffer, *Buffer == 46) && Buffer[1] == 46 )
  {
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  v16 = v3->Length;
  v10 = 0;
  if ( Length )
  {
    v11 = v3->Buffer;
    v15 = v11;
    do
    {
      v12 = v11[v10];
      if ( NlsMbOemCodePageTag && (Length = v16, NlsOemLeadByteInfoTable[v12]) )
      {
        if ( !v6 && v10 >= 7 || v10 == v16 - 1 )
          return 0;
        ++v10;
      }
      else
      {
        if ( v12 < 0x80u )
        {
          if ( ((1 << (v12 & 0x1F)) & RtlFatIllegalTable[v12 >> 5]) != 0 )
            return 0;
          Length = v16;
          v11 = v15;
        }
        if ( v12 == 32 )
          v17 = 1;
        if ( v12 == 46 )
        {
          if ( v6 || !v10 || v11[v10 - 1] == 32 || Length - v10 - 1 > 3 )
            return 0;
          v6 = 1;
        }
        if ( v10 >= 8 && !v6 )
          return 0;
      }
      v11 = v15;
      ++v10;
    }
    while ( v10 < Length );
    if ( v12 != 32 && v12 != 46 )
    {
      v4 = v17;
      goto LABEL_38;
    }
    return 0;
  }
LABEL_38:
  if ( NameContainsSpaces )
    *NameContainsSpaces = v4;
  return 1;
}
