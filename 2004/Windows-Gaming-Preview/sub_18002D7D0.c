/*
 * XREFs of sub_18002D7D0 @ 0x18002D7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_18003022C @ 0x18003022C (sub_18003022C.c)
 *     sub_180034E84 @ 0x180034E84 (sub_180034E84.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D7D0(__int64 a1, __int64 a2)
{
  int v3; // esi
  HSTRING v4; // rdi
  _DWORD *v5; // rbx
  RTL_SRWLOCK *v6; // r15
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  volatile signed __int32 *v9; // rcx
  HSTRING *v10; // rbx
  __int128 v11; // xmm6
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 i; // rax
  _DWORD *v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  char v19; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+48h] BYREF
  HSTRING *v21; // [rsp+B8h] [rbp+58h] BYREF

  v20 = a2;
  if ( !*(_BYTE *)(a1 + 184) )
  {
    v3 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    return (unsigned int)v3;
  }
  v4 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v5 = (_DWORD *)(a1 + 160);
  v17 = (_DWORD *)(a1 + 160);
  v6 = (RTL_SRWLOCK *)(a1 + 168);
  if ( *(_DWORD *)(a1 + 160) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
  }
  sub_18000DA2C((__int64)&v19);
  v21 = 0LL;
  v3 = sub_18003022C(a1 + 72, &v20, &v21);
  if ( v3 >= 0 )
  {
    if ( !v21 )
    {
      v3 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v3 >= 0 )
    {
      if ( **(int **)(a1 + 176) > 1 )
      {
        v7 = operator new(4uLL, (const struct std::nothrow_t *)&unk_18005AF88);
        v8 = v7;
        if ( v7 )
          *v7 = 1;
        else
          v8 = 0LL;
        if ( !v8 )
        {
          v3 = -2147024882;
          v4 = 0LL;
LABEL_28:
          v5 = v17;
          goto LABEL_29;
        }
        v9 = *(volatile signed __int32 **)(a1 + 176);
        if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
          j_j__o_free(v9, 4LL);
        *(_QWORD *)(a1 + 176) = v8;
      }
      v10 = v21;
      v4 = *v21;
      WindowsDeleteString(0LL);
      v11 = *(_OWORD *)(v10 + 1);
      sub_18000EC88((__int64)&v18);
      v18 = v11;
      v12 = (unsigned int)(*((_DWORD *)v10 + 8) % *(_DWORD *)(a1 + 96));
      v13 = *(_QWORD *)(a1 + 80);
      v14 = *(_QWORD *)(v13 + 8 * v12);
      if ( v10 == (HSTRING *)v14 )
        goto LABEL_25;
      for ( i = *(_QWORD *)(v14 + 24); (HSTRING *)i != v10; i = *(_QWORD *)(i + 24) )
        v14 = i;
      if ( v14 )
        *(_QWORD *)(v14 + 24) = v10[3];
      else
LABEL_25:
        *(_QWORD *)(v13 + 8 * v12) = v10[3];
      sub_180034E84(a1 + 72, v10);
      v3 = 0;
      goto LABEL_28;
    }
  }
LABEL_29:
  if ( v5 )
  {
    if ( *v5 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  sub_18000EC88((__int64)&v18);
  WindowsDeleteString(v4);
  if ( v3 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v3;
}
