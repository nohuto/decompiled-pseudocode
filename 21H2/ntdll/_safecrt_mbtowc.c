/*
 * XREFs of _safecrt_mbtowc @ 0x180098EE8
 * Callers:
 *     _woutput_s @ 0x18009A0DC (_woutput_s.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1800629A0 (RtlAnsiCharToUnicodeChar.c)
 */

__int64 __fastcall safecrt_mbtowc(_WORD *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = (int)a2;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      v5 = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&v5);
      return (unsigned int)((_DWORD)v5 - v4);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
