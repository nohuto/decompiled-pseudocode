/*
 * XREFs of GetWmiBiosThrottleStateInfo @ 0x1C000B790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetWmiBiosThrottleStateInfo(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  _DWORD *v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // r8
  __int64 i; // rcx
  int v19; // eax
  unsigned int *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  int *v27; // rax
  int v28; // eax

  v7 = 0;
  v8 = 128;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C0017018);
  v11 = v10;
  if ( a2 < 0x80 )
  {
    v27 = *(int **)(v10 + 488);
    if ( v27 )
    {
      v28 = *v27;
      if ( v28 )
        v8 = 40 * v28 + 88;
    }
LABEL_21:
    v7 = -1073741789;
    goto LABEL_22;
  }
  *(_BYTE *)a3 = byte_1C001CEB6;
  *(_BYTE *)(a3 + 1) = byte_1C001CEB7;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v10 + 56);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(v10 + 496);
  v12 = *(_QWORD *)(v10 + 272);
  if ( (v12 & 0x3000000) != 0 )
    v13 = 3;
  else
    v13 = (v12 & 0x300000) != 0;
  *(_DWORD *)(a3 + 16) = 0;
  v14 = (_DWORD *)(a3 + 32);
  *(_DWORD *)(a3 + 20) = 0;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_DWORD *)(a3 + 12) = v13;
  v15 = 0LL;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v11 + 56);
  do
  {
    v16 = *(unsigned __int8 *)(v11 + v15++ + 464);
    *v14++ = v16;
  }
  while ( v15 < 4 );
  v17 = (_DWORD *)(a3 + 56);
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(v11 + 468);
  for ( i = 0LL; i < 4; ++i )
  {
    v19 = *(unsigned __int8 *)(v11 + i + 476);
    *v17++ = v19;
  }
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(v11 + 480);
  v20 = *(unsigned int **)(v11 + 488);
  if ( !v20 )
  {
    *(_OWORD *)(a3 + 80) = 0LL;
    *(_OWORD *)(a3 + 96) = 0LL;
    *(_OWORD *)(a3 + 112) = 0LL;
    goto LABEL_22;
  }
  v21 = *v20;
  if ( (_DWORD)v21 )
    v8 = 40 * v21 + 88;
  if ( a2 < v8 )
    goto LABEL_21;
  *(_DWORD *)(a3 + 80) = v21;
  if ( (_DWORD)v21 )
  {
    v22 = 0LL;
    v23 = v21;
    v24 = (_DWORD *)(a3 + 96);
    do
    {
      v25 = *(_QWORD *)(v11 + 488);
      v22 += 20LL;
      *(v24 - 2) = *(_DWORD *)(v22 + v25 - 16);
      *(v24 - 1) = *(_DWORD *)(v22 + v25 - 12);
      *v24 = *(_DWORD *)(v22 + v25 - 8);
      v24 += 10;
      *(v24 - 9) = *(_DWORD *)(v22 + v25 - 4);
      v26 = *(_DWORD *)(v22 + v25);
      *((_QWORD *)v24 - 3) = 0LL;
      *((_QWORD *)v24 - 2) = 0LL;
      *(v24 - 8) = v26;
      --v23;
    }
    while ( v23 );
  }
LABEL_22:
  if ( a4 )
    *a4 = v8;
  return v7;
}
