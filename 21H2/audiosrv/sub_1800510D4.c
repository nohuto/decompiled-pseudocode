/*
 * XREFs of sub_1800510D4 @ 0x1800510D4
 * Callers:
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 *     sub_180050C80 @ 0x180050C80 (sub_180050C80.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800510D4(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
{
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  _DWORD v13[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+40h] [rbp-19h]
  unsigned __int16 *v15; // [rsp+50h] [rbp-9h]
  int v16; // [rsp+58h] [rbp-1h]
  int v17; // [rsp+5Ch] [rbp+3h]
  unsigned __int8 *v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]
  _WORD *v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  __int64 v24; // [rsp+80h] [rbp+27h]
  __int64 v25; // [rsp+88h] [rbp+2Fh]

  v24 = a6;
  v25 = 1LL;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &unk_18015C744;
    v10 = 2;
  }
  v13[0] = *a2 << 24;
  v22 = v10;
  v13[1] = *(unsigned __int16 *)(a2 + 1);
  v14 = *(_QWORD *)(a2 + 3);
  v15 = *(unsigned __int16 **)(a1 + 8);
  v21 = v8;
  v23 = 0;
  v16 = *v15;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  v11 = *(_QWORD *)(a1 + 32);
  v17 = 2;
  v20 = 1;
  return EtwEventWriteTransfer(v11, v13, 0LL);
}
