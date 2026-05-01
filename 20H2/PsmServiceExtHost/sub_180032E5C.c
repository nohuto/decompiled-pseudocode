/*
 * XREFs of sub_180032E5C @ 0x180032E5C
 * Callers:
 *     sub_180032CE4 @ 0x180032CE4 (sub_180032CE4.c)
 * Callees:
 *     sub_180032FB8 @ 0x180032FB8 (sub_180032FB8.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006A954 @ 0x18006A954 (sub_18006A954.c)
 */

__int64 __fastcall sub_180032E5C(__int64 *a1, unsigned int a2, __int64 a3, __int16 a4)
{
  __int64 v4; // rbx
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // edx
  __int16 v12; // bx
  int *v13; // rdi
  __int64 v14; // r14
  __int64 v16; // rcx
  int v17; // [rsp+60h] [rbp-59h]
  int v18; // [rsp+64h] [rbp-55h] BYREF
  int v19; // [rsp+68h] [rbp-51h] BYREF
  int v20; // [rsp+6Ch] [rbp-4Dh] BYREF
  __int64 v21; // [rsp+70h] [rbp-49h]
  __int64 v22; // [rsp+78h] [rbp-41h] BYREF
  __int64 v23; // [rsp+80h] [rbp-39h] BYREF
  __int64 v24; // [rsp+88h] [rbp-31h] BYREF
  __int64 v25; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v26[14]; // [rsp+A0h] [rbp-19h] BYREF

  v4 = a2;
  memset(v26, 0, 0x40uLL);
  v8 = 4;
  v9 = 0LL;
  v10 = (2 * (a4 & 4)) | 1;
  if ( (a4 & 8) == 0 )
    v10 = 2 * (a4 & 4);
  v11 = v10 | 0x40;
  if ( (a4 & 0x20) == 0 )
    v11 = v10;
  v17 = v11;
  if ( (_DWORD)v4 )
  {
    v21 = v4;
    v12 = HIWORD(v26[7]);
    v13 = (int *)(a3 + 4);
    do
    {
      v14 = *a1;
      if ( *a1 != v9 )
      {
        if ( v9 )
        {
          sub_180032FB8(v9, v26);
          v14 = *a1;
        }
        memset(v26, 0, 0x40uLL);
        v11 = v17;
        v12 = a4;
        HIWORD(v26[7]) = a4;
        v9 = v14;
      }
      if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 32LL);
        v22 = *(_QWORD *)(v13 + 11);
        v23 = *(_QWORD *)(v13 + 5);
        v24 = *(_QWORD *)(v13 + 3);
        v18 = *v13;
        v20 = *(v13 - 1);
        v19 = v11;
        v25 = v16;
        sub_18006A954(
          v16,
          (unsigned int)&unk_18009C2EA,
          0,
          v8,
          (__int64)&v25,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22);
      }
      if ( (a4 & 4) != 0 )
      {
        if ( (*(_BYTE *)v13 & 8) != 0 )
        {
          v26[2] += *(_QWORD *)(v13 + 5);
        }
        else
        {
          v12 &= ~4u;
          HIWORD(v26[7]) = v12;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*(_BYTE *)v13 & 1) != 0 )
        {
          v26[3] += *(_QWORD *)(v13 + 3);
        }
        else
        {
          v12 &= ~8u;
          HIWORD(v26[7]) = v12;
        }
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( (*(_BYTE *)v13 & 0x40) != 0 )
        {
          v26[4] += *(_QWORD *)(v13 + 11);
        }
        else
        {
          v12 &= ~0x20u;
          HIWORD(v26[7]) = v12;
        }
      }
      v11 = v17;
      a1 += 2;
      v13 += 16;
      --v21;
    }
    while ( v21 );
  }
  return sub_180032FB8(v9, v26);
}
