/*
 * XREFs of sub_18001C2F4 @ 0x18001C2F4
 * Callers:
 *     sub_18001B4B8 @ 0x18001B4B8 (sub_18001B4B8.c)
 *     sub_18001BBB4 @ 0x18001BBB4 (sub_18001BBB4.c)
 *     sub_18001BCF4 @ 0x18001BCF4 (sub_18001BCF4.c)
 *     sub_18001CC40 @ 0x18001CC40 (sub_18001CC40.c)
 *     sub_18001FBE4 @ 0x18001FBE4 (sub_18001FBE4.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 */

char __fastcall sub_18001C2F4(__int16 *a1, unsigned __int16 **a2, unsigned __int64 a3)
{
  char v3; // al
  unsigned __int16 *v5; // r8
  unsigned __int16 *v8; // rbp
  unsigned __int16 v9; // si
  unsigned __int16 *v10; // rsi
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rsi
  unsigned __int16 *v13; // rcx
  char result; // al

  v3 = *((_BYTE *)a1 + 2);
  v5 = *a2;
  if ( v3 == 1 )
  {
    v8 = v5 + 1;
    if ( (unsigned __int64)(v5 + 1) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v5;
    if ( v5 )
    {
      v9 = *v5;
    }
    else
    {
      v9 = 0;
      *(_DWORD *)o__errno(a1, a2) = 22;
      o__invalid_parameter_noinfo();
    }
    v5 = v8;
    *((_DWORD *)a1 + 1) = v9;
  }
  else if ( v3 == 2 )
  {
    v10 = v5 + 2;
    if ( (unsigned __int64)(v5 + 2) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v5;
    sub_18000F088(a1 + 2, 4uLL, v5, 4uLL);
    v5 = v10;
  }
  v11 = *a1;
  a1[4] = *a1;
  if ( v11 )
    goto LABEL_13;
  v12 = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > a3 )
    return 0;
  sub_18000F088(a1 + 4, 2uLL, v5, 2uLL);
  v11 = a1[4];
  v5 = v12;
LABEL_13:
  v13 = (unsigned __int16 *)((char *)v5 + v11);
  if ( (unsigned __int64)v13 > a3 )
    return 0;
  *((_QWORD *)a1 + 3) = v5;
  result = 1;
  *a2 = v13;
  return result;
}
