/*
 * XREFs of sub_18000506C @ 0x18000506C
 * Callers:
 *     sub_180004214 @ 0x180004214 (sub_180004214.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_18002A804 @ 0x18002A804 (sub_18002A804.c)
 *     sub_18002AAB0 @ 0x18002AAB0 (sub_18002AAB0.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 *     sub_18007B0F8 @ 0x18007B0F8 (sub_18007B0F8.c)
 *     sub_18007B7A0 @ 0x18007B7A0 (sub_18007B7A0.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_18007DE7C @ 0x18007DE7C (sub_18007DE7C.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 *     sub_18007F67C @ 0x18007F67C (sub_18007F67C.c)
 * Callees:
 *     sub_180002774 @ 0x180002774 (sub_180002774.c)
 *     sub_180004CA8 @ 0x180004CA8 (sub_180004CA8.c)
 *     sub_180006018 @ 0x180006018 (sub_180006018.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18002247C @ 0x18002247C (sub_18002247C.c)
 *     sub_18002ACDC @ 0x18002ACDC (sub_18002ACDC.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003C324 @ 0x18003C324 (sub_18003C324.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000506C(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // r13d
  int v7; // r15d
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // r8
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // r12
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v17; // r14d
  int v18; // r12d
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int8 v25; // bl
  __int64 v26; // rax
  unsigned __int8 v27; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v28[3]; // [rsp+61h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-55h]
  unsigned int v30; // [rsp+68h] [rbp-51h]
  __int64 v31; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-41h] BYREF
  __int64 v33; // [rsp+80h] [rbp-39h]
  __int64 v34; // [rsp+88h] [rbp-31h]
  __int64 v35; // [rsp+90h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+98h] [rbp-21h] BYREF
  __int64 *v37; // [rsp+B8h] [rbp-1h]
  int v38; // [rsp+C0h] [rbp+7h]
  int v39; // [rsp+C4h] [rbp+Bh]

  v6 = a5;
  v7 = 0;
  v8 = a2;
  v9 = a1;
  v31 = a4;
  v29 = a3;
  v30 = a2;
  v33 = a1;
  if ( !a5 )
  {
    v7 = 1;
    sub_1800093A0(a1, 0LL);
  }
  v10 = *(_QWORD *)(v9 + 648);
  v11 = *(_QWORD **)(v9 + 688);
  v32 = (unsigned __int64)v11;
  v12 = BYTE2(v10) & 3;
  if ( v12 >= v8 )
  {
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v31 = *(_QWORD *)(v9 - 32);
      v28[0] = BYTE2(v10) & 3;
      v27 = v8;
      sub_18003C324(v12, (unsigned int)&unk_1800A117C, v10, a4, (__int64)&v31, (__int64)&v27, (__int64)v28);
    }
    goto LABEL_32;
  }
  if ( (v10 & 0x800000000LL) != 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v26 = *(_QWORD *)(v9 - 32);
      v39 = 0;
      v31 = v26;
      v38 = 8;
      v37 = &v31;
      sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A09C3, 0, 0, 3u, &v36);
    }
    goto LABEL_32;
  }
  v13 = 80;
  v14 = sub_180006258(v9, v10 >> 16, v10);
  if ( v14 )
  {
    do
    {
      v27 = v13;
      if ( sub_180004CA8(v14) && *(_BYTE *)(v14 + 548) == 3 )
      {
        v25 = *(_BYTE *)(v14 + 427);
        sub_180002774(v23, v30, v29, v31);
        v13 = v25;
        if ( v27 < v25 )
          v13 = v27;
      }
      v14 = sub_1800062A4(v14, v22, v24);
    }
    while ( v14 );
    v9 = v33;
    v11 = (_QWORD *)v32;
    v6 = a5;
  }
  v15 = sub_1800067F0(v9);
  *(_QWORD *)(v9 + 648) &= 0xFFFFFFFFFFFCFFFFuLL;
  v16 = v15;
  LOWORD(v15) = v29;
  v17 = v30;
  *(_QWORD *)(v9 + 648) |= (unsigned __int64)(v30 & 3) << 16;
  *(_WORD *)(v9 + 648) = v15;
  *(_QWORD *)(v9 + 648) &= 0xFFFFFFFFFC03FFFFuLL;
  *(_QWORD *)(v9 + 648) |= (unsigned __int64)v13 << 18;
  RtlQueryUnbiasedInterruptTime(&v32);
  *(_DWORD *)(v9 + 836) = v32 / 0x2710;
  *(_DWORD *)(v9 + 840) = a6;
  sub_1800066B0(v9, v16);
  if ( v17 == 2 )
  {
    *(_QWORD *)(v9 + 648) |= 0x10000000000000uLL;
    if ( *(_DWORD *)(v9 + 640) != GetCurrentThreadId() )
      sub_18001CC80(v9, 0LL);
  }
  else
  {
    sub_180006018(v9, 0LL);
  }
  if ( v31 )
    v18 = *(_DWORD *)(v31 + 140);
  else
    v18 = 0;
  if ( v11 )
  {
    if ( v6 == 2 )
    {
      ++v11[14];
      v19 = 0;
      goto LABEL_14;
    }
    sub_18000E1BC(v11);
    if ( v6 == 3 )
    {
      sub_18002247C(v11);
      v19 = 0;
    }
    else
    {
      v19 = sub_180008F9C(v11, v9 + 616);
    }
    sub_18000E244(v11);
  }
  else
  {
    v19 = 0;
  }
  if ( v6 != 2 )
    sub_18001CC80(v9, 0LL);
LABEL_14:
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 0x400000000008LL) )
  {
    v33 = *(_QWORD *)(v9 + 800);
    v30 = v29;
    LODWORD(v31) = *(_DWORD *)(v9 + 560);
    v34 = *(_QWORD *)(v9 - 32);
    v35 = v9 + 24;
    v32 = 0x1000000LL;
    v27 = v17;
    v29 = v18;
    sub_18002ACDC(v20, &unk_1800A1355);
  }
  if ( v7 )
  {
    sub_18000A110(v9);
    v7 = 0;
    if ( v19 )
    {
      sub_180017F60(v11);
LABEL_32:
      v19 = 0;
      if ( v7 )
        sub_18000A110(v9);
    }
  }
  return v19;
}
