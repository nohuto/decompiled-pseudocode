/*
 * XREFs of sub_180038780 @ 0x180038780
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180062844 @ 0x180062844 (sub_180062844.c)
 *     sub_1800CDE40 @ 0x1800CDE40 (sub_1800CDE40.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180038780(_QWORD *a1, __int64 a2, unsigned int a3, int a4, char *String)
{
  __int64 v6; // r14
  const char *v9; // rdi
  char result; // al
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // r14
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  __int64 v17; // r15
  __int64 v18; // rcx
  int v19; // r15d
  bool v20; // zf
  __int64 v21; // rsi
  unsigned int v22; // ecx
  bool v23; // di
  __int64 v24; // rcx
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+48h] [rbp-38h]
  int v27; // [rsp+4Ch] [rbp-34h]
  __int64 v28; // [rsp+50h] [rbp-30h] BYREF
  int v29; // [rsp+58h] [rbp-28h] BYREF
  int v30; // [rsp+5Ch] [rbp-24h]
  int v31; // [rsp+60h] [rbp-20h]
  int v32; // [rsp+64h] [rbp-1Ch]
  int v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+6Ch] [rbp-14h]

  v6 = a3;
  v9 = String;
  result = sub_1800CDE40(a1);
  if ( !result )
    return result;
  v32 = 0;
  v11 = a4 - 1;
  if ( !v11 )
  {
    v30 = 1;
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v30 = 2;
    goto LABEL_8;
  }
  if ( v12 != 1 )
  {
    v30 = 0;
LABEL_8:
    v32 = 0x10000;
    goto LABEL_10;
  }
  v30 = 3;
  v32 = 196608;
LABEL_10:
  v31 = 4;
  v29 = v6;
  v33 = 0;
  v34 = 0;
  sub_180062844(a1, v6, 7LL);
  v25 = a2;
  v26 = 0;
  v27 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = a1[10];
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v15 + 8);
      if ( !v16 )
        break;
      if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) )
      {
        v13 = a1[9];
        v14 = (volatile signed __int32 *)a1[10];
        if ( v14 )
          _InterlockedIncrement(v14 + 2);
        break;
      }
    }
  }
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v28 = 0LL;
  sub_180024694(v13, &v28);
  v17 = v28;
  v18 = a1[15];
  if ( v18 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *, _QWORD *))(*(_QWORD *)v17 + 24LL))(
          v17,
          &v29,
          &v25,
          a1 + 15);
  sub_1800265A4(v13, v19);
  v20 = v19 == 0;
  if ( v19 >= 0 )
  {
    if ( *((_QWORD *)String + 3) >= 0x10uLL )
      v9 = *(const char **)String;
    v21 = a1[15];
    if ( v21 )
    {
      if ( v9 )
        v22 = strnlen(v9, 0x7FFFFFFFuLL);
      else
        v22 = 0;
      (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v21 + 40LL))(
        v21,
        &unk_1801D6870,
        v22,
        v9);
    }
    v20 = v19 == 0;
  }
  v23 = v20;
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v14 && !_InterlockedDecrement(v14 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
    if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return v23;
}
