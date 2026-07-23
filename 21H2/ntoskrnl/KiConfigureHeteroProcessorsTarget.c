/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x140512300
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(__int64 a1, _BYTE *a2, __int64 a3, __int64 i)
{
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rbp
  _BYTE *v6; // rbx
  signed __int32 v7; // eax
  unsigned int v8; // esi
  __int64 *v9; // r9
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rax
  _BYTE *v23; // r11
  _BYTE *v24; // r10
  unsigned int v25; // ebx
  __int64 *v26; // rcx
  signed __int32 v27; // eax
  unsigned int v28; // ebx
  __int64 result; // rax
  _DWORD v30[14]; // [rsp+20h] [rbp-38h] BYREF
  int v31; // [rsp+78h] [rbp+20h] BYREF

  v4 = i;
  v31 = 0;
  v5 = (volatile signed __int32 *)a3;
  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)i);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)v4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v31, (__int64)a2, a3, i);
  }
  else
  {
    *(_DWORD *)i = v8 | *(_DWORD *)(i + 4);
  }
  if ( !KeGetPcr()->Prcb.Number )
  {
    a2 = *(_BYTE **)v6;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v9 = KiProcessorBlock;
      a2 += 8;
      v10 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v11 = *v9;
        v12 = *(unsigned __int8 *)(*v9 + 208);
        *(_BYTE *)(v11 + 33210) = *(a2 - 1);
        *(_BYTE *)(v11 + 33209) = *a2;
        *(_BYTE *)(v11 + 33208) = *(a2 - 2);
        v13 = &qword_140CFDA78[2 * v12];
        v14 = *(_QWORD *)(v11 + 200);
        if ( *a2 )
          *v13 &= ~v14;
        else
          *v13 |= v14;
        a2 += 3;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    a3 = 0LL;
    for ( i = 0LL; (unsigned __int16)i < (unsigned __int16)KeNumberNodes; LOWORD(i) = i + 1 )
    {
      v15 = *(_QWORD *)(KeNodeBlock[(unsigned __int16)i] + 136)
          - ((*(_QWORD *)(KeNodeBlock[(unsigned __int16)i] + 136) >> 1) & 0x5555555555555555LL);
      a2 = (_BYTE *)(v15 & 0x3333333333333333LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v15 & 0x3333333333333333LL)
                           + ((v15 >> 2) & 0x3333333333333333LL)
                           + (((v15 & 0x3333333333333333LL) + ((v15 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
      {
        if ( a3 )
        {
          a3 = 0LL;
          break;
        }
        a3 = KeNodeBlock[(unsigned __int16)i];
      }
    }
    KeHeteroSystem = 0;
    KeHeteroSystemVirtual = 0;
    KeHeteroSystemQos = 0;
    if ( a3 )
    {
      if ( *((_DWORD *)v6 + 3) )
      {
        KeHeteroSystem = 1;
        KeHeteroSystemVirtual = 1;
        KeHeteroSystemQos = 1;
        goto LABEL_48;
      }
      if ( *((_DWORD *)v6 + 4) )
      {
        v16 = *(unsigned __int16 *)(a3 + 144);
        v17 = *((_DWORD *)v6 + 2);
        KeHeteroSystem = 1;
        KeHeteroSystemQos = v17;
        if ( (unsigned __int16)v16 >= *((_WORD *)v6 + 12) )
          v18 = 0LL;
        else
          v18 = *(_QWORD *)&v6[8 * v16 + 32];
        if ( (unsigned __int16)v16 >= *((_WORD *)v6 + 96) )
          v19 = 0LL;
        else
          v19 = *(_QWORD *)&v6[8 * v16 + 200];
        if ( (unsigned __int16)v16 >= *((_WORD *)v6 + 180) )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)&v6[8 * v16 + 368];
        if ( (unsigned __int16)v16 >= *((_WORD *)v6 + 264) )
          v21 = 0LL;
        else
          v21 = *(_QWORD *)&v6[8 * v16 + 536];
        v22 = *(_QWORD *)(a3 + 136);
        i = v22 & v18;
        v23 = (_BYTE *)(v22 & v19);
        a2 = (_BYTE *)(v22 & v20);
        v24 = (_BYTE *)(v22 & v21);
      }
      else
      {
        a2 = *(_BYTE **)(a3 + 136);
        v24 = a2;
        i = (__int64)a2;
        v23 = a2;
      }
      v25 = 1;
      v26 = (__int64 *)(a3 + 224);
      while ( 1 )
      {
        if ( v25 == 1 )
        {
          *(v26 - 2) = (__int64)v23;
          *(v26 - 1) = i;
          *v26 = i;
          goto LABEL_47;
        }
        if ( v25 == 2 )
          break;
        if ( v25 == 3 )
        {
          *(v26 - 2) = (__int64)v24;
          *(v26 - 1) = (__int64)a2;
          *v26 = (__int64)a2;
        }
        else if ( v25 == 4 )
        {
          *(v26 - 2) = (__int64)v24;
          *(v26 - 1) = (__int64)a2;
LABEL_45:
          *v26 = *(_QWORD *)(a3 + 136);
        }
LABEL_47:
        ++v25;
        v26 += 3;
        if ( v25 >= 5 )
          goto LABEL_48;
      }
      *(v26 - 2) = (__int64)v23;
      *(v26 - 1) = i;
      goto LABEL_45;
    }
  }
LABEL_48:
  v27 = _InterlockedDecrement((volatile signed __int32 *)v4);
  v28 = ~v27 & 0x80000000;
  if ( (v27 & 0x7FFFFFFF) != 0 )
  {
    v30[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)v4 & 0x80000000;
      if ( (_DWORD)result == v28 )
        break;
      KeYieldProcessorEx(v30, (__int64)a2, a3, i);
    }
  }
  else
  {
    result = v28 | *(_DWORD *)(v4 + 4);
    *(_DWORD *)v4 = result;
  }
  _InterlockedDecrement(v5);
  return result;
}
