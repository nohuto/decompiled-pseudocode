/*
 * XREFs of sub_18004A848 @ 0x18004A848
 * Callers:
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004AA1C @ 0x18004AA1C (sub_18004AA1C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004A848(__int64 a1, unsigned __int16 *a2, __int128 *a3, int a4, int a5)
{
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int *v13; // rax
  unsigned int *v14; // rbx
  int v15; // eax
  int v16; // ebx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]

  v8 = a1;
  if ( a4 != 3 && !*(_DWORD *)(a1 + 32) && !*(_BYTE *)(a1 + 8734) )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v18 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 24LL))(v9, &unk_18015C488, 23LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      sub_18004BD84(
        retaddr,
        8258LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v10);
    }
    else
    {
      v12 = a2[8] + 82;
      v13 = (unsigned int *)sub_18006A1B0(v12, &unk_18019F848);
      v14 = v13;
      *(_QWORD *)&v20 = v13;
      if ( v13 )
      {
        memset(v13, 0, v12);
        *v14 = v12;
        *((_OWORD *)v14 + 1) = xmmword_180160A08;
        *((_OWORD *)v14 + 3) = xmmword_1801609F8;
        if ( *a2 == 0xFFFE )
        {
          *((_OWORD *)v14 + 2) = *(_OWORD *)(a2 + 12);
        }
        else
        {
          *((_OWORD *)v14 + 2) = xmmword_18015B740;
          v14[8] = *a2;
        }
        memcpy(v14 + 16, a2, a2[8] + 18LL);
        v19 = 0LL;
        if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v18 + 24LL))(
                v18,
                v14,
                *v14,
                0LL,
                &v19) )
        {
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          sub_18006A148(v14, 82LL);
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          goto LABEL_13;
        }
        v11 = -2004287480;
        sub_18004BD84(
          retaddr,
          8294LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          2290679816LL);
        sub_18000F708(&v19);
      }
      else
      {
        v11 = -2147024882;
        sub_18004BD84(
          retaddr,
          8270LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          2147942414LL);
      }
      if ( v14 )
        sub_18006A148(v14, 82LL);
    }
    sub_18000F708(&v18);
    return v11;
  }
LABEL_13:
  v20 = *a3;
  v15 = sub_18004AA1C(v8, (_DWORD)a2, (unsigned int)&v20, a4, a5);
  v16 = v15;
  if ( v15 == -2005139389 || v15 <= -2005139360 && v15 > -2005139365 )
    v16 = 0;
  if ( v16 >= 0 )
    return 0LL;
  sub_18004BD84(
    retaddr,
    8307LL,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v16);
  return (unsigned int)v16;
}
