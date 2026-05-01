/*
 * XREFs of sub_18007CF6C @ 0x18007CF6C
 * Callers:
 *     sub_180044770 @ 0x180044770 (sub_180044770.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 *     sub_18007C41C @ 0x18007C41C (sub_18007C41C.c)
 *     sub_18007CD98 @ 0x18007CD98 (sub_18007CD98.c)
 */

__int64 __fastcall sub_18007CF6C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 i; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r10
  __int64 v11; // r11
  char v12; // al
  __int64 v13; // rbx
  int v15; // [rsp+90h] [rbp-29h] BYREF
  int v16; // [rsp+94h] [rbp-25h] BYREF
  int v17; // [rsp+98h] [rbp-21h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-11h] BYREF
  void *v20; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+Fh] BYREF
  void *v24; // [rsp+D0h] [rbp+17h] BYREF
  void *v25; // [rsp+D8h] [rbp+1Fh] BYREF
  _QWORD v26[6]; // [rsp+E0h] [rbp+27h] BYREF
  char v27; // [rsp+120h] [rbp+67h] BYREF
  int v28; // [rsp+128h] [rbp+6Fh] BYREF
  int v29; // [rsp+130h] [rbp+77h] BYREF
  int v30; // [rsp+138h] [rbp+7Fh] BYREF

  sub_1800093A0(a1, 0);
  sub_1800468FC(a1, &v17, &v30);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v18 = *(_QWORD *)(a1 + 800);
    v27 = *(_BYTE *)(a1 + 648);
    v28 = *(_DWORD *)(a1 + 640);
    v29 = v30;
    v15 = v17;
    v19 = *(_QWORD *)(a1 - 32);
    v16 = *(_DWORD *)(a1 + 560);
    v20 = (void *)(a1 + 24);
    sub_18007C41C(
      v2,
      byte_1800A0B6C,
      v3,
      v4,
      &v20,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v15,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v18);
  }
  for ( i = sub_180006258(a1); ; i = sub_1800062A4(v13) )
  {
    v13 = i;
    if ( !i )
      break;
    v6 = *(_QWORD *)(*(_QWORD *)(i + 88) + 16LL);
    if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    {
      v20 = *(void **)(v13 + 400);
      v19 = *(_QWORD *)(v13 + 392);
      v22 = *(_QWORD *)(v13 + 512);
      v12 = *(_BYTE *)(v13 + 544) & 1;
      v16 = v9;
      v27 = v12;
      v15 = *(_DWORD *)(v13 + 424);
      LOBYTE(v28) = *(_BYTE *)(v13 + 549);
      LODWORD(v18) = *(_DWORD *)(v13 + 112);
      v24 = (void *)(v13 + 124);
      v25 = (void *)(v13 + 252);
      v26[0] = *(_QWORD *)(v13 + 40);
      v21 = v6;
      v23 = v11;
      LOBYTE(v29) = v10;
      sub_18007CD98(
        v7,
        byte_1800A081C,
        v8,
        v9,
        (__int64)v26,
        &v25,
        &v24,
        (__int64)&v18,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v15,
        (__int64)&v27,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v16,
        (__int64)&v19,
        (__int64)&v20);
    }
  }
  sub_18000A110(a1);
  return sub_18002A490(a1 - 64, 0, 1, (__int64 (__fastcall *)(__int64, HANDLE, _QWORD, __int64))sub_18007DA90, 0LL);
}
