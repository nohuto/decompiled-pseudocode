/*
 * XREFs of sub_18003AF70 @ 0x18003AF70
 * Callers:
 *     sub_1800392D8 @ 0x1800392D8 (sub_1800392D8.c)
 * Callees:
 *     sub_180007CC4 @ 0x180007CC4 (sub_180007CC4.c)
 *     sub_180007D94 @ 0x180007D94 (sub_180007D94.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall sub_18003AF70(volatile signed __int32 *a1, signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  __int64 (__fastcall *v6)(__int64, _QWORD, int *); // rax
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ecx
  bool v10; // al
  unsigned int v11; // r8d
  signed __int32 v12; // eax
  int v13; // ecx
  signed __int32 v14; // r10d
  signed __int32 v15; // edx
  int v16; // r9d
  int v18; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+38h] [rbp+10h]
  int v20; // [rsp+3Ch] [rbp+14h]

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = sub_180007CC4();
    v6 = (__int64 (__fastcall *)(__int64, _QWORD, int *))qword_18005AD58;
    if ( qword_18005AD58 || (v6 = (__int64 (__fastcall *)(__int64, _QWORD, int *))qword_18005AD60) != 0LL )
      v7 = v6(11015710LL, 0LL, &v18);
    else
      v7 = 0;
    v20 = 0;
    v8 = v7 & 0x80 | (4 * (v7 & 0x40));
    v9 = v7 & 0xFFFFFF3F;
    if ( v9 )
      v10 = v9 == 2;
    else
      v10 = 1;
    v11 = (8 * v10) | v8 & 0xFFFFFFE7 | (16 * v10);
    v19 = v11;
    v12 = *a2;
    v13 = v5 != 0 ? v18 : 0;
    v18 = v13;
    while ( 1 )
    {
      *a2 = v12;
      v14 = v12;
      v15 = v12;
      if ( v13 && (v12 & 1) == 0 )
      {
        v15 = v12 ^ ((unsigned __int16)v11 ^ (unsigned __int16)v12) & 0x118 | 1;
        *a2 = v15;
      }
      v16 = v12 & 2;
      if ( (v12 & 2) == 0 )
      {
        v15 = (v11 ^ v15) & 0x80 ^ v15 | 2;
        *a2 = v15;
      }
      v12 = _InterlockedCompareExchange(a1, v15, v12);
      if ( v14 == v12 )
        break;
      v13 = v18;
      v11 = v19;
    }
    if ( !v16 )
      sub_180007D94(a1, 0, v5);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v19 ^ (unsigned __int16)*a2) & 0x118;
  }
  return a2;
}
