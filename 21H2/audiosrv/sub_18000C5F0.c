/*
 * XREFs of sub_18000C5F0 @ 0x18000C5F0
 * Callers:
 *     sub_18000C210 @ 0x18000C210 (sub_18000C210.c)
 *     sub_1800F2AF0 @ 0x1800F2AF0 (sub_1800F2AF0.c)
 *     sub_1800F40E0 @ 0x1800F40E0 (sub_1800F40E0.c)
 *     sub_180139A5C @ 0x180139A5C (sub_180139A5C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18000C5F0(__int64 a1, __int64 a2, _WORD *a3, int a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  __int64 v9; // r14
  _DWORD *v10; // rdi
  HRESULT v11; // esi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _WORD *v17; // rdx
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  _WORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdx
  _WORD *v25; // rdx
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+68h] [rbp-8h]
  LPVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+50h] BYREF
  int v38; // [rsp+C8h] [rbp+58h] BYREF

  v38 = a4;
  *a3 = 0;
  v9 = a5;
  *(_WORD *)a5 = 0;
  v10 = a7;
  *a7 = 0;
  ppv = 0LL;
  a7 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  a5 = 0LL;
  v29 = 0LL;
  pv = 0LL;
  v11 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v11 < 0 )
    goto LABEL_43;
  v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, _DWORD **))(*(_QWORD *)ppv + 40LL))(ppv, a2, &a7);
  if ( v11 < 0 )
    goto LABEL_43;
  v11 = (*(__int64 (__fastcall **)(_DWORD *, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)a7 + 24LL))(
          a7,
          &unk_18015B078,
          23LL,
          0LL,
          &v32);
  if ( v11 < 0 )
    goto LABEL_43;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 32LL))(v32, 0LL, &v31);
  if ( v11 < 0
    || (v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 64LL))(v31, &v30), v11 < 0)
    || (v11 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v30)(v30, &unk_18015AFA0, &a5), v11 < 0)
    || (v38 = 0, v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a5 + 32LL))(a5, &v38), v11 < 0)
    || (*v10 = (unsigned __int16)v38,
        v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a5 + 96LL))(a5, &v29),
        v11 < 0)
    || (v11 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v29 + 64LL))(v29, &pv), v11 < 0) )
  {
LABEL_43:
    v12 = pv;
    goto LABEL_44;
  }
  v12 = pv;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)pv + v13) );
  while ( *((_WORD *)pv + v13) != 92 )
    --v13;
  v14 = -1LL;
  do
    ++v14;
  while ( *((_WORD *)pv + v14) );
  if ( (unsigned __int64)(v14 - v13) <= 0x105 )
  {
    v15 = v13 + 1;
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)pv + v16) );
    if ( v15 <= v16 )
    {
      v17 = (char *)pv + 2 * v15;
      v18 = v9 - (2 * v13 + 2) - (_QWORD)pv;
      do
      {
        *(_WORD *)((char *)v17 + v18) = *v17;
        ++v15;
        ++v17;
        v19 = -1LL;
        do
          ++v19;
        while ( v12[v19] );
      }
      while ( v15 <= v19 );
    }
    v37 = 0LL;
    *(_OWORD *)pvar = 0LL;
    v35 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64 *))(*(_QWORD *)a7 + 32LL))(a7, 0LL, &v37);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v37 + 40LL))(
              v37,
              &unk_18015AF88,
              pvar);
      if ( v11 >= 0 )
      {
        if ( LOWORD(pvar[0]) == 31 )
        {
          v20 = pvar[1];
          v21 = -1LL;
          do
            ++v21;
          while ( *((_WORD *)pvar[1] + v21) );
          while ( *((_WORD *)pvar[1] + v21) != 58 )
            --v21;
          v22 = -1LL;
          do
            ++v22;
          while ( *((_WORD *)pvar[1] + v22) );
          if ( (unsigned __int64)(v22 - v21) > 0xC9 )
          {
            v11 = -2147024774;
          }
          else
          {
            v23 = v21 + 1;
            v24 = -1LL;
            do
              ++v24;
            while ( *((_WORD *)pvar[1] + v24) );
            if ( v23 <= v24 )
            {
              v25 = (char *)pvar[1] + 2 * v23;
              v26 = (char *)&a3[-v21 - 1] - (char *)pvar[1];
              do
              {
                *(_WORD *)((char *)v25 + v26) = *v25;
                ++v23;
                ++v25;
                v27 = -1LL;
                do
                  ++v27;
                while ( v20[v27] );
              }
              while ( v23 <= v27 );
            }
          }
        }
        else
        {
          v11 = -2147467259;
        }
      }
    }
    PropVariantClear(pvar);
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    goto LABEL_43;
  }
  v11 = -2147024774;
LABEL_44:
  CoTaskMemFree(v12);
  pv = 0LL;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( a7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a7 + 16LL))(a7);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v11;
}
