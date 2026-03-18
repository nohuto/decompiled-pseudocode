/*
 * XREFs of ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0021FFC
 * Callers:
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01722D0 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCchCopyStringN(struct _UNICODE_STRING *a1, char *a2, unsigned __int64 a3)
{
  unsigned __int16 Length; // bx
  __int16 v4; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v7; // r10
  int v8; // r9d
  unsigned __int64 MaximumLength; // r11
  __int16 v10; // cx
  signed __int64 v11; // rsi

  Length = a1->Length;
  v4 = 0;
  Buffer = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( (a1->Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > (unsigned __int16)MaximumLength || (_WORD)MaximumLength == 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( !a1->Buffer && (Length || (_WORD)MaximumLength) )
    {
      v8 = -1073741811;
    }
    else
    {
      Buffer = a1->Buffer;
      v7 = MaximumLength >> 1;
    }
    if ( v8 >= 0 )
    {
      if ( a3 > 0x7FFF )
      {
        v8 = -1073741811;
      }
      else
      {
        v8 = 0;
        v10 = 0;
        if ( !v7 )
          goto LABEL_29;
        v11 = (char *)Buffer - a2;
        do
        {
          if ( !a3 )
            break;
          if ( !*(_WORD *)a2 )
            break;
          *(_WORD *)&a2[v11] = *(_WORD *)a2;
          --a3;
          a2 += 2;
          ++v10;
          --v7;
        }
        while ( v7 );
        if ( !v7 )
        {
LABEL_29:
          if ( a3 && *(_WORD *)a2 )
            v8 = -2147483643;
        }
        v4 = v10;
      }
      a1->Length = 2 * v4;
    }
  }
  return (unsigned int)v8;
}
