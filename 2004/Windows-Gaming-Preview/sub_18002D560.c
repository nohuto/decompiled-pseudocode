/*
 * XREFs of sub_18002D560 @ 0x18002D560
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_18003022C @ 0x18003022C (sub_18003022C.c)
 *     sub_180030270 @ 0x180030270 (sub_180030270.c)
 *     sub_1800308CC @ 0x1800308CC (sub_1800308CC.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D560(__int64 a1, HSTRING a2, __int64 a3, _BYTE *a4)
{
  int v7; // ebx
  _DWORD *v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  volatile signed __int32 *v11; // rcx
  __int64 v12; // r14
  __int128 v13; // xmm6
  int v15; // [rsp+38h] [rbp-39h] BYREF
  HSTRING newString; // [rsp+40h] [rbp-31h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-21h]
  _BYTE v19[8]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v20; // [rsp+60h] [rbp-11h] BYREF
  _OWORD v21[2]; // [rsp+78h] [rbp+7h] BYREF
  char v22; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+77h] BYREF

  v23 = a3;
  *a4 = 0;
  if ( !*(_BYTE *)(a1 + 184) )
    RoOriginateError(2147549183LL, 0LL);
  newString = 0LL;
  v7 = WindowsDuplicateString(a2, &newString);
  v15 = v7;
  if ( v7 >= 0 )
  {
    sub_1800308CC(&v20, &v23, &v15);
    *(_QWORD *)&v21[0] = 0LL;
    BYTE8(v21[0]) = 0;
    v7 = v15;
    if ( v15 < 0 )
    {
LABEL_30:
      sub_18000EC88((__int64)v21);
      sub_18000EC88((__int64)&v20);
      if ( v7 >= 0 )
        v7 = sub_18000D958();
      goto LABEL_32;
    }
    v18 = (_DWORD *)(a1 + 160);
    v8 = (_DWORD *)(a1 + 168);
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      if ( !*v8 )
        *v8 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
    }
    sub_18000DA2C((__int64)&v22);
    if ( **(int **)(a1 + 176) > 1 )
    {
      v9 = operator new(4uLL, (const struct std::nothrow_t *)&unk_18005AF88);
      v10 = v9;
      if ( v9 )
        *v9 = 1;
      else
        v10 = 0LL;
      if ( v10 )
      {
        v11 = *(volatile signed __int32 **)(a1 + 176);
        if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
          j_j__o_free(v11, 4LL);
        *(_QWORD *)(a1 + 176) = v10;
      }
    }
    v7 = sub_18003022C(a1 + 72, &newString, &v17);
    if ( v7 >= 0 )
    {
      v12 = v17;
      if ( v17 )
      {
        v13 = *(_OWORD *)(v17 + 8);
        sub_18000EC88((__int64)v21);
        v21[0] = v13;
        *(_OWORD *)(v12 + 8) = v20;
        *a4 = 1;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 88) == 0x7FFFFFFFLL )
          v7 = -2147024882;
        if ( v7 < 0 )
          goto LABEL_26;
        v7 = sub_180030270(a1 + 72, &newString, &v20, v19);
        if ( v7 < 0 )
          goto LABEL_26;
        newString = 0LL;
      }
      BYTE8(v20) = 0;
      *(_QWORD *)&v20 = 0LL;
    }
LABEL_26:
    if ( v18 )
    {
      if ( *v18 == 1 )
        *v8 += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
    }
    goto LABEL_30;
  }
LABEL_32:
  WindowsDeleteString(newString);
  return (unsigned int)v7;
}
