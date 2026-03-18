/*
 * XREFs of sub_1C0019118 @ 0x1C0019118
 * Callers:
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00192F4 @ 0x1C00192F4 (sub_1C00192F4.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002DE04 @ 0x1C002DE04 (sub_1C002DE04.c)
 *     sub_1C0037BB4 @ 0x1C0037BB4 (sub_1C0037BB4.c)
 *     sub_1C0038198 @ 0x1C0038198 (sub_1C0038198.c)
 *     sub_1C003AC5C @ 0x1C003AC5C (sub_1C003AC5C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C005C2E8 @ 0x1C005C2E8 (sub_1C005C2E8.c)
 */

__int64 __fastcall sub_1C0019118(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  _DWORD *v9; // rdi
  _DWORD *v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // r10
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  unsigned int i; // edx
  int v16; // eax
  int v17; // edi
  unsigned int v19; // r14d
  int v20; // eax
  int v21; // [rsp+20h] [rbp-B9h]
  __int64 v22; // [rsp+38h] [rbp-A1h]
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 v24; // [rsp+54h] [rbp-85h]
  __int64 v25; // [rsp+58h] [rbp-81h] BYREF
  __int64 v26; // [rsp+60h] [rbp-79h] BYREF
  __int64 v27; // [rsp+68h] [rbp-71h]
  __int64 v28; // [rsp+70h] [rbp-69h]
  int v29; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v30[23]; // [rsp+84h] [rbp-55h] BYREF

  v4 = a3;
  v27 = a2;
  v7 = a4;
  v24 = a3;
  sub_1C001D340(v30, 0LL, 80LL);
  v28 = v4;
  v25 = 0LL;
  v23[0] = 0;
  v8 = (unsigned int)v4;
  sub_1C000FD80(a1, 4, 1668441412, (unsigned int)v4, v7);
  v9 = sub_1C000F050(a1);
  v10 = sub_1C0011220(a2);
  v11 = 0xFEFEFEFEFEFEFEFEuLL;
  v26 = 0xFEFEFEFEFEFEFEFEuLL;
  if ( (v8 & 0x400) != 0 )
    goto LABEL_2;
  if ( (v9[640] & 0x40) != 0 )
  {
    sub_1C000FD80(a1, 4, 1668441137, v8, v7);
    v25 = sub_1C0037BB4(a1, a1);
    v23[0] = v7;
    sub_1C000FD80(a1, 4, 1668441138, v25, v7);
    v12 = v25;
    if ( !v25 )
    {
      v17 = -1073741823;
      sub_1C004A608(a1, (unsigned __int16)v7, 5, 0, 0, -1073741823, -1, (__int64)aBusC, 6285, 0);
      return (unsigned int)v17;
    }
LABEL_3:
    if ( *((_QWORD *)v9 + 532) )
    {
      v29 = 1;
      if ( *((_WORD *)v9 + 2113) < 7u )
      {
        LOWORD(v21) = v7;
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, int, int *, unsigned __int16))v9 + 532))(
                *((_QWORD *)v9 + 529),
                &v26,
                v12,
                v24,
                v21,
                &v29,
                v23[0]);
      }
      else
      {
        v13 = v10 + 672;
        v10[673] = *((unsigned __int16 *)v9 + 2604);
        v14 = v10 + 674;
        *(_OWORD *)(v10 + 674) = 0LL;
        v10[678] = 0;
        if ( *((_WORD *)v9 + 2604) )
        {
          for ( i = 1; i < 5; ++i )
          {
            v20 = *((unsigned __int16 *)v9 + i + 2604);
            if ( !(_WORD)v20 )
              break;
            *v14++ = v20;
          }
        }
        else
        {
          i = 0;
        }
        *v13 = i + 1;
        v22 = v27;
        v13[i + 1] = v7;
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, _DWORD *, int *, unsigned __int16, __int64, _DWORD *))v9
               + 561))(
                *((_QWORD *)v9 + 529),
                &v26,
                v25,
                v24,
                v10 + 672,
                &v29,
                v23[0],
                v22,
                v10 + 668);
      }
      v17 = v16;
      if ( v25 )
        sub_1C002DE04(a1, v25, a1, 1212445810LL);
      if ( (v17 & 0xC0000000) == 0xC0000000 )
      {
        if ( v30[0] == 5 )
          v10[705] = v30[1] != 0 ? 1073807365 : 1073807360;
        sub_1C000FD80(a1, 4, 1667524129, v8, v7);
        sub_1C004A608(a1, (unsigned __int16)v7, 4, (unsigned int)&v29, 84, v17, -1, (__int64)aBusC, 6405, 0);
        sub_1C005C2E8(a1, &unk_1C00626F0, (unsigned int)v7, &v29, 84);
        v26 = 0xFEFEFEFEFEFEFEFEuLL;
      }
      else
      {
        v11 = v26;
      }
      if ( v17 >= 0 )
      {
        v17 = sub_1C00192F4(a1, v27, v11);
        if ( (v17 & 0xC0000000) == 0xC0000000 )
        {
          sub_1C000FD80(a1, 4, 1819175713, v26, v7);
          sub_1C003AC5C(a1, v26);
        }
      }
    }
    else
    {
      v17 = -1073741822;
      if ( v12 )
        sub_1C002DE04(a1, v12, a1, 1212445810LL);
    }
    return (unsigned int)v17;
  }
  sub_1C000FD80(a1, 4, 1668441139, v8, v7);
  v19 = sub_1C0038198(a1, &v25, a1, v23);
  sub_1C000FD80(a1, 4, 1668441140, v25, v23[0]);
  if ( (v19 & 0xC0000000) != 0xC0000000 )
  {
    v8 = v28;
LABEL_2:
    v12 = v25;
    goto LABEL_3;
  }
  sub_1C004A608(a1, (unsigned __int16)v7, 104, 0, 0, v19, -1, (__int64)aBusC, 6304, 0);
  return v19;
}
