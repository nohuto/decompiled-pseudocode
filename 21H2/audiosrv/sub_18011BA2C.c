/*
 * XREFs of sub_18011BA2C @ 0x18011BA2C
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 * Callees:
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 */

__int64 __fastcall sub_18011BA2C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r15d
  int v10; // edx
  int v11; // ebx
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  bool v17; // zf
  __int128 v18; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v19[24]; // [rsp+70h] [rbp-39h]
  __int64 (__fastcall **v20)(); // [rsp+88h] [rbp-21h] BYREF
  __int128 v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+A0h] [rbp-9h]
  __int64 (__fastcall ***v23)(); // [rsp+C0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+4Fh]
  char v25; // [rsp+108h] [rbp+5Fh] BYREF

  v8 = a2;
  if ( !a2 )
  {
    v10 = 7196;
LABEL_3:
    v11 = -2147467261;
LABEL_4:
    sub_18004BD84(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v11);
    return (unsigned int)v11;
  }
  if ( !a3 )
  {
    v10 = 7197;
    goto LABEL_3;
  }
  v13 = a5;
  if ( !a5 )
  {
    v10 = 7198;
    goto LABEL_3;
  }
  sub_1800271DC((unsigned __int64 *)a1, &v18);
  v25 = 0;
  *(_QWORD *)v19 = a1;
  v14 = *(_QWORD *)qword_18019F760;
  *(_OWORD *)&v19[8] = v18;
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(v14 + 48))(qword_18019F760, &v25);
  if ( v11 < 0 )
  {
    v10 = 7221;
    goto LABEL_4;
  }
  v16 = *(_QWORD *)(a1 + 40);
  v17 = *(_DWORD *)(a1 + 188) == 0;
  v20 = off_180155C38;
  LOBYTE(v15) = !v17;
  v22 = *(_QWORD *)&v19[16];
  v23 = &v20;
  v21 = *(_OWORD *)v19;
  v11 = sub_180125A30((int)a1 + 1768, a1, v15, v8, a4, a3, v16, (__int64)&v25, (__int64)&v20, v13, a6);
  if ( v11 < 0 )
  {
    v10 = 7228;
    goto LABEL_4;
  }
  return 0LL;
}
