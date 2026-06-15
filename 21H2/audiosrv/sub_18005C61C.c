/*
 * XREFs of sub_18005C61C @ 0x18005C61C
 * Callers:
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 * Callees:
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_18005C014 @ 0x18005C014 (sub_18005C014.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005C61C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h]
  _DWORD v12[20]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v13[53]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v12, 0, 0x48uLL);
  memset(v13, 0, 0x342uLL);
  v9 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, &xmmword_18015B680, pvar) < 0 )
    goto LABEL_3;
  if ( LOWORD(pvar[0]) == 65 )
    goto LABEL_3;
  PropVariantClear(pvar);
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, &unk_18015BCB8, pvar) < 0
    || LOWORD(pvar[0]) != 65
    || LODWORD(pvar[1]) < 0x50
    || (int)sub_18005C014(a2, a1, &v9) < 0 )
  {
    goto LABEL_3;
  }
  v5 = 0;
  v6 = *(_DWORD *)(v11 + 68);
  if ( !v6 )
    goto LABEL_16;
  while ( 1 )
  {
    v7 = 842LL * v5 + v11 + 80;
    v8 = *(_QWORD *)(v7 + 776) - *(_QWORD *)(v11 + 20);
    if ( !v8 )
      v8 = *(_QWORD *)(v7 + 784) - *(_QWORD *)(v11 + 28);
    if ( !v8 )
      break;
    if ( ++v5 >= v6 )
      goto LABEL_16;
  }
  if ( !v7 )
  {
LABEL_16:
    if ( *(_DWORD *)(v11 + 8) || !v6 )
      goto LABEL_3;
    v7 = v11 + 80;
  }
  v12[0] = *(_DWORD *)(v11 + 8);
  v12[15] = *(_DWORD *)(v11 + 72);
  v12[1] = *(_DWORD *)(v11 + 12);
  v12[2] = *(_DWORD *)(v11 + 16);
  v12[17] = *(_DWORD *)(v11 + 16) != 0;
  *(_OWORD *)&v12[3] = *(_OWORD *)(v11 + 20);
  *(_OWORD *)&v12[7] = *(_OWORD *)(v11 + 36);
  v13[48] = *(_OWORD *)(v7 + 776);
  v13[49] = *(_OWORD *)(v7 + 792);
  *(_QWORD *)&v13[50] = *(_QWORD *)(v7 + 808);
  DWORD2(v13[50]) = *(_DWORD *)(v7 + 816);
  *(_OWORD *)((char *)&v13[50] + 12) = *(_OWORD *)(v7 + 820);
  HIDWORD(v13[51]) = *(_DWORD *)(v7 + 836);
  LOWORD(v13[52]) = *(_WORD *)(v7 + 840);
  sub_180057300(v13, 256LL, v7 + 8);
  sub_180057300(&v13[32], 128LL, v7 + 520);
  (*(void (__fastcall **)(__int64, _DWORD *, _OWORD *, __int64))(*(_QWORD *)v9 + 64LL))(v9, v12, v13, 834LL);
LABEL_3:
  PropVariantClear(pvar);
  result = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 48LL))(a1, &unk_18015BCB8, pvar);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
