/*
 * XREFs of sub_18000C520 @ 0x18000C520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_18000ED0C @ 0x18000ED0C (sub_18000ED0C.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18000C520(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  int v5; // esi
  _DWORD *v6; // r14
  __int64 v7; // rdx
  __int128 *v8; // rcx
  __int128 v9; // xmm6
  __int128 v11; // [rsp+38h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h]
  unsigned __int8 v14; // [rsp+C8h] [rbp+48h] BYREF

  v3 = a2;
  *(_QWORD *)&v12 = 0LL;
  BYTE8(v12) = 0;
  *(_QWORD *)&v11 = 0LL;
  BYTE8(v11) = 0;
  v5 = sub_18000ED0C(&v11, a3);
  if ( v5 < 0 )
  {
    *(_QWORD *)&v11 = 0LL;
    BYTE8(v11) = 0;
    goto LABEL_20;
  }
  v6 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v6 )
      *v6 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) )
  {
    sub_18000DA2C(&v14, *(unsigned __int8 *)(a1 + 125), a1 + 128);
    v5 = 0;
    v8 = (__int128 *)(16 * v3 + *(_QWORD *)(a1 + 88));
    if ( v8 )
    {
      v13 = *v8;
      v9 = v13;
      *v8 = v11;
      *(_QWORD *)&v11 = 0LL;
      BYTE8(v11) = 0;
      ++*(_DWORD *)(a1 + 120);
      sub_18000EC88(&v12);
      v12 = v9;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16 * v3 + 8) )
        ++*(_DWORD *)(a1 + 80);
      if ( BYTE8(v13) )
        --*(_DWORD *)(a1 + 80);
      goto LABEL_16;
    }
    *(_DWORD *)o__errno(0LL, v7) = 22;
    o__invalid_parameter_noinfo();
    v5 = -2147418113;
  }
  else
  {
    v5 = -2147483637;
  }
  RoOriginateError((unsigned int)v5, 0LL);
LABEL_16:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v6 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
LABEL_20:
  sub_18000EC88(&v11);
  sub_18000EC88(&v12);
  if ( v5 >= 0 )
    return (unsigned int)sub_18000D958(v14, *(unsigned __int8 *)(a1 + 124), a1, 3LL, v3);
  return (unsigned int)v5;
}
