/*
 * XREFs of sub_18000E6E0 @ 0x18000E6E0
 * Callers:
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180048308 @ 0x180048308 (sub_180048308.c)
 *     sub_180116778 @ 0x180116778 (sub_180116778.c)
 *     sub_1801236F8 @ 0x1801236F8 (sub_1801236F8.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB868 @ 0x1800BB868 (sub_1800BB868.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18000E6E0(__int64 a1, int a2, __int128 *a3, _QWORD *a4)
{
  void *v7; // rsi
  HRESULT v8; // ebx
  __int64 v9; // rcx
  char *v11; // rdi
  void *v12; // rbx
  void *v13; // [rsp+30h] [rbp-99h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-91h] BYREF
  __int64 v15; // [rsp+40h] [rbp-89h] BYREF
  __int64 v16; // [rsp+48h] [rbp-81h] BYREF
  __int64 v17; // [rsp+50h] [rbp-79h]
  __int64 v18; // [rsp+58h] [rbp-71h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-69h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v21; // [rsp+78h] [rbp-51h]
  PROPVARIANT v22[2]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v23; // [rsp+90h] [rbp-39h]
  __int128 v24; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD v25[6]; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v26; // [rsp+C8h] [rbp-1h] BYREF
  int v27; // [rsp+D8h] [rbp+Fh]

  v7 = 0LL;
  v13 = 0LL;
  ppv = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  *(_OWORD *)pvar = 0LL;
  v21 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == 1 )
    {
      v26 = xmmword_18015A8B0;
      v27 = 19;
    }
    else
    {
      if ( a2 != 3 )
      {
        v8 = -2147024809;
        goto LABEL_11;
      }
      v26 = xmmword_18015BB80;
      v27 = 29;
    }
  }
  else
  {
    *(_QWORD *)&v26 = 0x41B43EBB9A82A7DBLL;
    *((_QWORD *)&v26 + 1) = 0xFC181731B718BA83uLL;
    v27 = 1;
  }
  v25[0] = 590439624;
  v25[1] = 1283267372;
  v25[2] = 1907779772;
  v25[3] = 1730509416;
  v25[4] = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         v25,
         pvar);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
           *(_QWORD *)(a1 + 40),
           &v26,
           v22);
    if ( v8 >= 0 )
    {
      v8 = CoCreateInstance(&stru_18015B088, 0LL, 0x17u, &stru_18015B0C0, &ppv);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pvar[1], &v18);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v18 + 24LL))(v18, &unk_18015B078, 23LL);
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 56LL))(
                   v17,
                   LODWORD(v22[1]),
                   &v16);
            if ( v8 >= 0 )
            {
              v8 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v16 + 104LL))(
                     v16,
                     23LL,
                     &unk_18015B068,
                     &v15);
              if ( v8 >= 0 )
              {
                v24 = *a3;
                v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, LPVOID *))(*(_QWORD *)v15 + 24LL))(v15, &v24, &pv);
                if ( v8 >= 0 )
                {
                  v11 = (char *)pv;
                  v8 = sub_1800BB868(v9, 1LL, *((unsigned __int16 *)pv + 40) + 18LL, &v13);
                  if ( v8 < 0 )
                  {
                    v7 = v13;
                  }
                  else
                  {
                    v12 = v13;
                    memcpy(v13, v11 + 64, *((unsigned __int16 *)v11 + 40) + 18LL);
                    *a4 = v12;
                    v7 = 0LL;
                    v8 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  PropVariantClear(pvar);
  PropVariantClear(v22);
  CoTaskMemFree(v7);
  CoTaskMemFree(pv);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v8;
}
