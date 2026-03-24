/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x14026ABE0
 * Callers:
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x14026A714 (MiFindFreePageFileSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x140542AD0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     MiBitmapsCachedEntryLengthChanged @ 0x140268308 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  char v5; // bl
  __int64 v6; // r9
  __int64 v8; // r8
  int v9; // ecx
  unsigned __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  _QWORD *v25; // r9
  __int64 *v26; // r14
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  unsigned int v36; // eax

  v5 = 0;
  v6 = a3;
  if ( a4 )
  {
LABEL_2:
    v8 = *(unsigned int *)(a4 + 48);
    if ( (_DWORD)v8 == a2 || (v20 = a2 + v6, v21 = v8 + *(_DWORD *)(a4 + 52), a2 + (_DWORD)v6 == v21) )
    {
      v9 = *(_DWORD *)(a4 + 52) - v6;
      *(_DWORD *)(a4 + 52) = v9;
      if ( (_DWORD)v8 == a2 )
        *(_DWORD *)(a4 + 48) = v8 + v6;
      v10 = (unsigned __int64 *)a4;
      if ( !v9 )
      {
        RtlRbRemoveNode(a1 + 144, a4, v8, v6);
        RtlRbRemoveNode(a1 + 160, a4 + 24, v11, v12);
        v13 = a1 + 176;
        v14 = *(_QWORD **)(v13 + 8);
        if ( *v14 == v13 )
        {
          *(_QWORD *)a4 = v13;
          *(_QWORD *)(a4 + 8) = v14;
          *v14 = a4;
          *(_QWORD *)(v13 + 8) = a4;
          return;
        }
        goto LABEL_73;
      }
    }
    else
    {
      v22 = v21 - a2;
      v23 = a2 - v8;
      v24 = v22 - v6;
      v25 = (_QWORD *)(a1 + 176);
      v26 = *(__int64 **)(a1 + 176);
      if ( v26 != (__int64 *)(a1 + 176) )
      {
        if ( (_QWORD *)v26[1] == v25 )
        {
          v27 = *v26;
          if ( *(__int64 **)(*v26 + 8) == v26 )
          {
            *v25 = v27;
            *(_QWORD *)(v27 + 8) = v25;
            *((_DWORD *)v26 + 13) = v24;
            *((_DWORD *)v26 + 12) = v20;
            *(_DWORD *)(a4 + 52) = v23;
            MiBitmapsCachedEntryLengthChanged(a1, (unsigned __int64 *)a4, 0LL);
            v29 = a1 + 144;
            v30 = *(_QWORD *)(a1 + 144);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( v30 )
                v30 ^= v29;
              else
                v30 = 0LL;
            }
            LOBYTE(v28) = 0;
            if ( v30 )
            {
              v28 = *((unsigned int *)v26 + 13);
              while ( 1 )
              {
                if ( (unsigned __int64)v26[6] < *(_QWORD *)(v30 + 48) )
                {
                  v31 = *(_QWORD *)v30;
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v31 )
                      goto LABEL_62;
                    v31 ^= v30;
                  }
                  if ( !v31 )
                  {
LABEL_62:
                    LOBYTE(v28) = 0;
                    break;
                  }
                }
                else
                {
                  v31 = *(_QWORD *)(v30 + 8);
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v31 )
                      goto LABEL_61;
                    v31 ^= v30;
                  }
                  if ( !v31 )
                  {
LABEL_61:
                    LOBYTE(v28) = 1;
                    break;
                  }
                }
                v30 = v31;
              }
            }
            RtlRbInsertNodeEx(v29, v30, v28, v26);
            v32 = a1 + 160;
            v33 = *(_QWORD *)(a1 + 160);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( v33 )
                v33 ^= v32;
              else
                v33 = 0LL;
            }
            v34 = *(_BYTE *)(a1 + 168) & 1;
            if ( v33 )
            {
              while ( 1 )
              {
                if ( *((_DWORD *)v26 + 12) < *(_DWORD *)(v33 + 24) )
                {
                  v35 = *(_QWORD *)v33;
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v35 )
                      break;
                    v35 ^= v33;
                  }
                  if ( !v35 )
                    break;
                }
                else
                {
                  v35 = *(_QWORD *)(v33 + 8);
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v35 )
                      goto LABEL_57;
                    v35 ^= v33;
                  }
                  if ( !v35 )
                  {
LABEL_57:
                    v5 = 1;
                    break;
                  }
                }
                v33 = v35;
              }
            }
            LOBYTE(v34) = v5;
            RtlRbInsertNodeEx(v32, v33, v34, v26 + 3);
            return;
          }
        }
LABEL_73:
        __fastfail(3u);
      }
      if ( v23 <= v24 )
      {
        *(_DWORD *)(a4 + 48) = v20;
        *(_DWORD *)(a4 + 52) = v24;
        v36 = *(_DWORD *)(a1 + 140);
        if ( v36 <= v23 )
          v36 = v23;
      }
      else
      {
        *(_DWORD *)(a4 + 52) = v23;
        v36 = *(_DWORD *)(a1 + 140);
        if ( v36 <= v24 )
          v36 = v24;
      }
      *(_DWORD *)(a1 + 140) = v36;
      v10 = (unsigned __int64 *)a4;
    }
    MiBitmapsCachedEntryLengthChanged(a1, v10, 0LL);
    return;
  }
  v15 = a1 + 160;
  v16 = *(_QWORD *)v15;
  if ( (*(_BYTE *)(v15 + 8) & 1) != 0 )
  {
    if ( v16 )
      v16 ^= v15;
    else
      v16 = 0LL;
  }
  v17 = *(_BYTE *)(v15 + 8) & 1;
  while ( v16 )
  {
    v18 = *(_DWORD *)(v16 + 24);
    if ( a2 + (unsigned int)v6 > v18 )
    {
      if ( a2 < *(_DWORD *)(v16 + 28) + v18 )
      {
        a4 = v16 - 24;
        goto LABEL_2;
      }
      v19 = *(_QWORD *)(v16 + 8);
    }
    else
    {
      v19 = *(_QWORD *)v16;
    }
    if ( v17 && v19 )
      v16 ^= v19;
    else
      v16 = v19;
  }
}
