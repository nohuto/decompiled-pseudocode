/*
 * XREFs of sub_1800F5B0C @ 0x1800F5B0C
 * Callers:
 *     sub_180038664 @ 0x180038664 (sub_180038664.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F5F10 @ 0x1800F5F10 (sub_1800F5F10.c)
 *     sub_18013BEEC @ 0x18013BEEC (sub_18013BEEC.c)
 *     sub_18013BFA0 @ 0x18013BFA0 (sub_18013BFA0.c)
 *     sub_18013C398 @ 0x18013C398 (sub_18013C398.c)
 *     sub_18013C3EC @ 0x18013C3EC (sub_18013C3EC.c)
 *     sub_18013C444 @ 0x18013C444 (sub_18013C444.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F5B0C(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r9d
  LPSTREAM v9; // rcx
  LPSTREAM ppstm; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-B0h]
  LPSTREAM v15; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v16[32]; // [rsp+A0h] [rbp-68h] BYREF
  int v17; // [rsp+120h] [rbp+18h]
  int v18; // [rsp+124h] [rbp+1Ch]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h]

  v12 = 0;
  ppstm = 0LL;
  sub_1800461B8((__int64 *)&ppstm);
  CreateStreamOnHGlobal(0LL, 1, &ppstm);
  (*(void (__fastcall **)(LPSTREAM, __int64))(*(_QWORD *)ppstm + 48LL))(ppstm, 8096LL);
  v15 = ppstm;
  if ( ppstm )
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)ppstm + 8LL))(ppstm);
  v17 = 0;
  v18 = 0;
  memset(v16, 0, sizeof(v16));
  v2 = (*(__int64 (__fastcall **)(LPSTREAM, const char *, __int64))(*(_QWORD *)v15 + 32LL))(v15, "{", 1LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 538;
    goto LABEL_42;
  }
  v16[v17++] = 0;
  v2 = sub_18013BFA0(&v15, L"audiojournal");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 540;
LABEL_42:
    v8 = v2;
    goto LABEL_43;
  }
  v2 = sub_18013BEEC(&v15, L"render");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 542;
    goto LABEL_42;
  }
  v2 = sub_1800F5F10(v5, *(_QWORD *)a1 + 232LL, 3LL, &v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 543;
    goto LABEL_42;
  }
  v2 = sub_18013C3EC(&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 544;
    goto LABEL_42;
  }
  v2 = sub_18013BEEC(&v15, L"capture");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 546;
    goto LABEL_42;
  }
  v2 = sub_1800F5F10(v6, *(_QWORD *)a1 + 832LL, 2LL, &v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 547;
    goto LABEL_42;
  }
  v2 = sub_18013C3EC(&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 548;
    goto LABEL_42;
  }
  v2 = sub_18013BEEC(&v15, L"unknown");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 550;
    goto LABEL_42;
  }
  v2 = sub_1800F5F10(v7, *(_QWORD *)a1 + 1232LL, 1LL, &v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 551;
    goto LABEL_42;
  }
  v2 = sub_18013C3EC(&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 552;
    goto LABEL_42;
  }
  v2 = sub_18013C444(&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 554;
    goto LABEL_42;
  }
  v2 = sub_18013C398(&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 555;
    goto LABEL_42;
  }
  v2 = (*(__int64 (__fastcall **)(LPSTREAM, _BYTE *, _QWORD))(*(_QWORD *)ppstm + 96LL))(ppstm, v13, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 557;
    goto LABEL_42;
  }
  if ( v14 <= 0x1FA0 )
  {
    **(_QWORD **)(a1 + 8) = sub_180055F40(v14 + 1);
    if ( **(_QWORD **)(a1 + 8) )
    {
      v2 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 563;
        goto LABEL_42;
      }
      v2 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)ppstm + 24LL))(
             ppstm,
             **(_QWORD **)(a1 + 8),
             v14,
             &v12);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 564;
        goto LABEL_42;
      }
      if ( v12 <= v14 )
      {
        *(_BYTE *)(v12 + **(_QWORD **)(a1 + 8)) = 0;
        v3 = 0;
        goto LABEL_44;
      }
      v3 = -2147418113;
      v8 = -2147418113;
      v4 = 566;
    }
    else
    {
      v3 = -2147024882;
      v8 = -2147024882;
      v4 = 561;
    }
  }
  else
  {
    v3 = -2147418113;
    v8 = -2147418113;
    v4 = 559;
  }
LABEL_43:
  sub_18004BD84((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v8);
LABEL_44:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_1800461B8((__int64 *)&ppstm);
  return v3;
}
