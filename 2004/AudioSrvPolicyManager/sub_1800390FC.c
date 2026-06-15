/*
 * XREFs of sub_1800390FC @ 0x1800390FC
 * Callers:
 *     sub_180038B40 @ 0x180038B40 (sub_180038B40.c)
 *     sub_180038D50 @ 0x180038D50 (sub_180038D50.c)
 *     sub_180038F40 @ 0x180038F40 (sub_180038F40.c)
 * Callees:
 *     sub_18003764C @ 0x18003764C (sub_18003764C.c)
 *     _o__get_errno @ 0x18003A72E (_o__get_errno.c)
 *     _o__set_errno @ 0x18003A784 (_o__set_errno.c)
 *     vsnprintf @ 0x18003A7E4 (vsnprintf.c)
 */

__int64 sub_1800390FC(__int64 a1, const char *a2, ...)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // r15
  signed int v6; // ebx
  __int64 v7; // rsi
  char *v8; // r14
  size_t v9; // rsi
  int v10; // eax
  bool v11; // zf
  bool v12; // al
  unsigned __int64 v13; // rcx
  _DWORD v15[22]; // [rsp+20h] [rbp-58h] BYREF
  va_list ArgList; // [rsp+90h] [rbp+18h] BYREF

  va_start(ArgList, a2);
  v3 = -1LL;
  v5 = 32LL;
  while ( 1 )
  {
    v6 = sub_18003764C(a1, v5);
    if ( v6 < 0 )
      break;
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(char **)a1;
    o__set_errno(0LL);
    v6 = 0;
    if ( (unsigned __int64)(v7 - 1) > 0x7FFFFFFE )
      v6 = -2147024809;
    if ( v6 < 0 )
    {
      if ( v7 )
        *(_WORD *)v8 = 0;
    }
    else
    {
      v9 = v7 - 1;
      v6 = 0;
      v10 = vsnprintf(v8, v9, a2, ArgList);
      if ( v10 < 0 || v10 > v9 )
      {
        *(_WORD *)&v8[2 * v9] = 0;
        v6 = -2147024774;
      }
      else if ( v10 == v9 )
      {
        *(_WORD *)&v8[2 * v9] = 0;
      }
    }
    v11 = v6 == -2147024774;
    if ( v6 == -2147024774 )
    {
      o__get_errno(v15);
      v6 = -2147024809;
      if ( v15[0] != 22 )
        v6 = -2147024774;
      v11 = v6 == -2147024774;
    }
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      v5 = -1LL;
      if ( v13 + 32 >= v13 )
        v5 = v13 + 32;
      v6 = v13 + 32 < v13 ? 0x80070216 : 0;
      v12 = v13 + 32 >= v13;
    }
    if ( !v12 )
    {
      if ( v6 >= 0 )
        goto LABEL_26;
      break;
    }
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = 0LL;
LABEL_26:
  *(_QWORD *)(a1 + 8) = v3;
  return (unsigned int)v6;
}
