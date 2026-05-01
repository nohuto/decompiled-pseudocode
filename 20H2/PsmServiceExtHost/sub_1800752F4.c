/*
 * XREFs of sub_1800752F4 @ 0x1800752F4
 * Callers:
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006ABC8 @ 0x18006ABC8 (sub_18006ABC8.c)
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_180073EEC @ 0x180073EEC (sub_180073EEC.c)
 */

char __fastcall sub_1800752F4(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        __int64 a6,
        _BYTE *a7,
        _BYTE *a8)
{
  _BYTE *v8; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v18; // rsi
  int v19; // eax
  int v20; // r8d
  int v21; // r11d
  __int64 v22; // rdx
  int v23; // r8d
  char v24; // r8
  __int64 v25; // rdx
  unsigned int v26; // r11d
  char v28; // [rsp+40h] [rbp-99h]
  char v29; // [rsp+41h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-95h]
  unsigned __int64 v31; // [rsp+48h] [rbp-91h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-89h] BYREF
  __int64 v33; // [rsp+58h] [rbp-81h]
  __int64 v34; // [rsp+60h] [rbp-79h] BYREF
  _BYTE *v35; // [rsp+68h] [rbp-71h]
  _BYTE *v36; // [rsp+70h] [rbp-69h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+80h] [rbp-59h] BYREF
  __int64 *v38; // [rsp+A0h] [rbp-39h]
  __int64 v39; // [rsp+A8h] [rbp-31h]
  __int64 *v40; // [rsp+B0h] [rbp-29h]
  __int64 v41; // [rsp+B8h] [rbp-21h]
  char *v42; // [rsp+C0h] [rbp-19h]
  __int64 v43; // [rsp+C8h] [rbp-11h]

  v8 = a8;
  v10 = 0;
  v33 = a6;
  v11 = *a1;
  v30 = a3;
  v35 = a7;
  v36 = a8;
  v12 = *(_QWORD *)(v11 + 24) + 400LL;
  *a7 = 0;
  *a8 = 0;
  v28 = 0;
  if ( a3 )
  {
    v13 = (unsigned __int64 *)(a2 + 24);
    do
    {
      v14 = v13[3];
      if ( *((__int16 *)v13 + 18) >= 0 )
      {
        LOBYTE(v11) = sub_180071270(v13[3]);
        if ( !(_BYTE)v11 )
          return v11;
        if ( (a5 & 8) != 0 )
        {
          sub_180033D1C(v12, v14, 2);
          if ( (a5 & 4) == 0 )
            *v8 = 1;
          v19 = sub_180033D1C(*(_QWORD *)(v14 + 48) + 400LL, v14, 1);
          v22 = (unsigned int)(v20 + 23);
          if ( (v19 & *(_DWORD *)(v14 + 1244)) == v19 )
            v22 = (unsigned int)(v20 + 31);
        }
        else
        {
          LODWORD(v11) = sub_180033D1C(*(_QWORD *)(v14 + 48) + 400LL, v14, 1);
          if ( ((unsigned int)v11 & *(_DWORD *)(v14 + 1244)) == (_DWORD)v11 )
          {
            if ( v28 )
              return v11;
            v21 = sub_180033D1C(v12, v14, 2);
            if ( (a5 & 4) == 0 )
              *v8 = 1;
            v22 = 32LL;
          }
          else
          {
            v21 = sub_180033D1C(v12, v14, v23);
            v28 = v24;
            v22 = 24LL;
          }
        }
        *(_DWORD *)(v14 + 1468) |= v21;
        v18 = (unsigned __int64 *)((char *)v13 + v22 - 24);
        if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
        {
          v32 = *v18;
          v31 = *(_QWORD *)(v14 + 32);
          v42 = &v29;
          v40 = (__int64 *)&v32;
          v38 = (__int64 *)&v31;
          v43 = v25;
          v29 = v25 & (v26 >> 5);
          v41 = 8LL;
          v39 = 8LL;
          sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009E0A3, 0LL, 0LL, 5u, &v37);
        }
        sub_18006ABC8(v14, v33);
        sub_180035480((int *)v13[3]);
      }
      else
      {
        if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
        {
          v34 = *(v13 - 3);
          v31 = *v13;
          v32 = *(_QWORD *)(v14 + 32);
          sub_180073EEC(v15, byte_18009DD43, v16, v17, (__int64)&v32, (__int64)&v31, (__int64)&v34);
        }
        sub_18006ABC8(v14, v33);
        sub_18006B6B4(v14, 3, 4, 0LL);
        v18 = v13;
      }
      LOBYTE(v11) = (_BYTE)v35;
      *v35 = 1;
      if ( (a5 & 2) != 0 )
        break;
      if ( *v18 > a4 )
        break;
      a4 -= *v18;
      ++v10;
      v8 = v36;
      v13 += 8;
    }
    while ( v10 < v30 );
  }
  return v11;
}
