/*
 * XREFs of KeBuildLogicalProcessorSystemInformation @ 0x14060ADF8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeFindFirstSetLeftGroupAffinity @ 0x140240570 (KeFindFirstSetLeftGroupAffinity.c)
 */

__int64 __fastcall KeBuildLogicalProcessorSystemInformation(__int16 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // r11
  unsigned int v5; // r12d
  __int16 v7; // r10
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbp
  bool v15; // al
  unsigned int v16; // ebp
  _QWORD *v17; // r12
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r9d
  unsigned int v22; // eax
  _QWORD *v23; // rbx
  __int64 *v24; // rcx
  __int64 v25; // r8
  _OWORD v27[5]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+88h] [rbp+10h]

  v27[0] = 0LL;
  v4 = a4;
  v29 = 0;
  v5 = a3;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v11 = KiProcessorBlock[v10];
      v12 = *(unsigned __int8 *)(v11 + 208);
      if ( (_WORD)v12 == v7 )
      {
        v13 = *(_QWORD *)(v11 + 8 * v12 + 33688);
        *(_QWORD *)&v27[0] = v13;
        WORD4(v27[0]) = v12;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v27) )
        {
          v9 += 32;
          if ( v9 > v5 )
          {
            v8 = -1073741820;
          }
          else
          {
            *(_QWORD *)a2 = v13;
            *(_DWORD *)(a2 + 8) = 3;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            a2 += 32LL;
          }
        }
        v14 = *(_QWORD *)(v11 + 33880);
        *(_QWORD *)&v27[0] = v14;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v27) )
        {
          v15 = *(_QWORD *)(v11 + 200) != v14;
          v9 += 32;
          if ( v9 <= v5 )
          {
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_BYTE *)(a2 + 16) = v15;
            *(_QWORD *)a2 = v14;
            *(_DWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0LL;
            a2 += 32LL;
          }
          else
          {
            v8 = -1073741820;
          }
        }
        v16 = 0;
        if ( *(_DWORD *)(v11 + 33556) )
        {
          v17 = (_QWORD *)(a2 + 16);
          while ( 1 )
          {
            v18 = *(_QWORD *)(v11 + 200);
            v19 = v16;
            v20 = *(_QWORD *)(v11 + 8LL * v16 + 33904);
            if ( !v20 )
              goto LABEL_24;
            *(_QWORD *)&v27[0] = *(_QWORD *)(v11 + 8LL * v16 + 33904);
            v18 = v20;
            if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v27) )
              break;
LABEL_12:
            if ( ++v16 >= *(_DWORD *)(v11 + 33556) )
            {
              v10 = v29;
              v5 = a3;
              goto LABEL_14;
            }
          }
          v19 = v16;
LABEL_24:
          v9 += 32;
          if ( v9 > a3 )
          {
            v8 = -1073741820;
          }
          else
          {
            *(_QWORD *)a2 = v18;
            *((_DWORD *)v17 - 2) = 2;
            v17[1] = 0LL;
            a2 += 32LL;
            *v17 = 0LL;
            *v17 = *(_QWORD *)(v11 + 12 * v19 + 33496);
            *((_DWORD *)v17 + 2) = *(_DWORD *)(v11 + 12 * v19 + 33504);
            v17 += 4;
          }
          goto LABEL_12;
        }
LABEL_14:
        v7 = a1;
      }
      v29 = ++v10;
    }
    while ( v10 < (unsigned int)KeNumberProcessors_0 );
    v4 = a4;
  }
  v21 = (unsigned __int16)KeNumberNodes;
  v22 = 0;
  if ( KeNumberNodes )
  {
    v23 = (_QWORD *)(a2 + 16);
    v24 = KeNodeBlock;
    do
    {
      v25 = *(_QWORD *)(*v24 + 136);
      if ( v25 && *(_WORD *)(*v24 + 144) == v7 )
      {
        v9 += 32;
        if ( v9 <= v5 )
        {
          *v23 = 0LL;
          *(_DWORD *)v23 = v22;
          *(v23 - 2) = v25;
          *((_DWORD *)v23 - 2) = 1;
          v23[1] = 0LL;
          v23 += 4;
        }
        else
        {
          v8 = -1073741820;
        }
      }
      ++v22;
      ++v24;
    }
    while ( v22 < v21 );
  }
  *v4 = v9;
  return v8;
}
