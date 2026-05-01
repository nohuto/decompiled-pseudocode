/*
 * XREFs of sub_180015E80 @ 0x180015E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 *     sub_180014F00 @ 0x180014F00 (sub_180014F00.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 *     sub_180021FFC @ 0x180021FFC (sub_180021FFC.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180034F2C @ 0x180034F2C (sub_180034F2C.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063D08 @ 0x180063D08 (sub_180063D08.c)
 *     sub_1800719C8 @ 0x1800719C8 (sub_1800719C8.c)
 *     sub_180071D9C @ 0x180071D9C (sub_180071D9C.c)
 *     sub_1800720A0 @ 0x1800720A0 (sub_1800720A0.c)
 *     sub_1800725E0 @ 0x1800725E0 (sub_1800725E0.c)
 */

__int64 __fastcall sub_180015E80(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // r15d
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int16 v17; // [rsp+68h] [rbp-A0h] BYREF
  char v18; // [rsp+6Ah] [rbp-9Eh] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  _QWORD Block[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v27[128]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v28[10]; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+198h] [rbp+90h] BYREF

  v1 = Block;
  v2 = (_QWORD *)(a1 + 200);
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v2 != v2 )
  {
    if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009D29B, 0, 0, 2u, &v29);
    v5 = *(_QWORD *)(a1 + 24);
    sub_180034F2C(a1, v5 + 400, v27, v28);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 2720) + 32LL);
    while ( (_QWORD *)*v2 != v2 )
    {
      v7 = *(_QWORD *)(*v2 - 32LL);
      v8 = *(_QWORD *)(v7 + 1320);
      v19 = 0LL;
      if ( !(unsigned __int8)sub_180063D08(v7 + 1336) )
        sub_180021FFC(v8, &v19);
      v9 = sub_180014E9C(*(_QWORD **)(v7 + 1312));
      if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v12 = *(_QWORD *)(v7 + 1752);
        v22 = *(_QWORD *)(v6 + 128);
        v23 = *(_QWORD *)(v7 + 128);
        v24 = v28[3];
        v25 = v19;
        v26 = *(_QWORD *)(v7 + 104);
        v21 = v12;
        v18 = v9;
        sub_1800720A0(
          v12,
          (unsigned int)&unk_18009D69C,
          v10,
          v11,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v18,
          (__int64)&v21);
      }
      sub_1800719C8(*(_QWORD *)(*(_QWORD *)(v7 + 1312) + 64LL), Block, v7, &v29);
      if ( (int)sub_180014F00(v7, v19, 1, (__int64)v27, v28, &v29, &v17, (char *)&v17 + 1) < 0 )
        break;
      sub_1800725E0(v7, v17 == 0, v9 == 0);
      if ( v17 || v9 )
      {
        sub_180071D9C(&v29);
        break;
      }
      v13 = *(_DWORD *)(v7 + 1332);
      if ( (v13 & 4) == 0 )
      {
        *(_DWORD *)(v7 + 1332) = v13 | 4;
        sub_18000FF28((_QWORD *)v8, 1u);
      }
      if ( (*(_BYTE *)(v8 + 836) & 1) == 0 && (unsigned int)sub_180035480(v8) )
        break;
      sub_180015340(v7, 1);
    }
    v1 = (__int64 *)Block[0];
  }
  if ( (unsigned int)dword_1800B31E0 <= 5 || (byte_1800B31F0 & 1) == 0 || (qword_1800B31F8 & 1) != qword_1800B31F8 )
    goto LABEL_4;
  sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009D137, 0, 0, 2u, &v29);
  while ( 1 )
  {
    v1 = (__int64 *)Block[0];
LABEL_4:
    if ( v1 == Block )
      break;
    v14 = (__int64 *)v1[1];
    v15 = *v1;
    *v14 = *v1;
    *(_QWORD *)(v15 + 8) = v14;
    v16 = v1[2];
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    j_j_free(v1);
  }
  return 0LL;
}
