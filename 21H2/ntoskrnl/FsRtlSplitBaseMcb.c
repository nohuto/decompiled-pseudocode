/*
 * XREFs of FsRtlSplitBaseMcb @ 0x1404EF640
 * Callers:
 *     FsRtlSplitLargeMcb @ 0x1404EF7C0 (FsRtlSplitLargeMcb.c)
 * Callees:
 *     FsRtlAddEntry @ 0x14021A688 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x14021A7C0 (FsRtlFindLargeIndex.c)
 */

BOOLEAN __stdcall FsRtlSplitBaseMcb(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  int v3; // r15d
  int v4; // edi
  int v5; // r14d
  __int64 v7; // rbx
  _DWORD *Mapping; // rdx
  int v9; // eax
  __int64 v10; // r8
  int v11; // r10d
  int v12; // ecx
  int v13; // eax
  __int64 v15; // r8
  __int64 v16; // r11
  int v17; // edx
  _DWORD *v18; // r9
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = Amount;
  v4 = 0;
  v19 = 0;
  v5 = Vbn;
  if ( FsRtlFindLargeIndex((__int64)Mcb, Vbn, (int *)&v19) )
  {
    v7 = v19;
    Mapping = Mcb->Mapping;
    if ( Mapping[2 * v19 + 1] == -1 )
    {
LABEL_29:
      while ( (unsigned int)v7 < Mcb->PairCount )
      {
        *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)v7) += v3;
LABEL_28:
        LODWORD(v7) = v7 + 1;
      }
      LOBYTE(v4) = 1;
      return v4;
    }
    if ( v19 )
      v9 = Mapping[2 * v19 - 2];
    else
      v9 = 0;
    if ( v9 == v5 )
    {
      if ( !v19 )
        goto LABEL_15;
      v10 = v19 - 1;
      v11 = Mapping[2 * v10 + 1];
      if ( v11 == -1 || (v19 != 1 ? (v12 = Mapping[2 * v19 - 4]) : (v12 = 0), !(v11 + Mapping[2 * v10] - v12)) )
      {
        LODWORD(v7) = v19 - 1;
        goto LABEL_29;
      }
    }
    if ( v19 )
    {
      v13 = Mapping[2 * v19 - 2];
LABEL_17:
      if ( v13 == v5 )
      {
        if ( FsRtlAddEntry((__int64)Mcb, v19, 1) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v7) = v3 + v5;
          goto LABEL_28;
        }
      }
      else if ( FsRtlAddEntry((__int64)Mcb, v19, 2) )
      {
        v15 = (unsigned int)(v7 + 1);
        v16 = (unsigned int)(v7 + 2);
        v17 = 0;
        *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = *((_DWORD *)Mcb->Mapping + 2 * v16 + 1);
        *((_DWORD *)Mcb->Mapping + 2 * v7) = v5;
        *((_DWORD *)Mcb->Mapping + 2 * v15 + 1) = -1;
        *((_DWORD *)Mcb->Mapping + 2 * v15) = v3 + v5;
        v18 = Mcb->Mapping;
        if ( (_DWORD)v7 != -1 )
          v17 = v18[2 * v7];
        if ( (_DWORD)v7 )
          v4 = v18[2 * (unsigned int)(v7 - 1)];
        LODWORD(v7) = v7 + 2;
        v18[2 * v16 + 1] += v17 - v4;
        goto LABEL_29;
      }
      return 0;
    }
LABEL_15:
    v13 = 0;
    goto LABEL_17;
  }
  return v4;
}
