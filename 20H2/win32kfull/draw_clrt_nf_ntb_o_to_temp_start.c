/*
 * XREFs of draw_clrt_nf_ntb_o_to_temp_start @ 0x1C00E1190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall draw_clrt_nf_ntb_o_to_temp_start(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  unsigned int v7; // r13d
  _DWORD *v8; // r15
  int v9; // r10d
  unsigned __int8 *result; // rax
  _DWORD *v12; // r9
  int v13; // esi
  int v14; // ebp
  unsigned int v15; // ecx
  unsigned __int8 *v16; // r13
  unsigned __int8 *v17; // r9
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // edi
  unsigned int v23; // r11d
  unsigned int v24; // ebx
  __int64 v25; // [rsp+40h] [rbp+8h]
  __int64 v26; // [rsp+50h] [rbp+18h]

  v26 = a3;
  v7 = a5;
  v8 = (_DWORD *)(a1 + 20);
  v9 = a4;
  do
  {
    result = *(unsigned __int8 **)(v8 - 3);
    v12 = *(_DWORD **)result;
    v13 = *(_DWORD *)(*(_QWORD *)result + 12LL);
    if ( !v13 )
      goto LABEL_3;
    v14 = v12[2];
    result = (unsigned __int8 *)(a3 + v7 * (__int64)(*v8 + v12[1] - a7) + *v12 + *(v8 - 1) - v9);
    v15 = v7;
    v16 = (unsigned __int8 *)off_1C032A0D0;
    v17 = (unsigned __int8 *)(v12 + 4);
    v25 = (int)(v15 - v14);
    do
    {
      v18 = v14;
      do
      {
        v19 = *result;
        v20 = *v17;
        if ( !(_BYTE)v19 )
          goto LABEL_8;
        if ( (_BYTE)v20 )
        {
          v21 = 4 * v19;
          v22 = v16[4 * v20] + v16[v21];
          v23 = v16[4 * v20 + 1] + v16[v21 + 1];
          v24 = v16[4 * v20 + 2] + v16[v21 + 2];
          if ( v22 > 6 )
            v22 = 6;
          if ( v23 > 6 )
            v23 = 6;
          if ( v24 > 6 )
            v24 = 6;
          LOBYTE(v20) = gajStorage1[49 * v22 + 7 * v23 + v24];
LABEL_8:
          *result = v20;
        }
        ++result;
        ++v17;
        --v18;
      }
      while ( v18 );
      result += v25;
      --v13;
    }
    while ( v13 );
    v7 = a5;
    v9 = a4;
    a3 = v26;
LABEL_3:
    v8 += 6;
    --a2;
  }
  while ( a2 );
  return result;
}
