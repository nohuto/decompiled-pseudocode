/*
 * XREFs of sub_1800065A4 @ 0x1800065A4
 * Callers:
 *     sub_180004F18 @ 0x180004F18 (sub_180004F18.c)
 *     sub_180008168 @ 0x180008168 (sub_180008168.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_18002B21C @ 0x18002B21C (sub_18002B21C.c)
 *     sub_180034134 @ 0x180034134 (sub_180034134.c)
 */

__int64 __fastcall sub_1800065A4(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rbx
  int v6; // r14d
  unsigned __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  int v12; // ecx
  __int64 v13[7]; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  if ( _InterlockedIncrement64(a1 + 12) <= 1 )
    __fastfail(0xEu);
  v16 = *(_QWORD *)(a2 - 32);
  *(_QWORD *)(a2 + 688) = a1;
  sub_18000E1BC(a1);
  v5 = a1[7];
  if ( (a1[8] & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)(a1 + 7);
  LOBYTE(v4) = 0;
  v6 = a1[8] & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)sub_180034134(&v16, v5, v4) < 0 )
      {
        v7 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_16;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_16:
          LOBYTE(v4) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_17;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_17:
          LOBYTE(v4) = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx(a1 + 7, v5, v4, a2 + 704);
  if ( (((unsigned __int64)*(unsigned int *)(a2 + 648) >> 26) & 7) == 0 && (*((_DWORD *)a1 + 23))++ == -1 )
    __int2c();
  if ( (unsigned int)sub_1800067F0(a2) )
  {
    v12 = *((_DWORD *)a1 + 22) + 1;
    *((_DWORD *)a1 + 22) = v12;
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v17 = *(_QWORD *)(a2 - 32);
      v13[0] = *a1;
      v14 = 1;
      v15 = v12;
      sub_18002B21C(
        v12,
        (unsigned int)&unk_1800A0AA2,
        v8,
        v9,
        (__int64)v13,
        (__int64)&v15,
        (__int64)&v17,
        (__int64)&v14);
    }
  }
  return sub_18000E244(a1);
}
