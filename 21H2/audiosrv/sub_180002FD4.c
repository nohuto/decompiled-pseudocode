/*
 * XREFs of sub_180002FD4 @ 0x180002FD4
 * Callers:
 *     sub_180002BB0 @ 0x180002BB0 (sub_180002BB0.c)
 * Callees:
 *     sub_180002AA0 @ 0x180002AA0 (sub_180002AA0.c)
 *     sub_180002EA8 @ 0x180002EA8 (sub_180002EA8.c)
 *     sub_180003D20 @ 0x180003D20 (sub_180003D20.c)
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 */

__int64 __fastcall sub_180002FD4(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  bool v6; // zf
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 i; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  _QWORD v16[2]; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  void *retaddr; // [rsp+78h] [rbp+18h]
  int v19; // [rsp+80h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF

  sub_180003E08(&v21, &qword_18019F818);
  v4 = sub_180003D20(a1 + 656, &v21, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_18004BD84(retaddr, 4362LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v4);
  }
  else
  {
    pv = 0LL;
    v6 = *(_BYTE *)(a1 + 302) == 0;
    v16[0] = &v21;
    v16[1] = &v19;
    v19 = -2147023728;
    if ( !v6 )
    {
      v15 = 0LL;
      v14 = 0LL;
      sub_180002AA0(a1, (__int64)&v14);
      v7 = v14;
      if ( ((*((_QWORD *)&v14 + 1) - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 48LL))(*(_QWORD *)v14);
        sub_18002A504(&pv, 0LL);
        (*(void (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)qword_18019E618 + 376LL))(
          qword_18019E618,
          v8,
          &pv);
      }
      if ( v7 )
      {
        for ( i = v7; i != *((_QWORD *)&v14 + 1); i += 8LL )
          sub_18000F708(i);
        v13 = v7;
        v11 = (v15 - v7) & 0xFFFFFFFFFFFFFFF8uLL;
        v12 = v11;
        if ( v11 >= 0x1000 )
        {
          sub_1800BB290(&v13, &v12);
          v11 = v12;
          v7 = v13;
        }
        sub_18006A148(v7, v11);
      }
    }
    v5 = sub_18002A5E8(qword_18019EED0, v21, pv, a2);
    v19 = v5;
    if ( pv )
      CoTaskMemFree(pv);
    v17 = 0;
    sub_180002EA8((__int64)v16);
  }
  sub_180006A30(v21 - 24);
  return v5;
}
