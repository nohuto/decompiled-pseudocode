/*
 * XREFs of sub_180002EA8 @ 0x180002EA8
 * Callers:
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180002EA8(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r10
  int *v4; // rax
  int v5; // edx
  void **v6; // rax
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v12[2]; // [rsp+38h] [rbp-11h] BYREF
  __int64 v13; // [rsp+40h] [rbp-9h]
  unsigned __int16 *v14; // [rsp+50h] [rbp+7h]
  int v15; // [rsp+58h] [rbp+Fh]
  int v16; // [rsp+5Ch] [rbp+13h]
  void *v17; // [rsp+60h] [rbp+17h]
  int v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+6Ch] [rbp+23h]
  _WORD *v20; // [rsp+70h] [rbp+27h]
  int v21; // [rsp+78h] [rbp+2Fh]
  int v22; // [rsp+7Ch] [rbp+33h]
  _DWORD *v23; // [rsp+80h] [rbp+37h]
  __int64 v24; // [rsp+88h] [rbp+3Fh]

  result = sub_180008448(a1, sub_1800B6240);
  v3 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v3 > 4u )
  {
    v4 = *(int **)(a1 + 8);
    v24 = 4LL;
    v5 = *v4;
    v23 = v11;
    v6 = *(void ***)a1;
    v11[0] = v5;
    v7 = *v6;
    if ( *v6 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v7 = &unk_18015C744;
      v9 = 2;
    }
    v12[1] = 4;
    v14 = *(unsigned __int16 **)(v3 + 8);
    v20 = v7;
    v21 = v9;
    v22 = 0;
    v12[0] = 184549376;
    v13 = 0LL;
    v15 = *v14;
    v17 = &unk_1801669A6;
    v16 = 2;
    v10 = *(_QWORD *)(v3 + 32);
    v18 = 64;
    v19 = 1;
    v11[1] = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    return EtwEventWriteTransfer(v10, v12, 0LL);
  }
  return result;
}
