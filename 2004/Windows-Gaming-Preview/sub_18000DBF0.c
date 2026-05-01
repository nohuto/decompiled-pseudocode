/*
 * XREFs of sub_18000DBF0 @ 0x18000DBF0
 * Callers:
 *     sub_180009FE4 @ 0x180009FE4 (sub_180009FE4.c)
 *     sub_18000C6D0 @ 0x18000C6D0 (sub_18000C6D0.c)
 *     sub_18000C6F0 @ 0x18000C6F0 (sub_18000C6F0.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_18000ED0C @ 0x18000ED0C (sub_18000ED0C.c)
 *     sub_18000F674 @ 0x18000F674 (sub_18000F674.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000DBF0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // eax
  size_t v14; // r8
  void *v15; // rcx
  char v17[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v7 = sub_18000ED0C(&v18, a3);
  if ( v7 < 0 )
  {
    *(_QWORD *)&v18 = 0LL;
    BYTE8(v18) = 0;
    goto LABEL_35;
  }
  v8 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v9 = *(_DWORD *)(a1 + 72);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 72);
  if ( a2 <= v9 )
  {
    if ( v9 >= 0x7FFFFFFF )
    {
      v7 = -2147024882;
      goto LABEL_29;
    }
    sub_18000DA2C((__int64)v17);
    v7 = 0;
    v11 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 72) + 1 > v11 )
    {
      v12 = v11 >> 1;
      if ( v11 + 1 > (v11 >> 1) + v11 )
        v12 = 1;
      v7 = sub_18000F674(a1, v11 + v12);
      if ( v7 < 0 )
        goto LABEL_29;
    }
    v13 = *(_DWORD *)(a1 + 72);
    if ( a2 < v13 )
    {
      v14 = 16LL * (v13 - a2);
      v15 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
      if ( v14 )
      {
        if ( v15 && *(_QWORD *)(a1 + 88) + 16LL * a2 )
        {
          if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 76) - a2 - 1) >= v14 )
          {
            memmove(v15, (const void *)(*(_QWORD *)(a1 + 88) + 16LL * a2), v14);
            goto LABEL_26;
          }
          *(_DWORD *)o__errno(v15, v10) = 34;
        }
        else
        {
          *(_DWORD *)o__errno(v15, v10) = 22;
        }
        o__invalid_parameter_noinfo();
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
    }
LABEL_26:
    if ( v7 >= 0 )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = v18;
      *(_QWORD *)&v18 = 0LL;
      BYTE8(v18) = 0;
      ++*(_DWORD *)(a1 + 72);
      ++*(_DWORD *)(a1 + 120);
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL * a2 + 8) )
        ++*(_DWORD *)(a1 + 80);
    }
    goto LABEL_29;
  }
  v7 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_29:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( v7 >= 0 )
    v7 = sub_18000D958();
LABEL_35:
  sub_18000EC88(&v18);
  return (unsigned int)v7;
}
