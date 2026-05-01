/*
 * XREFs of sub_18006D9C8 @ 0x18006D9C8
 * Callers:
 *     sub_18006DF4C @ 0x18006DF4C (sub_18006DF4C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18006D9C8(__int64 a1, __int64 a2))()
{
  __int64 (__fastcall *result)(); // rax
  int v3; // ebx
  __int64 (__fastcall **v4)(); // r14
  unsigned int i; // ebp
  int v8; // edi
  unsigned int v9; // ebp
  __int64 (__fastcall **v10)(); // r14
  int v11; // edi
  int v12; // r15d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64 (__fastcall *)())&retaddr;
  v3 = 0;
  v4 = off_180093EB0;
  for ( i = 0; i < 5; ++i )
  {
    v8 = 1 << i;
    if ( *((_BYTE *)v4 + 33) )
      goto LABEL_11;
    result = *v4;
    if ( !*v4 )
      goto LABEL_10;
    if ( *((_BYTE *)v4 + 32) )
    {
      if ( (v8 & *(_DWORD *)(a1 + 128)) == 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    result = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64))result)(a1, a2);
    if ( (int)result >= 0 && (_DWORD)result != 255 )
    {
      *(_DWORD *)(a2 + 160) |= v8;
LABEL_10:
      v3 |= v8;
    }
LABEL_11:
    v4 += 5;
  }
  v9 = 0;
  v10 = &off_180093EC8;
  do
  {
    v11 = 1 << v9;
    if ( ((1 << v9) & v3) != 0 )
    {
      result = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64))*(v10 - 2))(a1, a2);
      if ( (_DWORD)result == 255 )
      {
        v3 &= ~v11;
      }
      else if ( (int)result < 0 )
      {
        v12 = ~v11;
        if ( (v11 & *(_DWORD *)(a2 + 160)) != 0 )
        {
          result = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64))*v10)(a1, a2);
          *(_DWORD *)(a2 + 160) &= v12;
        }
        v3 &= v12;
      }
    }
    ++v9;
    v10 += 5;
  }
  while ( v9 < 5 );
  *(_DWORD *)(a2 + 164) = v3;
  return result;
}
