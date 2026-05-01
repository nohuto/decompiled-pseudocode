/*
 * XREFs of sub_18003067C @ 0x18003067C
 * Callers:
 *     sub_18002E0D0 @ 0x18002E0D0 (sub_18002E0D0.c)
 *     sub_18002E110 @ 0x18002E110 (sub_18002E110.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000F674 @ 0x18000F674 (sub_18000F674.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

__int64 __fastcall sub_18003067C(__int64 a1, unsigned int a2, char a3)
{
  _DWORD *v3; // rbx
  RTL_SRWLOCK *v4; // r14
  unsigned int v8; // eax
  int v9; // esi
  __int64 v10; // rcx
  void *v11; // rax
  const void *v12; // rdx
  size_t v13; // r8
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_DWORD *)(a1 + 104);
  v4 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v8 = *(_DWORD *)(a1 + 72);
  if ( a3 )
    a2 = v8 - 1;
  if ( a2 >= v8 )
  {
    v9 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v9, 0LL);
    goto LABEL_20;
  }
  sub_18000DA2C((__int64)&v18);
  v10 = *(unsigned int *)(a1 + 72);
  v9 = 0;
  if ( a2 < (int)v10 - 1 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * a2);
    v12 = (const void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
    v13 = 16LL * ((unsigned int)v10 - a2 - 1);
    if ( v13 )
    {
      if ( !v11 || !v12 )
      {
        *(_DWORD *)o__errno(v10, v12) = 22;
        o__invalid_parameter_noinfo();
        v9 = -2147418113;
        goto LABEL_14;
      }
      memmove(v11, v12, v13);
      LODWORD(v10) = *(_DWORD *)(a1 + 72);
    }
  }
  ++*(_DWORD *)(a1 + 120);
  v14 = *(_DWORD *)(a1 + 76);
  v15 = v10 - 1;
  *(_DWORD *)(a1 + 72) = v15;
  v16 = v14 / 3;
  if ( v15 < v14 / 3 )
  {
    if ( v14 - 1 < v14 - v16 )
      v16 = 1;
    v9 = sub_18000F674(a1, v14 - v16);
  }
LABEL_20:
  if ( v3 )
  {
    if ( *v3 == 1 )
      LODWORD(v4->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v4);
  }
  if ( v9 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v9;
}
