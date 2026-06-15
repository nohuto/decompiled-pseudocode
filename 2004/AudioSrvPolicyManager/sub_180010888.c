/*
 * XREFs of sub_180010888 @ 0x180010888
 * Callers:
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 *     sub_18002C770 @ 0x18002C770 (sub_18002C770.c)
 * Callees:
 *     sub_1800018C0 @ 0x1800018C0 (sub_1800018C0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 */

int __fastcall sub_180010888(__int64 a1, int a2, int *a3)
{
  int v4; // ecx
  unsigned int v6; // eax
  BOOL v7; // r14d
  ULONGLONG TickCount64; // rax
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rcx
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+58h] [rbp-8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF

  v4 = *(_DWORD *)(a1 + 208);
  if ( a2 )
    v6 = v4 | 2;
  else
    v6 = v4 & 0xFFFFFFFD;
  *(_DWORD *)(a1 + 208) = v6;
  v7 = (v6 & 6) != 0;
  LODWORD(TickCount64) = v4 ^ v6;
  v9 = v7 ^ ((v4 & 6) != 0);
  if ( (TickCount64 & 2) != 0 && !a2 )
  {
    TickCount64 = GetTickCount64();
    *(_QWORD *)(a1 + 608) = TickCount64;
  }
  if ( a3 )
    *a3 = v9;
  if ( v9 )
  {
    TickCount64 = (ULONGLONG)sub_1800055CC();
    v12 = *(_DWORD **)(TickCount64 + 8);
    if ( *v12 > 4u )
    {
      LODWORD(v19) = v7;
      LODWORD(v17) = -1;
      LODWORD(v16) = -1;
      LODWORD(v18) = -1;
      v14 = *(_QWORD *)(a1 + 640);
      v15 = *(_QWORD *)(a1 + 24);
      LODWORD(TickCount64) = sub_1800018C0(
                               (__int64)v12,
                               (unsigned __int8 *)dword_180046295,
                               v10,
                               v11,
                               (void **)&v15,
                               (__int64)&v14,
                               (__int64)&v19,
                               (__int64)&v18,
                               (__int64)&v16,
                               (__int64)&v17);
    }
  }
  return TickCount64;
}
