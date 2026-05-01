/*
 * XREFs of sub_1800042EC @ 0x1800042EC
 * Callers:
 *     sub_1800062C8 @ 0x1800062C8 (sub_1800062C8.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180021AD4 @ 0x180021AD4 (sub_180021AD4.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180072DEC @ 0x180072DEC (sub_180072DEC.c)
 */

void __fastcall sub_1800042EC(__int64 a1, int a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // [rsp+40h] [rbp-59h] BYREF
  __int64 v11; // [rsp+48h] [rbp-51h] BYREF
  __int64 v12; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v13[8]; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+A0h] [rbp+7h] BYREF
  __int64 *v15; // [rsp+C0h] [rbp+27h]
  int v16; // [rsp+C8h] [rbp+2Fh]
  int v17; // [rsp+CCh] [rbp+33h]

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    v17 = 0;
    v10 = v7;
    v16 = v4;
    v15 = &v10;
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1B82, 0, 0, 3u, &v14);
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 544) |= 8u;
    memset(v13, 0, sizeof(v13));
    v6 = *(_QWORD *)(a1 + 40);
    v13[1] = 0LL;
    v13[0] = v6;
    LODWORD(v13[2]) = 2;
    LODWORD(v13[3]) = a2;
    if ( (*(_BYTE *)(v5 + 128) & 2) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v5 + 104))(v13, *(_QWORD *)(v5 + 120));
    }
    else if ( (int)sub_180021AD4(v5 + 104, v13, 64LL, *(_QWORD *)(v5 + 112)) < 0 && (unsigned int)dword_1800B3218 > 4 )
    {
      if ( (unsigned __int8)sub_180010470(&dword_1800B3218, 0x400000000008LL) )
      {
        LODWORD(v10) = v13[2];
        v12 = v13[0];
        v11 = 0x1000000LL;
        sub_180072DEC(
          (unsigned int)&dword_1800B3218,
          (unsigned int)&unk_18009EB8B,
          v8,
          v9,
          (__int64)&v12,
          (__int64)&v10,
          (__int64)&v11);
      }
    }
  }
}
