/*
 * XREFs of sub_1800A046C @ 0x1800A046C
 * Callers:
 *     sub_18006FF60 @ 0x18006FF60 (sub_18006FF60.c)
 * Callees:
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800A046C(__int64 a1, int a2, int a3, __int64 a4)
{
  int v7; // r8d
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 *v11; // r10
  unsigned int v12; // r9d
  unsigned int v13; // r11d
  size_t Size; // [rsp+40h] [rbp-428h]
  __int64 v16[128]; // [rsp+50h] [rbp-418h] BYREF

  if ( a2 == 1 )
  {
    v7 = -8355712;
    goto LABEL_11;
  }
  if ( a2 == 2 )
  {
    v7 = -16777216;
    goto LABEL_11;
  }
  if ( a2 <= 2 )
    goto LABEL_8;
  if ( a2 <= 4 )
  {
    v7 = -65305;
    goto LABEL_11;
  }
  if ( a2 != 5 )
  {
LABEL_8:
    v7 = -1;
    goto LABEL_11;
  }
  v7 = -8421377;
LABEL_11:
  v8 = 0xFFFFFF - v7;
  if ( a2 == 4 )
  {
    v9 = v8 | 0xFFFFFF;
  }
  else if ( a2 == 5 )
  {
    v9 = -7372801;
  }
  else
  {
    v9 = v8 | 0xFF000000;
  }
  v10 = 0;
  v11 = v16;
  do
  {
    v12 = (v10 & 0xF) + 1;
    v13 = v7;
    if ( (v10 >> 4) + 1 <= 8 )
    {
      if ( v12 <= 8 )
        goto LABEL_22;
LABEL_21:
      v13 = v9;
      goto LABEL_22;
    }
    if ( v12 <= 8 )
      goto LABEL_21;
LABEL_22:
    *(_DWORD *)v11 = v13;
    ++v10;
    v11 = (__int64 *)((char *)v11 + 4);
  }
  while ( v10 < 0x100 );
  LODWORD(Size) = 1024;
  return sub_18009FAA4(a1, 16, 16, 0, 16, 0, a3, v16, Size, a4);
}
