/*
 * XREFs of sub_1801305F0 @ 0x1801305F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801309F0 @ 0x1801309F0 (sub_1801309F0.c)
 */

__int64 __fastcall sub_1801305F0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v3 = *a2;
  v4 = 0;
  if ( !*a2 )
    v3 = a2[1] - 0x46000000000000C0LL;
  if ( !v3 )
  {
    v7 = (__int64)(a1 + 1);
    *a3 = v7 & -(__int64)(a1 != 0LL);
LABEL_75:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return (unsigned int)v4;
  }
  v8 = *a2 - 0x4B5C24D0FD7F2B29LL;
  if ( *a2 == 0x4B5C24D0FD7F2B29LL )
    v8 = a2[1] - 0x10CAF9392C5977B1LL;
  if ( !v8 )
  {
    if ( !a1[18] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
        *a3 = (__int64)(a1 + 1);
      return (unsigned int)v4;
    }
    v7 = (__int64)(a1 + 1);
    *a3 = v7;
    goto LABEL_75;
  }
  v9 = *a2 - 0x49C3ABA60E5ED805LL;
  if ( *a2 == 0x49C3ABA60E5ED805LL )
    v9 = a2[1] + 0x57B0637773D46571LL;
  if ( !v9 )
  {
    if ( !a1[20] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 2;
LABEL_72:
        *a3 = (__int64)v10;
        return (unsigned int)v4;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 2;
    goto LABEL_74;
  }
  v12 = *a2 - 0x4E95DDBC9E1D6A6DLL;
  if ( *a2 == 0x4E95DDBC9E1D6A6DLL )
    v12 = a2[1] - 0x6C8437BA64ADC7A4LL;
  if ( !v12 )
  {
    if ( !a1[19] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 3;
        goto LABEL_72;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 3;
LABEL_74:
    *a3 = (__int64)v11;
    v7 = (__int64)(a1 + 1);
    goto LABEL_75;
  }
  v13 = *a2 - 0x499AADD65FA00F27LL;
  if ( *a2 == 0x499AADD65FA00F27LL )
    v13 = a2[1] - 0x5BA71F52986B9D8ALL;
  if ( !v13 )
  {
    v14 = a1 + 21;
LABEL_30:
    if ( !*v14 )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 4;
        goto LABEL_72;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 4;
    goto LABEL_74;
  }
  v15 = *a2 - 0x44CE7436BAFE99D2LL;
  if ( *a2 == 0x44CE7436BAFE99D2LL )
    v15 = a2[1] - 0x56FFBFAF894D0E9ELL;
  if ( !v15 )
  {
    v14 = a1 + 22;
    goto LABEL_30;
  }
  v16 = *a2 - 0x49A0C177F851809CLL;
  if ( *a2 == 0x49A0C177F851809CLL )
    v16 = a2[1] + 0x54BC86FE90494D4FLL;
  if ( !v16 )
  {
    if ( !a1[25] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 6;
        goto LABEL_72;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 6;
    goto LABEL_74;
  }
  v17 = *a2 - 0x48EDFA194CEB0AABLL;
  if ( *a2 == 0x48EDFA194CEB0AABLL )
    v17 = a2[1] - 0x68B7E11A778757A8LL;
  if ( !v17 )
  {
    if ( !a1[23] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 5;
        goto LABEL_72;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 5;
    goto LABEL_74;
  }
  v18 = *a2 - 0x4101323625385759LL;
  if ( *a2 == 0x4101323625385759LL )
    v18 = a2[1] - 0x2D5DFB3D692543A9LL;
  if ( !v18 )
  {
    if ( !a1[26] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 7;
        goto LABEL_72;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 7;
    goto LABEL_74;
  }
  v19 = *a2 - 0x4132F9208AB91395LL;
  if ( *a2 == 0x4132F9208AB91395LL )
    v19 = a2[1] - 0x1797F60407A3F87LL;
  if ( !v19 )
  {
    if ( !a1[27] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 8;
        goto LABEL_72;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 8;
    goto LABEL_74;
  }
  v20 = *a2 - 0x4272F27445EBFF37LL;
  if ( *a2 == 0x4272F27445EBFF37LL )
    v20 = a2[1] + 0x38485631B7D3F263LL;
  if ( !v20 )
  {
    if ( !a1[24] )
    {
      v4 = sub_1801309F0();
      if ( v4 >= 0 )
      {
        v10 = a1 + 9;
        goto LABEL_72;
      }
      return (unsigned int)v4;
    }
    v11 = a1 + 9;
    goto LABEL_74;
  }
  return sub_1801309F0();
}
