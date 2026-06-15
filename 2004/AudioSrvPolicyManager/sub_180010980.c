/*
 * XREFs of sub_180010980 @ 0x180010980
 * Callers:
 *     sub_18001F850 @ 0x18001F850 (sub_18001F850.c)
 * Callees:
 *     sub_1800018C0 @ 0x1800018C0 (sub_1800018C0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 */

__int64 __fastcall sub_180010980(__int64 a1, int a2, int *a3)
{
  int v3; // r10d
  int v4; // r9d
  unsigned int v6; // eax
  BOOL v7; // edi
  int v8; // r9d
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  v3 = *(_DWORD *)(a1 + 208);
  v4 = 0;
  if ( a2 )
    v6 = v3 | 4;
  else
    v6 = v3 & 0xFFFFFFFB;
  *(_DWORD *)(a1 + 208) = v6;
  v7 = (v6 & 6) != 0;
  LOBYTE(v4) = (v3 & 6) != 0;
  v8 = v7 ^ v4;
  *a3 = v8;
  if ( v8 )
  {
    v9 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
    if ( *v9 > 4u )
    {
      LODWORD(v18) = v7;
      LODWORD(v16) = -1;
      LODWORD(v15) = -1;
      LODWORD(v17) = -1;
      v13 = *(_QWORD *)(a1 + 640);
      v14 = *(_QWORD *)(a1 + 24);
      sub_1800018C0(
        (__int64)v9,
        (unsigned __int8 *)dword_180046295,
        v10,
        v11,
        (void **)&v14,
        (__int64)&v13,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v16);
    }
  }
  return 0LL;
}
