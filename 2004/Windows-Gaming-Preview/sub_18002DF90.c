/*
 * XREFs of sub_18002DF90 @ 0x18002DF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 */

__int64 __fastcall sub_18002DF90(__int64 a1, unsigned int a2, _OWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // r14
  RTL_SRWLOCK *v5; // rsi
  int v8; // edi
  __int64 v9; // rcx
  _OWORD *v10; // rdx
  _BYTE v12[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_DWORD *)(a1 + 104);
  v4 = a2;
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
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 72) )
  {
    v8 = -2147483637;
LABEL_9:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_11;
  }
  sub_18000DA2C((__int64)v12);
  v8 = 0;
  v10 = (_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v4);
  if ( !v10 )
  {
    *(_DWORD *)o__errno(v9, 0LL) = 22;
    o__invalid_parameter_noinfo();
    v8 = -2147418113;
    goto LABEL_9;
  }
  *v10 = *a3;
  ++*(_DWORD *)(a1 + 120);
LABEL_11:
  if ( v3 )
  {
    if ( *v3 == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  if ( v8 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v8;
}
