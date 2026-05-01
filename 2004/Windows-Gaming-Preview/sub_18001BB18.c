/*
 * XREFs of sub_18001BB18 @ 0x18001BB18
 * Callers:
 *     sub_18001FE90 @ 0x18001FE90 (sub_18001FE90.c)
 * Callees:
 *     sub_18001BD14 @ 0x18001BD14 (sub_18001BD14.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001BB18(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-A1h] BYREF
  char v12; // [rsp+40h] [rbp-89h]
  __int64 v13; // [rsp+48h] [rbp-81h]
  _BYTE *v14; // [rsp+60h] [rbp-69h]
  __int64 (__fastcall **v15)(); // [rsp+70h] [rbp-59h] BYREF
  __int128 v16; // [rsp+78h] [rbp-51h]
  char v17; // [rsp+88h] [rbp-41h]
  __int64 v18; // [rsp+90h] [rbp-39h]
  __int64 (__fastcall ***v19)(); // [rsp+A8h] [rbp-21h]
  __int64 (__fastcall **v20)(); // [rsp+B0h] [rbp-19h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-11h]
  char v22; // [rsp+C8h] [rbp-1h]
  __int64 v23; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall ***v24)(); // [rsp+E8h] [rbp+1Fh]

  v10 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v10) >= 0 )
  {
    *(_QWORD *)v11 = sub_18001BFA0;
    *(_DWORD *)&v11[8] = 0;
    v15 = off_18004AAE0;
    v16 = *(_OWORD *)v11;
    v17 = v11[16];
    v18 = a1;
    v19 = &v15;
    *(_QWORD *)v11 = off_18004AAE0;
    *(_OWORD *)&v11[8] = v16;
    v12 = v17;
    v13 = a1;
    v14 = v11;
    LOBYTE(v6) = a3;
    sub_18001BD14(&v15, v10, v11, v6);
    if ( v19 )
    {
      if ( v19 != &v15 )
        j_j__o_free(v19, 40LL);
    }
  }
  if ( a3 )
  {
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 72LL))(a2, &v10) >= 0 )
    {
      *(_QWORD *)v11 = sub_18001C160;
      *(_DWORD *)&v11[8] = 0;
      v20 = off_18004AAE0;
      v21 = *(_OWORD *)v11;
      v22 = v11[16];
      v23 = a1;
      v24 = &v20;
      v15 = off_18004AAE0;
      v16 = *(_OWORD *)v11;
      v17 = v11[16];
      v18 = a1;
      v19 = &v15;
      sub_18001BD14(&v20, v10, &v15, 0LL);
      if ( v24 )
      {
        if ( v24 != &v20 )
          j_j__o_free(v24, 40LL);
      }
    }
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
