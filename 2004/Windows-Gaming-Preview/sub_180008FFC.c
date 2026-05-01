/*
 * XREFs of sub_180008FFC @ 0x180008FFC
 * Callers:
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 * Callees:
 *     sub_180001A2C @ 0x180001A2C (sub_180001A2C.c)
 *     sub_180001AB8 @ 0x180001AB8 (sub_180001AB8.c)
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     sub_180003690 @ 0x180003690 (sub_180003690.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180008FFC(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  HANDLE v5; // rax
  void *v6; // rbx
  __int64 v7; // r9
  int v8; // esi
  int v9; // eax
  __int64 v10; // rdx
  HANDLE v11; // rax
  __int64 v12; // r9
  void *v13; // rdi
  int v14; // eax
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  int v17[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  v3 = 0LL;
  sub_180001A2C(Name, 260LL, a1);
  sub_180001AB8(Name, v4, (__int64)L"_p0");
  v5 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v6 = v5;
  if ( v5 )
  {
    v17[0] = 0;
    v16 = 0;
    v9 = sub_180003690(v5, v17);
    v8 = v9;
    if ( v9 >= 0 )
    {
      sub_180001AB8(Name, v10, (__int64)L"h");
      v11 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v13 = v11;
      if ( v11 )
      {
        v14 = sub_180003690(v11, &v16);
        v8 = v14;
        if ( v14 >= 0 )
        {
          sub_18000336C(v13);
          v3 = ((__int64)v16 << 31) | v17[0];
          sub_18000336C(v6);
          v8 = 0;
          goto LABEL_12;
        }
        sub_180003268(retaddr, 215, (__int64)"wil", v14);
        sub_18000336C(v13);
      }
      else
      {
        v8 = sub_1800032A0(retaddr, 213, (__int64)"wil", v12);
      }
    }
    else
    {
      sub_180003268(retaddr, 207, (__int64)"wil", v9);
    }
    sub_18000336C(v6);
    goto LABEL_12;
  }
  if ( GetLastError() == 2 )
    goto LABEL_14;
  v8 = sub_1800032A0(retaddr, 201, (__int64)"wil", v7);
LABEL_12:
  if ( v8 < 0 )
  {
    sub_180003268(retaddr, 98, (__int64)"wil", v8);
    return (unsigned int)v8;
  }
LABEL_14:
  *a2 = v3;
  return 0LL;
}
