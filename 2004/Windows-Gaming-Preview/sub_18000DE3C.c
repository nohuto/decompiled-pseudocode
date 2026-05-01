/*
 * XREFs of sub_18000DE3C @ 0x18000DE3C
 * Callers:
 *     sub_18000C6E0 @ 0x18000C6E0 (sub_18000C6E0.c)
 *     sub_18000C710 @ 0x18000C710 (sub_18000C710.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_18000F674 @ 0x18000F674 (sub_18000F674.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000DE3C(__int64 a1, unsigned int a2, char a3)
{
  _DWORD *v6; // rbx
  RTL_SRWLOCK *v7; // r14
  unsigned int v8; // eax
  int v9; // esi
  __int64 v10; // rax
  __int128 v11; // xmm6
  int v12; // r8d
  __int64 v13; // rdx
  void *v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  char v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h]

  *(_QWORD *)&v19 = 0LL;
  BYTE8(v19) = 0;
  v6 = (_DWORD *)(a1 + 104);
  v21 = a1 + 104;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
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
LABEL_16:
    RoOriginateError((unsigned int)v9, 0LL);
    goto LABEL_22;
  }
  sub_18000DA2C((__int64)&v20);
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(v10 + 16LL * a2 + 8) )
    --*(_DWORD *)(a1 + 80);
  v11 = *(_OWORD *)(v10 + 16LL * a2);
  sub_18000EC88(&v19);
  v19 = v11;
  v12 = *(_DWORD *)(a1 + 72);
  if ( a2 < v12 - 1 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    v14 = (void *)(v13 + 16LL * a2);
    if ( 16LL * (v12 - a2 - 1) )
    {
      if ( !v14 || !(v13 + 16LL * (a2 + 1)) )
      {
        *(_DWORD *)o__errno(v14, v13) = 22;
        o__invalid_parameter_noinfo();
        v9 = -2147418113;
        goto LABEL_16;
      }
      memmove(v14, (const void *)(v13 + 16LL * (a2 + 1)), 16LL * (v12 - a2 - 1));
      v12 = *(_DWORD *)(a1 + 72);
    }
  }
  ++*(_DWORD *)(a1 + 120);
  v15 = v12 - 1;
  *(_DWORD *)(a1 + 72) = v12 - 1;
  v16 = *(_DWORD *)(a1 + 76);
  v17 = v16 / 3;
  if ( v15 < v16 / 3 )
  {
    if ( v16 - 1 < v16 - v17 )
      v17 = 1;
    v9 = sub_18000F674(a1, v16 - v17);
  }
LABEL_22:
  if ( v6 )
  {
    if ( *v6 == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  sub_18000EC88(&v19);
  if ( v9 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v9;
}
