/*
 * XREFs of sub_1800E4440 @ 0x1800E4440
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D7588 @ 0x1800D7588 (sub_1800D7588.c)
 */

__int64 __fastcall sub_1800E4440(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v9; // rcx
  int v10; // edi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  _DWORD *v13; // r10
  int v15; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-49h] BYREF
  __int64 v18; // [rsp+48h] [rbp-41h] BYREF
  char v19[32]; // [rsp+50h] [rbp-39h] BYREF
  int *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  __int64 *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  _QWORD *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]

  v4 = *a3;
  v16 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v4 + 248))(a3, &v16);
  if ( v10 >= 0 )
  {
    if ( v16 )
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 80) + 96LL))(
              *(_QWORD *)(a1 + 80),
              a2,
              v16,
              a4);
    if ( v10 >= 0 )
    {
      *(_QWORD *)(a4 + 48) = a1 & -(__int64)(a1 != 8);
      v11 = *(_QWORD *)(a1 + 264);
      while ( 1 )
      {
        v9 = (unsigned __int64)v11 >> 63;
        if ( v11 < 0 )
          break;
        if ( (_DWORD)v11 != 0x7FFFFFFF )
        {
          v9 = v11 + 1;
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), v11 + 1, v11);
          if ( v12 != v11 )
            continue;
        }
        goto LABEL_11;
      }
      sub_1800D7588((volatile signed __int32 *)(2 * v11 + 16));
    }
  }
LABEL_11:
  v13 = (_DWORD *)sub_180008448(v9, sub_1800B6240)[1];
  if ( *v13 > 4u )
  {
    v17 = a3;
    v15 = v10;
    v21 = 4;
    v26 = &v17;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v23 = &v18;
    v18 = a1 & -(__int64)(a1 != 8);
    v20 = &v15;
    v27 = 8;
    v24 = 8;
    sub_1800521E8((__int64)v13, byte_180167B29, 0LL, 0LL, 5, (__int64)v19);
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v10;
}
