/*
 * XREFs of sub_180072790 @ 0x180072790
 * Callers:
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 *     sub_180071DF0 @ 0x180071DF0 (sub_180071DF0.c)
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18007216C @ 0x18007216C (sub_18007216C.c)
 *     sub_180072248 @ 0x180072248 (sub_180072248.c)
 */

char __fastcall sub_180072790(__int64 a1, char a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r10
  char v17; // r11
  __int64 v18; // rbx
  char v20; // [rsp+88h] [rbp-80h] BYREF
  char v21; // [rsp+89h] [rbp-7Fh] BYREF
  char v22; // [rsp+8Ah] [rbp-7Eh] BYREF
  char v23; // [rsp+8Bh] [rbp-7Dh] BYREF
  unsigned int v24; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int16 v25; // [rsp+90h] [rbp-78h] BYREF
  __int16 v26; // [rsp+92h] [rbp-76h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32[10]; // [rsp+C8h] [rbp-40h] BYREF

  v5 = *(_DWORD *)(a1 + 1284);
  if ( (v5 & 1) != 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      LOBYTE(v5) = sub_180010470((__int64)&dword_1800B31E0, 9LL);
      if ( (_BYTE)v5 )
      {
        v11 = *(_QWORD *)(a1 + 1320);
        v27 = *(_QWORD *)(v11 + 32);
        v28 = v11 + 88;
        v29 = *(_QWORD *)(a1 + 1752);
        v20 = a2;
        v24 = a3;
        LOBYTE(v5) = sub_18007216C(
                       v11,
                       byte_18009D1BD,
                       v9,
                       v10,
                       (__int64)&v29,
                       (void **)&v28,
                       (__int64)&v27,
                       (__int64)&v24,
                       (__int64)&v20);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1284) = v5 | 1;
    v24 = 16776960;
    *(_DWORD *)(a1 + 1772) = GetTickCount();
    LOBYTE(v24) = a2;
    if ( dword_1800B31E0 )
    {
      sub_1800100D0(*(_QWORD *)(*(_QWORD *)(a1 + 1312) + 64LL), v32);
      v12 = a5 ? *(_QWORD *)(a5 + 1752) : -1LL;
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 0x400000000009LL) )
      {
        v29 = v32[3];
        v28 = v32[6];
        v26 = *(_WORD *)(a1 + 1336);
        v23 = *(_BYTE *)(a1 + 1288);
        v31 = *(_QWORD *)(a1 + 1752);
        v20 = a2;
        LODWORD(v27) = a3;
        v25 = v15;
        v30 = v12;
        v21 = v17;
        v22 = v16;
        sub_180072248(
          v13,
          byte_18009D2BD,
          v14,
          v15,
          (__int64)&v31,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v30,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v27,
          (__int64)&v20,
          (__int64)&v28,
          (__int64)&v29);
      }
    }
    v18 = *(_QWORD *)(a1 + 1712);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, *(_QWORD *)(a1 + 1720), v24);
    LOBYTE(v5) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v5;
}
