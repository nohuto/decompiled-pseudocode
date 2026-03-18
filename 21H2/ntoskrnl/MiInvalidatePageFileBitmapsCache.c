/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x14025FB48
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14025F6B0 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     MiAttemptPageFileReductionApc @ 0x14059B0B0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     MiBitmapsCachedEntryLengthChanged @ 0x1402E2738 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char v5; // bl
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  _QWORD *v23; // r9
  __int64 *v24; // r14
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8

  v5 = 0;
  if ( a4 )
  {
LABEL_2:
    v8 = *(_DWORD *)(a4 + 48);
    if ( v8 == a2 || (v18 = a2 + a3, v19 = v8 + *(_DWORD *)(a4 + 52), a2 + a3 == v19) )
    {
      v9 = *(_DWORD *)(a4 + 52) - a3;
      *(_DWORD *)(a4 + 52) = v9;
      if ( v8 == a2 )
        *(_DWORD *)(a4 + 48) = v8 + a3;
      v10 = a4;
      if ( !v9 )
      {
        RtlRbRemoveNode(a1 + 144, a4);
        RtlRbRemoveNode(a1 + 160, a4 + 24);
        v16 = a1 + 176;
        v17 = *(_QWORD **)(v16 + 8);
        if ( *v17 == v16 )
        {
          *(_QWORD *)a4 = v16;
          *(_QWORD *)(a4 + 8) = v17;
          *v17 = a4;
          *(_QWORD *)(v16 + 8) = a4;
          return;
        }
        goto LABEL_75;
      }
    }
    else
    {
      v20 = v19 - a2;
      v21 = a2 - v8;
      v22 = v20 - a3;
      v23 = (_QWORD *)(a1 + 176);
      v24 = *(__int64 **)(a1 + 176);
      if ( v24 != (__int64 *)(a1 + 176) )
      {
        if ( (_QWORD *)v24[1] == v23 )
        {
          v25 = *v24;
          if ( *(__int64 **)(*v24 + 8) == v24 )
          {
            *v23 = v25;
            *(_QWORD *)(v25 + 8) = v23;
            *((_DWORD *)v24 + 13) = v22;
            *((_DWORD *)v24 + 12) = v18;
            *(_DWORD *)(a4 + 52) = v21;
            MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
            v32 = a1 + 144;
            v27 = *(_QWORD *)(a1 + 144);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( v27 )
                v27 ^= v32;
              else
                v27 = 0LL;
            }
            LOBYTE(v31) = 0;
            if ( v27 )
            {
              v31 = *((unsigned int *)v24 + 13);
              while ( 1 )
              {
                if ( (unsigned __int64)v24[6] < *(_QWORD *)(v27 + 48) )
                {
                  v26 = *(_QWORD *)v27;
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v26 )
                    {
LABEL_36:
                      LOBYTE(v31) = 0;
                      break;
                    }
                    v26 ^= v27;
                  }
                  if ( !v26 )
                    goto LABEL_36;
                }
                else
                {
                  v26 = *(_QWORD *)(v27 + 8);
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v26 )
                    {
LABEL_44:
                      LOBYTE(v31) = 1;
                      break;
                    }
                    v26 ^= v27;
                  }
                  if ( !v26 )
                    goto LABEL_44;
                }
                v27 = v26;
              }
            }
            RtlRbInsertNodeEx(v32, v27, v31, v24);
            v33 = a1 + 160;
            v29 = *(_QWORD *)(a1 + 160);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( v29 )
                v29 ^= v33;
              else
                v29 = 0LL;
            }
            v34 = *(_BYTE *)(a1 + 168) & 1;
            if ( v29 )
            {
              while ( 1 )
              {
                if ( *((_DWORD *)v24 + 12) >= *(_DWORD *)(v29 + 24) )
                {
                  v28 = *(_QWORD *)(v29 + 8);
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v28 )
                    {
LABEL_43:
                      v5 = 1;
                      break;
                    }
                    v28 ^= v29;
                  }
                  if ( !v28 )
                    goto LABEL_43;
                }
                else
                {
                  v28 = *(_QWORD *)v29;
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v28 )
                      break;
                    v28 ^= v29;
                  }
                  if ( !v28 )
                    break;
                }
                v29 = v28;
              }
            }
            LOBYTE(v34) = v5;
            RtlRbInsertNodeEx(v33, v29, v34, v24 + 3);
            return;
          }
        }
LABEL_75:
        __fastfail(3u);
      }
      if ( v21 <= v22 )
      {
        *(_DWORD *)(a4 + 48) = v18;
        *(_DWORD *)(a4 + 52) = v22;
        v30 = *(_DWORD *)(a1 + 140);
        if ( v30 <= v21 )
          v30 = v21;
      }
      else
      {
        *(_DWORD *)(a4 + 52) = v21;
        v30 = *(_DWORD *)(a1 + 140);
        if ( v30 <= v22 )
          v30 = v22;
      }
      *(_DWORD *)(a1 + 140) = v30;
      v10 = a4;
    }
    MiBitmapsCachedEntryLengthChanged(a1, v10, 0LL);
    return;
  }
  v11 = a1 + 160;
  v12 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
  {
    if ( v12 )
      v12 ^= v11;
    else
      v12 = 0LL;
  }
  v13 = *(_BYTE *)(v11 + 8) & 1;
  while ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 24);
    if ( a2 + a3 > v14 )
    {
      if ( a2 < *(_DWORD *)(v12 + 28) + v14 )
      {
        a4 = v12 - 24;
        goto LABEL_2;
      }
      v15 = *(_QWORD *)(v12 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v12;
    }
    if ( v13 && v15 )
      v12 ^= v15;
    else
      v12 = v15;
  }
}
