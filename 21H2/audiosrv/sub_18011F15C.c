/*
 * XREFs of sub_18011F15C @ 0x18011F15C
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_1800720A4 @ 0x1800720A4 (sub_1800720A4.c)
 * Callees:
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011C9A4 @ 0x18011C9A4 (sub_18011C9A4.c)
 *     sub_18011F31C @ 0x18011F31C (sub_18011F31C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011F15C(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // edx
  int v7; // esi
  int v8; // edx
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  unsigned __int16 *v12; // [rsp+28h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-20h]
  __int16 v14; // [rsp+38h] [rbp-18h] BYREF
  int v15; // [rsp+40h] [rbp-10h]
  unsigned __int16 *v16; // [rsp+48h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+8h]
  unsigned __int16 *pv; // [rsp+68h] [rbp+18h]

  if ( !a2 )
  {
    v4 = sub_18004C264(a1, 1, 0, 0LL);
    if ( v4 >= 0 )
      return 0LL;
    v5 = 8666;
    goto LABEL_4;
  }
  v7 = sub_18004BB48(a2);
  if ( v7 < 0 )
  {
    v8 = 8675;
LABEL_8:
    sub_18004BD84(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v7);
    return (unsigned int)v7;
  }
  v7 = sub_18004C264(a1, 1, 0, a2);
  if ( v7 < 0 )
  {
    v8 = 8678;
    goto LABEL_8;
  }
  v4 = sub_18011F31C(a1, a2);
  if ( v4 >= 0 )
  {
    pv = 0LL;
    v12 = 0LL;
    v13 = 1;
    v4 = sub_18011C9A4(a1, (__int64)&v12);
    if ( v13 )
      pv = v12;
    if ( v4 >= 0 )
    {
      v14 = 65;
      v15 = pv[8] + 18;
      v16 = pv;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int16 *))(**(_QWORD **)(a1 + 40) + 48LL))(
              *(_QWORD *)(a1 + 40),
              &xmmword_18015A8C8,
              &v14);
      v4 = v11;
      if ( v11 >= 0 )
      {
        v4 = 0;
LABEL_21:
        if ( pv )
          CoTaskMemFree(pv);
        return (unsigned int)v4;
      }
      v9 = v11;
      v10 = 8694;
    }
    else
    {
      v9 = v4;
      v10 = 8685;
    }
    sub_18004BD84(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v9);
    goto LABEL_21;
  }
  v5 = 8681;
LABEL_4:
  sub_18004BD84(
    (int)retaddr,
    v5,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v4);
  return (unsigned int)v4;
}
