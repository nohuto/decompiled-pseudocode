/*
 * XREFs of sub_18003ADD8 @ 0x18003ADD8
 * Callers:
 *     sub_1800392D8 @ 0x1800392D8 (sub_1800392D8.c)
 *     sub_18003AF28 @ 0x18003AF28 (sub_18003AF28.c)
 *     sub_18003B0B8 @ 0x18003B0B8 (sub_18003B0B8.c)
 * Callees:
 *     sub_180007CC4 @ 0x180007CC4 (sub_180007CC4.c)
 *     sub_180007D94 @ 0x180007D94 (sub_180007D94.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003ADD8(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v5; // eax
  int v6; // esi
  __int64 (__fastcall *v7)(__int64, _QWORD, int *, int *, int *); // rax
  int v8; // ecx
  char v9; // r8
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r10d
  signed __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  unsigned int v16; // r9d
  signed __int64 v17; // rtt
  int i; // [rsp+50h] [rbp+20h] BYREF
  int v20; // [rsp+58h] [rbp+28h] BYREF
  int v21; // [rsp+60h] [rbp+30h] BYREF

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    i = 0;
    v5 = sub_180007CC4();
    v20 = 0;
    v6 = v5;
    v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))qword_18005ACA8;
    if ( qword_18005ACA8 || (v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))qword_18005ACF0) != 0LL )
      v8 = v7(11015710LL, 0LL, &v21, &v20, &i);
    else
      v8 = 0;
    v9 = BYTE1(v8) & 1;
    v10 = 2 * (v8 & 0x80 | (v20 != 0 ? 0x40 : 0));
    v11 = v8 & 0xFFFFFE7F;
    if ( v11 && (v10 |= (v11 & 0x3F) << 9, v9) )
      v12 = v21;
    else
      v12 = 0;
    v13 = *(_QWORD *)a2;
    v14 = v6 != 0 ? i : 0;
    for ( i = v14; ; v14 = i )
    {
      *(_QWORD *)a2 = v13;
      if ( (v13 & 4) != 0 )
      {
        v15 = v13;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = v12;
        v15 = v10 & 0x7F00 | v13 & 0xFFFF80FB | (v14 != 0 ? 4 : 0);
        *(_DWORD *)a2 = v15;
      }
      v16 = ((unsigned int)v13 >> 1) & 1;
      if ( !v16 )
        *(_DWORD *)a2 = v15 ^ (v10 ^ v15) & 0x80 | 2;
      v17 = v13;
      v13 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v13);
      if ( v17 == v13 )
        break;
    }
    if ( !v16 )
      sub_180007D94((volatile signed __int32 *)a1, 0, v6);
  }
  return a2;
}
