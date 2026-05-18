/*
 * XREFs of sub_18000E8F0 @ 0x18000E8F0
 * Callers:
 *     sub_18000C250 @ 0x18000C250 (sub_18000C250.c)
 *     sub_18011FBE2 @ 0x18011FBE2 (sub_18011FBE2.c)
 *     sub_18011FCB6 @ 0x18011FCB6 (sub_18011FCB6.c)
 *     sub_18011FD8F @ 0x18011FD8F (sub_18011FD8F.c)
 *     sub_18011FDE0 @ 0x18011FDE0 (sub_18011FDE0.c)
 * Callees:
 *     vsnprintf @ 0x18011F7A4 (vsnprintf.c)
 */

__int64 sub_18000E8F0(char *Buffer, __int64 a2, const char *a3, ...)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+68h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *(_WORD *)Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnprintf(Buffer, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      *(_WORD *)&Buffer[2 * v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      *(_WORD *)&Buffer[2 * v5] = 0;
    }
  }
  return (unsigned int)v4;
}
