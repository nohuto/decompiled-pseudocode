/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x140219CF0
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x1404EF560 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x14021A688 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x14021A7C0 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x14021A84C (FsRtlRemoveLargeEntry.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // rbp
  LONGLONG v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *Mapping; // rdx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rax
  ULONG v12; // r9d
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG PairCount; // eax
  __int64 v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rax
  int v22; // r9d
  int v23; // ecx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rax
  int v28; // r8d
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r15d
  LONGLONG v32; // r13
  int v33; // r8d
  __int64 v34; // rsi
  unsigned int v35; // r15d
  ULONG v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r10
  _DWORD *v40; // rdx
  int v41; // r8d
  int v42; // ecx
  ULONG v43; // [rsp+50h] [rbp+8h] BYREF

  v43 = 0;
  v3 = SectorCount;
  v4 = Vbn;
  if ( !Vbn )
  {
    PairCount = Mcb->PairCount;
    if ( PairCount )
    {
      if ( SectorCount >= *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
      {
        Mcb->PairCount = 0;
        return 1;
      }
    }
  }
  if ( SectorCount > 0 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)v4, &v43) )
        return 1;
      v6 = v43;
      v7 = v43 ? *((unsigned int *)Mcb->Mapping + 2 * v43 - 2) : 0LL;
      if ( v7 == v4 )
      {
        Mapping = Mcb->Mapping;
        v9 = Mapping[2 * v43];
        if ( (unsigned int)(v9 - 1) < v4 + v3 )
          break;
      }
      if ( v43 )
        v19 = *((unsigned int *)Mcb->Mapping + 2 * v43 - 2);
      else
        v19 = 0LL;
      v20 = Mcb->Mapping;
      if ( v19 == v4 )
      {
        if ( v20[2 * v43 + 1] == -1 )
          return 1;
        if ( v43 )
        {
          v21 = v43 - 1;
          v22 = v20[2 * v21 + 1];
          if ( v22 == -1 || ((_DWORD)v21 ? (v23 = v20[2 * v43 - 4]) : (v23 = 0), !(v22 + v20[2 * v21] - v23)) )
          {
            v20[2 * v21] += v3;
            *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) += v3;
            return 1;
          }
        }
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v43, 1LL) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v6) = v4 + v3;
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 1) + 1) += v3;
          return 1;
        }
        return 0;
      }
      v31 = v20[2 * v43];
      v32 = v4 + v3;
      v33 = v20[2 * v43 + 1];
      v34 = v43;
      if ( (unsigned int)(v31 - 1) >= v4 + v3 )
      {
        if ( v33 != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v43, 2LL) )
            return 0;
          v39 = (unsigned int)(v6 + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 2) + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v39 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v39) = v4 + v3;
          v40 = Mcb->Mapping;
          if ( (_DWORD)v6 )
            v41 = v40[2 * (unsigned int)(v6 - 1)];
          else
            v41 = 0;
          if ( (_DWORD)v6 == -1 )
            v42 = 0;
          else
            v42 = v40[2 * v6];
          v40[2 * (unsigned int)(v6 + 2) + 1] += v40[2 * v6] + v40[2 * v39] - v42 - v41;
        }
        v3 = 0LL;
        v4 = v32;
      }
      else
      {
        v35 = v31 - v4;
        if ( v33 != -1 )
        {
          v36 = Mcb->PairCount - 1;
          if ( v43 == v36 )
          {
            v20[2 * v43] -= v35;
          }
          else if ( v43 >= v36 || (v37 = v43 + 1, v38 = v37, v20[2 * v37 + 1] == -1) )
          {
            v20[2 * v43] -= v35;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v37, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v38 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v38) = *((_DWORD *)Mcb->Mapping + 2 * v34);
            *((_DWORD *)Mcb->Mapping + 2 * v34) -= v35;
          }
        }
        v4 += v35;
        v3 -= v35;
      }
LABEL_17:
      if ( v3 <= 0 )
        return 1;
    }
    if ( v43 )
      v10 = Mapping[2 * v43 - 2];
    else
      v10 = 0;
    v11 = (unsigned int)(v9 - v10);
    v4 += v11;
    v3 -= v11;
    if ( Mapping[2 * v43 + 1] == -1 )
      goto LABEL_17;
    v12 = Mcb->PairCount - 1;
    if ( v43 == v12 )
    {
      if ( !v43 )
        goto LABEL_45;
      v13 = v43 - 1;
      v14 = Mapping[2 * v13 + 1];
      if ( v14 != -1 )
      {
        v26 = v43 == 1 ? 0 : Mapping[2 * v43 - 4];
        if ( Mapping[2 * v13] + v14 - v26 )
          goto LABEL_45;
      }
      v15 = (unsigned int)v13;
    }
    else
    {
      if ( !v43 )
        goto LABEL_66;
      v24 = v43 - 1;
      v25 = Mapping[2 * v24 + 1];
      if ( v25 != -1 )
      {
        if ( v43 != 1 )
          LODWORD(v24) = Mapping[2 * v43 - 4];
        if ( Mapping[2 * v43 - 2] + v25 - (_DWORD)v24 )
        {
LABEL_66:
          if ( v43 < v12 && Mapping[2 * v43 + 3] != -1 )
          {
            Mapping[2 * v43 + 1] = -1;
            goto LABEL_17;
          }
          if ( !v43 )
            goto LABEL_74;
        }
      }
      v27 = v43 - 1;
      v28 = Mapping[2 * v27 + 1];
      if ( v28 != -1 )
      {
        if ( v43 != 1 )
          LODWORD(v27) = Mapping[2 * v43 - 4];
        if ( Mapping[2 * v43 - 2] + v28 - (_DWORD)v27 )
        {
LABEL_74:
          if ( v43 >= v12 || Mapping[2 * v43 + 3] == -1 )
          {
LABEL_45:
            v16 = 1LL;
            v15 = v43;
            goto LABEL_16;
          }
          if ( !v43 )
            goto LABEL_50;
        }
      }
      v29 = v43 - 1;
      v30 = Mapping[2 * v29 + 1];
      if ( v30 == -1 )
        goto LABEL_50;
      if ( v43 != 1 )
        LODWORD(v29) = Mapping[2 * v43 - 4];
      if ( !(Mapping[2 * v43 - 2] + v30 - (_DWORD)v29) )
      {
LABEL_50:
        if ( v43 < v12 && Mapping[2 * v43 + 3] != -1 )
        {
          Mapping[2 * v43 + 1] = -1;
          v16 = 1LL;
          v15 = (unsigned int)(v6 - 1);
          goto LABEL_16;
        }
      }
      v15 = v43 - 1;
    }
    v16 = 2LL;
LABEL_16:
    FsRtlRemoveLargeEntry(Mcb, v15, v16);
    goto LABEL_17;
  }
  return 1;
}
