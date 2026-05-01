/*
 * XREFs of sub_18002C174 @ 0x18002C174
 * Callers:
 *     sub_18002C050 @ 0x18002C050 (sub_18002C050.c)
 *     sub_18004306C @ 0x18004306C (sub_18004306C.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180086478 @ 0x180086478 (sub_180086478.c)
 * Callees:
 *     <none>
 */

__int64 sub_18002C174(wchar_t *Buffer, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( v3 )
      *Buffer = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(Buffer, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
  }
  return (unsigned int)v5;
}
