/*
 * XREFs of _vCheckCharSet@8 @ 0xE2F02
 * Callers:
 *     vProcessEntry @ 0xE2E66 (vProcessEntry.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall vCheckCharSet(int a1, WCHAR *a2)
{
  int v3; // ebx
  WCHAR *v4; // ecx
  ULONG result; // eax
  UNICODE_STRING String; // [esp+8h] [ebp-Ch] BYREF
  ULONG Value; // [esp+10h] [ebp-4h] BYREF

  Value = 1;
  v3 = 0;
  String.Buffer = a2;
  *(_DWORD *)&String.Length = 0;
  v4 = a2 + 1;
  *(_WORD *)(a1 + 64) = 1;
  while ( *a2++ )
    ;
  String.Length = 2 * (a2 - v4);
  String.MaximumLength = String.Length;
  result = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
  if ( result || (result = Value, Value > 0xFF) )
  {
LABEL_8:
    *(_BYTE *)(a1 + 65) |= 2u;
  }
  else
  {
    *(_BYTE *)(a1 + 64) = Value;
    while ( result != charsets[v3] )
    {
      if ( (unsigned int)++v3 >= 17 )
        goto LABEL_8;
    }
  }
  return result;
}
