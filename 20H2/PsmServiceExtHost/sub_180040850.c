/*
 * XREFs of sub_180040850 @ 0x180040850
 * Callers:
 *     sub_180040460 @ 0x180040460 (sub_180040460.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180045808 @ 0x180045808 (sub_180045808.c)
 */

__int64 __fastcall sub_180040850(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // rcx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-48h] BYREF
  int *v10; // [rsp+60h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-20h]

  v2 = 0;
  if ( (unsigned __int8)sub_180045808() )
  {
    if ( (int)RmRpsInitialize(&v8) < 0 )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v7 = v6;
        v10 = &v7;
        v11 = 4LL;
        sub_18002E278(v5, (unsigned __int8 *)dword_18009A9E2, 0LL, 0LL, 3u, &v9);
      }
      return (unsigned int)-1073741823;
    }
    else
    {
      v3 = v8;
      *(_DWORD *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
