/*
 * XREFs of sub_1C00447AC @ 0x1C00447AC
 * Callers:
 *     sub_1C0044D14 @ 0x1C0044D14 (sub_1C0044D14.c)
 *     sub_1C00450B4 @ 0x1C00450B4 (sub_1C00450B4.c)
 *     sub_1C00466CC @ 0x1C00466CC (sub_1C00466CC.c)
 *     sub_1C0052440 @ 0x1C0052440 (sub_1C0052440.c)
 *     NetpGetPrivilege @ 0x1C0057A60 (NetpGetPrivilege.c)
 *     sub_1C005A350 @ 0x1C005A350 (sub_1C005A350.c)
 *     sub_1C005A640 @ 0x1C005A640 (sub_1C005A640.c)
 *     sub_1C005B07C @ 0x1C005B07C (sub_1C005B07C.c)
 *     sub_1C005B28C @ 0x1C005B28C (sub_1C005B28C.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C00447AC(wchar_t *Dest, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *Dest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(Dest, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Dest[v6] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v7 == v6 )
    {
      Dest[v6] = 0;
    }
  }
  return (unsigned int)v5;
}
