/*
 * XREFs of sub_180062BD0 @ 0x180062BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800089F0 @ 0x1800089F0 (sub_1800089F0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800699BC @ 0x1800699BC (sub_1800699BC.c)
 */

__int64 __fastcall sub_180062BD0(void *a1, __int64 a2, BOOL *a3)
{
  BOOL v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+6Ch] [rbp-2Ch]

  if ( a3 )
  {
    v8 = sub_1800089F0(a1, 0LL, 0LL, &v11, (__int64)&v12, 0LL);
    if ( v8 >= 0 )
    {
      v5 = (int)sub_1800699BC(v7, v12, v11, a2) >= 0;
      v6 = 0;
    }
    else
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
      {
        v16 = 0;
        v14 = &v11;
        v11 = v8;
        v15 = 4;
        sub_18002E278(v9, (unsigned __int8 *)dword_18009A83D, 0LL, 0LL, 3u, &v13);
      }
      v5 = 0;
      v6 = v8 | 0x10000000;
    }
  }
  else
  {
    v5 = 0;
    v6 = -2147024809;
  }
  *a3 = v5;
  return v6;
}
