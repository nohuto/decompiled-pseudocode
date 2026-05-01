/*
 * XREFs of sub_18007DC40 @ 0x18007DC40
 * Callers:
 *     sub_180003F74 @ 0x180003F74 (sub_180003F74.c)
 *     sub_18007DAF4 @ 0x18007DAF4 (sub_18007DAF4.c)
 * Callees:
 *     sub_18003CB74 @ 0x18003CB74 (sub_18003CB74.c)
 *     sub_18003CC4C @ 0x18003CC4C (sub_18003CC4C.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_180077554 @ 0x180077554 (sub_180077554.c)
 *     sub_1800775D0 @ 0x1800775D0 (sub_1800775D0.c)
 *     sub_1800776D8 @ 0x1800776D8 (sub_1800776D8.c)
 *     sub_18007C800 @ 0x18007C800 (sub_18007C800.c)
 */

__int64 __fastcall sub_18007DC40(__int64 a1)
{
  int v2; // r13d
  char v3; // r15
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  char v9; // bl
  unsigned __int8 v10; // di
  int v11; // eax
  wchar_t *v12; // rsi
  wchar_t *i; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  wchar_t *v16; // r12
  __int64 v17; // rcx
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *Context; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  void *v22; // [rsp+68h] [rbp-8h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF
  wchar_t *v24; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int8 v25; // [rsp+C8h] [rbp+58h] BYREF

  v19 = 0LL;
  v2 = 0;
  v24 = 0LL;
  v3 = 3;
  v4 = sub_18003CC4C();
  LOBYTE(v5) = sub_18003CB74();
  v8 = v5;
  if ( v4 )
  {
    if ( (int)sub_1800774AC(a1, &v23) < 0 )
    {
      v3 = 1;
      v9 = 8;
      goto LABEL_33;
    }
    if ( !v23 )
    {
      v10 = 1;
      v9 = 8;
      v3 = 2;
      goto LABEL_34;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( !v8 )
  {
    v9 = 1;
LABEL_33:
    v10 = 0;
    goto LABEL_34;
  }
  if ( (int)sub_1800776D8(a1) < 0 )
  {
    v9 = 0;
    goto LABEL_33;
  }
  v2 = 1;
  if ( (int)sub_180077554(a1, (__int64)&v19) < 0 )
  {
    v9 = 2;
    goto LABEL_33;
  }
  if ( (int)EdpUtilIsAppEnlightened(v19, &v23) < 0 )
  {
    v9 = 3;
    goto LABEL_33;
  }
  if ( v23 )
  {
    v9 = 4;
    goto LABEL_33;
  }
  v11 = sub_1800775D0((PSID)(a1 + 488), &v24);
  v12 = v24;
  if ( v11 >= 0 )
  {
    if ( v24 && *v24 )
    {
      for ( i = v24; ; i = 0LL )
      {
        v16 = wcstok_s(i, Delimiter, &Context);
        if ( !v16 )
        {
          v9 = 8;
          goto LABEL_28;
        }
        v14 = 0;
        v15 = *(_QWORD *)v19;
        if ( *(_DWORD *)(*(_QWORD *)v19 + 4LL) )
          break;
LABEL_23:
        ;
      }
      while ( wcsicmp(v16, *(const wchar_t **)(v15 + 16LL * v14 + 24)) )
      {
        ++v14;
        v15 = *(_QWORD *)v19;
        if ( v14 >= *(_DWORD *)(*(_QWORD *)v19 + 4LL) )
          goto LABEL_23;
      }
      v10 = 1;
      v9 = 7;
      goto LABEL_29;
    }
    v9 = 6;
  }
  else
  {
    v9 = 5;
  }
LABEL_28:
  v10 = 0;
LABEL_29:
  if ( v12 )
    EdpFree(v12);
LABEL_34:
  v17 = v19;
  if ( v19 )
    EdpUtilFreeEnterpriseContext();
  if ( v2 )
    RevertToSelf();
  if ( (unsigned int)dword_1800B3218 > 5 )
  {
    v21 = *(_QWORD *)(a1 - 32);
    v22 = (void *)(a1 + 24);
    LOBYTE(v23) = v3;
    LOBYTE(v24) = v9;
    v25 = v10;
    sub_18007C800(v17, byte_1800A0A01, v6, v7, &v22, (__int64)&v21, (__int64)&v25, (__int64)&v24, (__int64)&v23);
  }
  return v10;
}
