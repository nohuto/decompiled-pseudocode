/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x14021A0C0
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x140219B30 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x14021A0A0 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x14021A688 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x14021A7C0 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x14021A84C (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r13d
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  int v8; // esi
  signed int v9; // r8d
  ULONG PairCount; // r12d
  signed int v11; // r9d
  _DWORD *Mapping; // r14
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // r8d
  unsigned int v16; // r9d
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  ULONG v22; // ebx
  _DWORD *v23; // r14
  unsigned int v24; // ebx
  __int64 v25; // r12
  unsigned int *v26; // r9
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // eax
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // r8d
  _DWORD *v42; // rdx
  int v43; // ecx
  unsigned int v44; // edx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rcx
  int v48; // r8d
  unsigned int *v49; // rdx
  int v50; // eax
  _DWORD *v52; // r8
  __int64 v53; // rcx
  int v54; // r9d
  int v55; // edx
  int v56; // edx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  ULONG v61; // [rsp+20h] [rbp-48h]
  unsigned int v62; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v63; // [rsp+78h] [rbp+10h]

  v4 = SectorCount;
  v5 = Lbn;
  v6 = Vbn;
  if ( Vbn < 0 || Lbn < 0 || SectorCount <= 0 )
    return -1073741811;
  v8 = 0;
  v9 = 0;
  PairCount = Mcb->PairCount;
  v61 = PairCount;
  v11 = PairCount - 1;
  if ( (int)(PairCount - 1) < 0 )
    goto LABEL_34;
  while ( 1 )
  {
    Mapping = Mcb->Mapping;
    v13 = (v11 + v9) / 2;
    v14 = v13;
    if ( !v13 || (unsigned int)Vbn >= Mapping[2 * v13 - 2] )
      break;
    v11 = v13 - 1;
LABEL_10:
    if ( v9 > v11 )
      goto LABEL_34;
  }
  if ( (unsigned int)Vbn > Mapping[2 * v13] - 1 )
  {
    v9 = v13 + 1;
    goto LABEL_10;
  }
  v15 = Mapping[2 * v13 + 1];
  v62 = 0;
  v16 = v4 + Vbn - 1;
  if ( v15 == -1 )
  {
    if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v16, &v62) )
      goto LABEL_34;
    v19 = v62 - 1;
    if ( v14 != (_DWORD)v19 )
      goto LABEL_34;
    v20 = 0;
    if ( v62 )
      v20 = Mapping[2 * v19];
    if ( Mapping[2 * v62 + 1] == v5 + v20 - v6 )
    {
      if ( v62 )
        v21 = Mapping[2 * v19];
      else
        v21 = 0;
      v4 = v21 - v6;
      goto LABEL_34;
    }
    return -1073741823;
  }
  if ( v13 )
    v17 = Mapping[2 * v13 - 2];
  else
    v17 = 0;
  if ( v5 != (_DWORD)Vbn + v15 - v17 )
    return -1073741823;
  v18 = Mapping[2 * v13];
  if ( v16 <= v18 - 1 )
    return 0;
  if ( v13 < PairCount )
  {
    v6 = Mapping[2 * v13];
    if ( v13 == -1 )
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( v13 )
    v18 -= Mapping[2 * v13 - 2];
  v5 = v15 + v18;
  v4 = v16 - v6 + 1;
LABEL_34:
  v22 = PairCount;
  v62 = PairCount;
  if ( !PairCount || (v23 = Mcb->Mapping, v23[2 * PairCount - 2] <= v6) )
  {
LABEL_111:
    if ( v22
      && (v52 = Mcb->Mapping, v53 = v22 - 1, v54 = v52[2 * v53], v54 == v6)
      && ((v55 = v52[2 * v53 + 1], v55 != -1)
        ? (v22 != 1 ? (v57 = v52[2 * v22 - 4]) : (v57 = 0), v56 = v54 + v55 - v57)
        : (v56 = 0),
          v56 == v5) )
    {
      v52[2 * PairCount - 2] += v4;
    }
    else
    {
      if ( !v6 )
        goto LABEL_135;
      if ( v22 )
        v8 = *((_DWORD *)Mcb->Mapping + 2 * v22 - 2);
      if ( v8 == v6 )
      {
LABEL_135:
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v22, 1LL) )
          return -1073741670;
        v59 = v22;
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v22, 2LL) )
          return -1073741670;
        v58 = 8LL * v22;
        *(_DWORD *)((char *)Mcb->Mapping + v58 + 4) = -1;
        *(_DWORD *)((char *)Mcb->Mapping + v58) = v6;
        v59 = v22 + 1;
      }
      v60 = 8 * v59;
      *(_DWORD *)((char *)Mcb->Mapping + v60 + 4) = v5;
      *(_DWORD *)((char *)Mcb->Mapping + v60) = v6 + v4;
    }
    return 0;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v6, &v62) )
  {
    v22 = v62;
    goto LABEL_111;
  }
  v24 = v62;
  v63 = v6 + v4;
  v25 = 8LL * v62;
  v26 = &v23[(unsigned __int64)v25 / 4];
  v27 = v6 + v4 - 1;
  if ( v23[(unsigned __int64)v25 / 4 + 1] != -1 || v62 && v23[2 * v62 - 2] > v6 )
    return -1073741823;
  v28 = *v26 - 1;
  if ( v27 > v28 )
    return -1073741823;
  if ( v62 )
    v29 = v23[2 * v62 - 2];
  else
    v29 = 0;
  if ( v29 >= v6 || v27 >= v28 )
  {
    if ( v62 )
      v32 = v23[2 * v62 - 2];
    else
      v32 = 0;
    if ( v32 == v6 && v27 < v28 )
    {
      if ( v62 )
      {
        v33 = v62 - 1;
        v34 = v23[2 * v33 + 1];
        if ( v34 != -1 )
        {
          if ( v62 == 1 )
            v35 = 0;
          else
            v35 = v23[2 * v62 - 4];
          v8 = v34 + v23[2 * v33] - v35;
        }
      }
      if ( v8 == v5 )
      {
        if ( v62 )
        {
          v23[2 * v62 - 2] += v4;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
            return -1073741670;
          *((_DWORD *)Mcb->Mapping + 1) = v5;
          *(_DWORD *)Mcb->Mapping = v4;
        }
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v62, 1LL) )
          return -1073741670;
        v36 = v63;
        *(_DWORD *)((char *)Mcb->Mapping + v25 + 4) = v5;
        *(_DWORD *)((char *)Mcb->Mapping + v25) = v36;
      }
      return 0;
    }
    if ( v62 )
      v37 = v23[2 * v62 - 2];
    else
      v37 = 0;
    if ( v37 < v6 && v27 == v28 )
    {
      if ( v62 < v61 - 1 )
        v38 = v23[2 * v62 + 3];
      else
        v38 = -1;
      if ( v38 == v5 + v4 )
      {
        *v26 = v6;
        *((_DWORD *)Mcb->Mapping + 2 * v24 + 3) = v5;
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v62, 1LL) )
          return -1073741670;
        *(_DWORD *)((char *)Mcb->Mapping + v25 + 4) = -1;
        *(_DWORD *)((char *)Mcb->Mapping + v25) = v6;
        *((_DWORD *)Mcb->Mapping + 2 * v24 + 3) = v5;
      }
      return 0;
    }
    if ( v62 )
    {
      v40 = v62 - 1;
      v41 = v23[2 * v40 + 1];
      v42 = &v23[2 * v40];
      if ( v41 == -1 )
      {
        v39 = 0;
      }
      else
      {
        if ( v62 == 1 )
          v43 = 0;
        else
          v43 = v23[2 * v62 - 4];
        v39 = v41 + *v42 - v43;
      }
    }
    else
    {
      v39 = 0;
    }
    v44 = v61 - 1;
    if ( v39 == v5 )
    {
      v45 = v62 < v44 ? v23[2 * v62 + 3] : -1;
      if ( v45 == v5 + v4 )
      {
        if ( v62 )
        {
          v23[2 * v62 - 2] = v23[2 * v62 + 2];
          FsRtlRemoveLargeEntry(Mcb, v24, 2LL);
        }
        else
        {
          v23[3] = v5;
          FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
        }
        return 0;
      }
    }
    if ( v62 < v44 )
      v46 = v23[2 * v62 + 3];
    else
      v46 = -1;
    if ( v46 == v5 + v4 )
    {
      v23[2 * v62 + 3] = v5;
    }
    else
    {
      if ( !v62 )
        goto LABEL_108;
      v47 = v62 - 1;
      v48 = v23[2 * v47 + 1];
      v49 = &v23[2 * v47];
      if ( v48 != -1 )
      {
        if ( v62 == 1 )
          v50 = 0;
        else
          v50 = v23[2 * v62 - 4];
        v8 = v48 + *v49 - v50;
      }
      if ( v8 != v5 )
      {
LABEL_108:
        v26[1] = v5;
        return 0;
      }
      *v49 = *v26;
    }
    FsRtlRemoveLargeEntry(Mcb, v24, 1LL);
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v62, 2LL) )
  {
    v30 = v24 + 1;
    v31 = v63;
    *(_DWORD *)((char *)Mcb->Mapping + v25 + 4) = -1;
    *(_DWORD *)((char *)Mcb->Mapping + v25) = v6;
    *((_DWORD *)Mcb->Mapping + 2 * v30 + 1) = v5;
    *((_DWORD *)Mcb->Mapping + 2 * v30) = v31;
    return 0;
  }
  return -1073741670;
}
