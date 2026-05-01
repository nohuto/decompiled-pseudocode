/*
 * XREFs of sub_18001D120 @ 0x18001D120
 * Callers:
 *     sub_18001CC34 @ 0x18001CC34 (sub_18001CC34.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000F0BC @ 0x18000F0BC (sub_18000F0BC.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_1800161FC @ 0x1800161FC (sub_1800161FC.c)
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001D120(__int64 a1, __int64 a2, volatile signed __int64 **a3, __int64 *a4)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r15d
  int v11; // ecx
  __int128 v12; // xmm6
  int v13; // eax
  int v14; // ebx
  volatile signed __int64 *v15; // rcx
  __int64 v16; // rbx
  void *v17; // rax
  volatile signed __int64 *v18; // rdi
  __int64 v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  int v22; // eax
  int v23; // r9d
  int v24; // edx
  __int64 v25; // rdx
  __int64 v27[4]; // [rsp+38h] [rbp-89h] BYREF
  __int128 v28; // [rsp+58h] [rbp-69h] BYREF
  __int128 v29; // [rsp+68h] [rbp-59h] BYREF
  __int128 v30; // [rsp+78h] [rbp-49h] BYREF
  __int64 v31; // [rsp+88h] [rbp-39h]
  unsigned int v32; // [rsp+90h] [rbp-31h] BYREF
  int *v33; // [rsp+98h] [rbp-29h]
  _QWORD v34[5]; // [rsp+A0h] [rbp-21h] BYREF
  __int64 retaddr; // [rsp+120h] [rbp+5Fh]

  v31 = a2;
  v33 = (int *)v34;
  memset(v34, 0, 20);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v32);
  *v33 = v7;
  if ( v7 >= 0 && v32 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v31 + 48LL))(v31, 0LL, (char *)v34 + 4);
    *v33 = v8;
  }
  v9 = 0;
  v10 = v32;
  v11 = 0;
  while ( 1 )
  {
    if ( *v33 < 0 || v11 == v10 )
      return 0LL;
    v12 = *(_OWORD *)((char *)v34 + 4);
    *(_OWORD *)&v34[3] = *(_OWORD *)((char *)v34 + 4);
    v27[0] = 0LL;
    v28 = *(_OWORD *)((char *)v34 + 4);
    v13 = sub_1800161FC(*a4, &v28, v27);
    v14 = v13;
    if ( v13 < 0 )
      break;
    v15 = *a3;
    if ( *a3 )
    {
      v30 = v12;
      v13 = sub_180029930(v15 + 3, &v30, v27, a4);
      v14 = v13;
      if ( v13 < 0 )
      {
        v24 = 596;
        goto LABEL_34;
      }
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 128);
      *a3 = 0LL;
      v17 = operator new(0x138uLL, (const struct std::nothrow_t *)&unk_18005AF88);
      if ( !v17 )
      {
        v14 = -2147024882;
LABEL_31:
        v23 = v14;
        v24 = 589;
        goto LABEL_35;
      }
      v18 = (volatile signed __int64 *)sub_18000F0BC((__int64)v17);
      v27[1] = (__int64)v18;
      v27[2] = 0LL;
      v29 = v12;
      v14 = sub_180027610(
              (_DWORD)v18,
              (unsigned int)&v29,
              (unsigned int)v27,
              (_DWORD)a4,
              (v16 + 8) & -(__int64)(v16 != 0));
      if ( v14 >= 0 )
      {
        if ( v18 )
        {
          v20 = *((_QWORD *)v18 + 17);
          while ( v20 >= 0 )
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange64(v18 + 17, v20 + 1, v20);
            if ( v21 == v20 )
              goto LABEL_19;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v20 + 16));
        }
LABEL_19:
        *a3 = v18;
        if ( v18 )
          sub_1800120A0(v18);
        v14 = 0;
      }
      else if ( v18 )
      {
        sub_1800120A0(v18);
      }
      if ( v14 < 0 )
        goto LABEL_31;
    }
    if ( v27[0] )
      j_j__o_free(v27[0], v19);
    v11 = ++v9;
    if ( *v33 >= 0 && v9 < v32 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v31 + 48LL))(v31, v9, (char *)v34 + 4);
      *v33 = v22;
      v11 = v9;
    }
  }
  v24 = 579;
LABEL_34:
  v23 = v13;
LABEL_35:
  sub_180003268(retaddr, v24, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v23);
  if ( v27[0] )
    j_j__o_free(v27[0], v25);
  return (unsigned int)v14;
}
