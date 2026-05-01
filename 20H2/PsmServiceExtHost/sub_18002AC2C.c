/*
 * XREFs of sub_18002AC2C @ 0x18002AC2C
 * Callers:
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180037940 @ 0x180037940 (sub_180037940.c)
 *     sub_180037A20 @ 0x180037A20 (sub_180037A20.c)
 *     sub_18007F294 @ 0x18007F294 (sub_18007F294.c)
 */

void __fastcall sub_18002AC2C(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  if ( (*(_DWORD *)(a1 + 608) & 0x10000) == 0 )
  {
    v3 = a1 + 96;
    v4 = sub_180037A20(a1 + 96, *(_QWORD *)(a1 + 88) + 228LL, a2);
    if ( v4 < 0 )
    {
      if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
      {
        v10 = *(_QWORD *)(a1 + 88);
        v13 = 0x1000000LL;
        v14 = v10 + 228;
        v12 = v9;
        sub_18007F294(v8, &unk_1800A17DF);
      }
    }
    else if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v6 = *(_QWORD *)(a1 + 88);
      LODWORD(v13) = v4;
      v14 = v6 + 228;
      v7 = *(unsigned __int16 *)(a1 + 608);
      v11 = v3;
      LOWORD(v12) = v7;
      ((void (__fastcall *)(__int64, void *, __int64, _QWORD, __int64 *, int *, __int64 *, __int64 *))sub_180037940)(
        v7,
        &unk_1800A1721,
        v5,
        (unsigned int)v4,
        &v13,
        &v12,
        &v11,
        &v14);
    }
  }
}
