/*
 * XREFs of sub_180030490 @ 0x180030490
 * Callers:
 *     sub_18002E0A0 @ 0x18002E0A0 (sub_18002E0A0.c)
 *     sub_18002E0E0 @ 0x18002E0E0 (sub_18002E0E0.c)
 *     sub_180038BF8 @ 0x180038BF8 (sub_180038BF8.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000F674 @ 0x18000F674 (sub_18000F674.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

__int64 __fastcall sub_180030490(__int64 a1, unsigned int a2, _OWORD *a3, char a4)
{
  _DWORD *v4; // rbx
  RTL_SRWLOCK *v5; // r14
  unsigned int v10; // eax
  int v11; // esi
  unsigned int v12; // r8d
  int v13; // edx
  unsigned int v14; // eax
  void *v15; // rcx
  const void *v16; // rdx
  size_t v17; // r8
  char v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = (_DWORD *)(a1 + 104);
  v5 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v5->Ptr) )
      LODWORD(v5->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v10 = *(_DWORD *)(a1 + 72);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 72);
  if ( a2 > v10 )
  {
    v11 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_26;
  }
  if ( v10 >= 0x7FFFFFFF )
  {
    v11 = -2147024882;
    goto LABEL_26;
  }
  sub_18000DA2C((__int64)&v19);
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 72) + 1 <= v12 )
    goto LABEL_15;
  v13 = v12 >> 1;
  if ( v12 + 1 > (v12 >> 1) + v12 )
    v13 = 1;
  v11 = sub_18000F674(a1, v12 + v13);
  if ( v11 >= 0 )
  {
LABEL_15:
    v14 = *(_DWORD *)(a1 + 72);
    if ( a2 < v14 )
    {
      v15 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
      v16 = (const void *)(*(_QWORD *)(a1 + 88) + 16LL * a2);
      v17 = 16LL * (v14 - a2);
      if ( v17 )
      {
        if ( !v15 || !v16 )
        {
          *(_DWORD *)o__errno(v15, v16) = 22;
LABEL_22:
          o__invalid_parameter_noinfo();
          v11 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_24;
        }
        if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 76) - a2 - 1) < v17 )
        {
          *(_DWORD *)o__errno(v15, v16) = 34;
          goto LABEL_22;
        }
        memmove(v15, v16, v17);
      }
    }
LABEL_24:
    if ( v11 >= 0 )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = *a3;
      ++*(_DWORD *)(a1 + 72);
      ++*(_DWORD *)(a1 + 120);
    }
  }
LABEL_26:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  if ( v11 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v11;
}
