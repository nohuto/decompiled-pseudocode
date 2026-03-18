/*
 * XREFs of ComputeInputColorInfo @ 0x1C00701B8
 * Callers:
 *     SetupAAHeader @ 0x1C006F890 (SetupAAHeader.c)
 *     GetDstBFInfo @ 0x1C0260FF8 (GetDstBFInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall ComputeInputColorInfo(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // rax
  _BYTE *v6; // r10
  int v7; // ebx
  __int64 (__fastcall *v8)(); // rax
  _BYTE *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 (__fastcall *v13)(); // rax
  _BYTE *v14; // rcx
  unsigned __int8 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // esi
  int v19; // edx
  int v20; // ebx
  char v21; // cl
  char v22; // bl
  unsigned __int8 v23; // cl
  int v24; // ecx
  bool v25; // sf
  int v26; // edx

  v5 = a3;
  v6 = (_BYTE *)(a5 + 64);
  if ( a1 )
  {
    v7 = *(unsigned __int16 *)(a5 + 2);
    if ( *(_WORD *)(a5 + 2) )
    {
      v9 = *(_BYTE **)(a5 + 80);
      v10 = BYTE1(SrcOrderTable[v5]);
      v11 = BYTE2(SrcOrderTable[v5]);
      v12 = HIBYTE(SrcOrderTable[v5]);
      if ( *(_BYTE *)(a5 + 65) == 1 )
      {
        v13 = Input1BPPToAA24;
      }
      else
      {
        if ( *(_BYTE *)(a5 + 65) == 2 )
        {
LABEL_22:
          v13 = Input4BPPToAA24;
          goto LABEL_17;
        }
        if ( *(_BYTE *)(a5 + 65) != 3 && *(unsigned __int8 *)(a5 + 65) != 254 )
        {
          if ( *(unsigned __int8 *)(a5 + 65) != 255 )
          {
LABEL_18:
            v14 = (_BYTE *)(v11 + a1);
            do
            {
              v9[2] = v14[v10 - v11];
              v9[1] = *v14;
              LOBYTE(v8) = v14[v12 - v11];
              v14 += a2;
              *v9 = (_BYTE)v8;
              v9 += 4;
              --v7;
            }
            while ( v7 );
            return (char)v8;
          }
          goto LABEL_22;
        }
        v13 = Input8BPPToAA24;
      }
LABEL_17:
      *(_QWORD *)(a5 + 16) = v13;
      goto LABEL_18;
    }
  }
  *(_QWORD *)(a5 + 16) = &InputAABFDATAToAA24;
  if ( (*a4 & 1) != 0 )
  {
    *v6 |= 1u;
    *(_BYTE *)(a5 + 66) = a4[21];
    *(_BYTE *)(a5 + 67) = a4[22];
    *(_BYTE *)(a5 + 68) = a4[23];
  }
  else
  {
    v15 = a4 + 8;
    v16 = v6 - a4;
    v17 = 3LL;
    do
    {
      v18 = *(v15 - 4);
      --v15;
      LOBYTE(v19) = 0;
      v20 = *v15;
      if ( (unsigned __int8)v20 < 8u )
      {
        v24 = 8 - v20;
        v22 = -1 << (8 - v20);
        v25 = v18 - v24 < 0;
        v26 = v18 - v24;
        v23 = v18 - v24;
        if ( v25 )
        {
          v19 = -v26;
          v23 = 0;
        }
        else
        {
          LOBYTE(v19) = 0;
        }
      }
      else
      {
        v21 = v20 - 8;
        v22 = -1;
        v23 = v18 + v21;
      }
      v15[v16 - 3] = v22;
      v15[v16] = v19;
      v15[v16 + 3] = v23;
      --v17;
    }
    while ( v17 );
  }
  LOBYTE(v8) = a4[1];
  if ( (_BYTE)v8 == 5 )
  {
    if ( a4[20] == 4 )
      *v6 |= 2u;
    *(_BYTE *)(a5 + 75) = 3;
  }
  else if ( (_BYTE)v8 == 6 )
  {
    if ( (*(_BYTE *)a5 & 8) != 0 )
    {
      LOBYTE(v8) = a4[20];
      if ( (_BYTE)v8 )
      {
        if ( (_BYTE)v8 == 4 )
          *v6 |= 4u;
      }
      else
      {
        *v6 |= 8u;
      }
      if ( !dwABPreMul )
      {
        v8 = InputPreMul32BPPToAA24;
        *(_QWORD *)(a5 + 16) = InputPreMul32BPPToAA24;
      }
    }
    *(_BYTE *)(a5 + 75) = 4;
  }
  else if ( (_BYTE)v8 == 4 || (unsigned __int8)v8 > 0xFBu && (unsigned __int8)v8 <= 0xFDu )
  {
    *(_BYTE *)(a5 + 75) = 2;
  }
  return (char)v8;
}
