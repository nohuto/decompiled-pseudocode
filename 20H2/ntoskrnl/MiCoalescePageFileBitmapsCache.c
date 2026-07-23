/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x140345170
 * Callers:
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x140540FD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140541AF0 (MiFinishPageFileExtension.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     MiRescanPageFileBitmapPortion @ 0x140314D74 (MiRescanPageFileBitmapPortion.c)
 *     RtlLengthCurrentClearRunBackward @ 0x140344084 (RtlLengthCurrentClearRunBackward.c)
 *     RtlLengthCurrentClearRunForward @ 0x1403454FC (RtlLengthCurrentClearRunForward.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1403455C8 (MiBitmapsCachedEntryLengthChanged.c)
 */

__int64 __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // ebp
  unsigned __int64 v18; // r14
  unsigned __int64 i; // rcx
  int v20; // r15d
  unsigned __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rsi
  int v24; // ecx
  int v25; // edx
  int v26; // ebx
  unsigned int v27; // eax
  unsigned int v28; // ebp
  int v29; // ebx
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  unsigned __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v39; // [rsp+80h] [rbp+8h]
  __int64 v40; // [rsp+98h] [rbp+20h]

  result = (__int64)&retaddr;
  if ( (*(_BYTE *)(a1 + 207) & 1) == 0 )
  {
    v6 = 24LL;
    v7 = *(_QWORD *)(a1 + 112);
    v8 = 8LL;
    if ( !a2 )
      v8 = 24LL;
    v39 = v7 + v8;
    v9 = *(_QWORD *)(a1 + 160);
    if ( !a2 )
      v6 = 8LL;
    v10 = v7 + v6;
    v11 = 0LL;
    v12 = *(_QWORD *)(a1 + 168);
    v13 = 0LL;
    v40 = v10;
    if ( (v12 & 1) != 0 )
    {
      if ( v9 )
        v9 ^= a1 + 160;
      else
        v9 = 0LL;
    }
    v14 = 0LL;
    v15 = v12 & 1;
    while ( v9 )
    {
      if ( a3 < *(_DWORD *)(v9 + 24) )
      {
        v16 = *(_QWORD *)v9;
        v14 = v9;
        if ( v15 && v16 )
          goto LABEL_27;
      }
      else
      {
        if ( a3 <= *(_DWORD *)(v9 + 24) )
          goto LABEL_17;
        v16 = *(_QWORD *)(v9 + 8);
        if ( v15 && v16 )
        {
LABEL_27:
          v9 ^= v16;
          continue;
        }
      }
      v9 = v16;
    }
    v9 = v14;
LABEL_17:
    v17 = *(_DWORD *)(v9 + 24);
    v18 = v9 - 24;
    if ( v17 == a3 + 1 && v17 != -1 )
    {
      ++*(_DWORD *)(v18 + 52);
      v13 = v9 - 24;
      *(_DWORD *)(v18 + 48) = a3;
    }
    i = *(_QWORD *)v9;
    v20 = 0;
    v21 = v9;
    if ( *(_QWORD *)v9 )
    {
      for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)(i + 8) == v21 )
          break;
        v21 = i;
      }
    }
    if ( i )
    {
      v22 = *(_DWORD *)(i + 28);
      v23 = i - 24;
      v24 = v22 + *(_DWORD *)(i + 24);
      v20 = v24 - 1;
      if ( v24 == a3 )
      {
        if ( *(_DWORD *)(v18 + 48) == a3 )
        {
          *(_DWORD *)(v23 + 52) = *(_DWORD *)(v18 + 52) + v22;
          *(_DWORD *)(v18 + 52) = 0;
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)(v9 - 24));
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v9);
          v35 = *(unsigned __int64 **)(a1 + 184);
          if ( *v35 != a1 + 176 )
            __fastfail(3u);
          v10 = v40;
          *(_QWORD *)v18 = a1 + 176;
          v13 = v23 | 1;
          *(_QWORD *)(v18 + 8) = v35;
          *v35 = v18;
          *(_QWORD *)(a1 + 184) = v18;
        }
        else
        {
          v13 = v23;
          *(_DWORD *)(v23 + 52) = v22 + 1;
        }
      }
      v11 = 0LL;
    }
    if ( v13 )
    {
      if ( (v13 & 1) != 0 )
      {
        v13 &= ~1uLL;
      }
      else
      {
        v25 = *(_DWORD *)(v13 + 48);
        if ( v25 == a3 )
        {
          v33 = RtlLengthCurrentClearRunBackward(v10, a3, 0xFFFFFFFF);
          if ( v33 > 1 )
          {
            v34 = RtlLengthCurrentClearRunBackward(v39, a3, v33);
            *(_DWORD *)(v13 + 52) += v34 - 1;
            *(_DWORD *)(v13 + 48) = a3 - v34 + 1;
          }
        }
        else
        {
          v26 = v25 + *(_DWORD *)(v13 + 52);
          v27 = RtlLengthCurrentClearRunForward(v10, (unsigned int)(v26 - 1), 0xFFFFFFFFLL);
          if ( v27 > 1 )
            *(_DWORD *)(v13 + 52) += RtlLengthCurrentClearRunForward(v39, (unsigned int)(v26 - 1), v27) - 1;
        }
      }
      return MiBitmapsCachedEntryLengthChanged(a1, v13, 1LL);
    }
    else
    {
      v28 = v17 - ((v17 != -1) + 1) - a3;
      v29 = a3 - ((v20 != 0) + 1) - v20;
      if ( *(_QWORD *)(a1 + 176) == a1 + 176 )
      {
        v36 = *(_QWORD *)(a1 + 152);
        if ( (v36 & 1) != 0 )
        {
          if ( v36 != 1 )
            v11 = v36 ^ ((a1 + 144) | 1);
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 152);
        }
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 176);
      }
      v37 = v11;
      v30 = a3 - (v20 != 0) - v20 + v28;
      if ( v30 < 0x20
        || *(_DWORD *)(v11 + 52) >= v30
        || v28
        && ((v31 = RtlLengthCurrentClearRunForward(v10, a3, v28 + 1),
             v28 = v31 - 1,
             v30 = v29 + v31,
             (unsigned int)(v29 + v31) < 0x20)
         || *(_DWORD *)(v11 + 52) >= v30)
        || v29
        && ((v32 = RtlLengthCurrentClearRunBackward(v40, a3, a3 - (v20 != 0) - v20),
             v29 = v32 - 1,
             v30 = v28 + v32,
             v28 + v32 < 0x20)
         || *(_DWORD *)(v11 + 52) >= v30) )
      {
        result = *(unsigned int *)(a1 + 140);
        if ( (unsigned int)result <= v30 )
          result = v30;
        *(_DWORD *)(a1 + 140) = result;
      }
      else
      {
        return MiRescanPageFileBitmapPortion(a1, v39, a3 - v29, v30, &v37);
      }
    }
  }
  return result;
}
