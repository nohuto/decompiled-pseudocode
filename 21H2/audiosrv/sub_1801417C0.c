/*
 * XREFs of sub_1801417C0 @ 0x1801417C0
 * Callers:
 *     sub_180141778 @ 0x180141778 (sub_180141778.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801417C0(__int64 a1, __int64 a2, __int64 *a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, __int128 *, __int64, SIZE_T *, int, int *); // rax
  int v9; // eax
  char *v10; // rax
  char *v11; // rdi
  __int64 v12; // rax
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  SIZE_T cb[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+78h] [rbp-8h]
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v4 = 0;
  v19 = 0LL;
  v20 = 0;
  *(_OWORD *)cb = 0LL;
  v18 = 0LL;
  if ( a3 && a4 )
  {
    v7 = *a3;
    v15 = 1;
    v8 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, SIZE_T *, int, int *))(v7 + 24);
    v16 = 512;
    v14 = xmmword_180178F18;
    v9 = v8(a3, &v14, 24LL, cb, 40, &v20);
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( HIDWORD(cb[0]) <= 0x28 )
      return v4;
    v10 = (char *)CoTaskMemAlloc(HIDWORD(cb[0]));
    v11 = v10;
    if ( !v10 )
      return (unsigned int)-2147024882;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, char *, _DWORD, int *))(*a3 + 24))(
           a3,
           &v14,
           24LL,
           v10,
           HIDWORD(cb[0]),
           &v20);
    if ( v9 < 0 )
    {
      return (unsigned int)v9;
    }
    else
    {
      v12 = *((_QWORD *)v11 + 1) - 0x11CFBDEA97E99BA0LL;
      if ( *((_QWORD *)v11 + 1) == 0x11CFBDEA97E99BA0LL )
        v12 = *((_QWORD *)v11 + 2) - 0xC104DB28D6A5LL;
      if ( !v12
        && *((_DWORD *)v11 + 6) == 3
        && !*((_DWORD *)v11 + 7)
        && *((_DWORD *)v11 + 8)
        && !*((_DWORD *)v11 + 9)
        && *((_DWORD *)v11 + 1) >= 0x48u
        && *((_DWORD *)v11 + 10) == 2
        && *((_DWORD *)v11 + 11) >= 0x10u
        && *((_DWORD *)v11 + 12)
        && ((*((_DWORD *)v11 + 13) & 6) == 0 || (*((_DWORD *)v11 + 13) & 6) == 6) )
      {
        *a4 = *(_OWORD *)(v11 + 56);
      }
      else
      {
        return (unsigned int)-2147024809;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v4;
}
