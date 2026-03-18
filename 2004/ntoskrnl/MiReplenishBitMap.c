/*
 * XREFs of MiReplenishBitMap @ 0x14027CB50
 * Callers:
 *     MiEmptyPteBins @ 0x14027C980 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x140284AB0 (MiInsertCachedPte.c)
 * Callees:
 *     RtlInterlockedSetClearRunEx @ 0x14021DA30 (RtlInterlockedSetClearRunEx.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiFlushTbListEarly @ 0x14027C660 (MiFlushTbListEarly.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemPtes @ 0x140321AF4 (MiReturnSystemPtes.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 */

ULONG_PTR __fastcall MiReplenishBitMap(unsigned __int64 *a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 *v5; // r12
  ULONG_PTR v6; // rsi
  unsigned int v7; // r13d
  int v8; // ebx
  _KPROCESS *v9; // rdx
  ULONG_PTR v10; // rbp
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r14
  ULONG_PTR v14; // rdi
  __int64 v15; // rcx
  ULONG_PTR v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG_PTR v26; // r8
  unsigned __int64 v27; // rdx
  volatile signed __int32 *v28; // r9
  unsigned int v29; // eax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r13
  __int64 v32; // rsi
  unsigned __int64 v33; // r15
  unsigned __int64 *v34; // r14
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // r8
  _QWORD *v39; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // r9
  _QWORD *v44; // rdx
  bool v45; // zf
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r9
  _QWORD *v50; // r9
  _QWORD *v51; // r8
  bool v52; // zf
  unsigned __int64 v53; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  struct _LIST_ENTRY *v57; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  struct _LIST_ENTRY *v60; // r8
  __int64 v61; // rax
  __int16 v62; // r8
  struct _LIST_ENTRY *v63; // rax
  __int64 v64; // r8
  __int64 v65; // rax
  signed __int32 v66[8]; // [rsp+0h] [rbp-168h] BYREF
  int v67; // [rsp+30h] [rbp-138h]
  int v68; // [rsp+34h] [rbp-134h]
  ULONG_PTR v69; // [rsp+38h] [rbp-130h]
  unsigned __int64 *v70; // [rsp+40h] [rbp-128h]
  __int64 v71; // [rsp+48h] [rbp-120h]
  ULONG_PTR v72; // [rsp+50h] [rbp-118h]
  _QWORD v73[24]; // [rsp+60h] [rbp-108h] BYREF

  v72 = a2;
  v4 = a2;
  v70 = a1;
  v5 = a1;
  memset(v73, 0, 0xB8uLL);
  v6 = 0LL;
  v7 = 0;
  v71 = 0LL;
  v67 = 0;
  if ( a3 == 1 )
  {
    LODWORD(v73[1]) = 20;
    v73[3] = 0LL;
    _InterlockedOr(v66, 0);
    v8 = KiTbFlushTimeStamp;
  }
  else
  {
    v7 = 1;
    v8 = 0;
    v67 = 1;
  }
  v68 = v8;
  v9 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
  do
  {
    v10 = 0LL;
    BugCheckParameter4 = v4;
    do
    {
      v12 = v5[2];
      v13 = *(_QWORD *)(v12 + 8 * BugCheckParameter4);
      v14 = v12 + 8 * BugCheckParameter4;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v55 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
          v56 = v13 | 0x20;
          if ( (v55 & 0x20) == 0 )
            v56 = *(_QWORD *)(v12 + 8 * BugCheckParameter4);
          v13 = v56;
          if ( (v55 & 0x42) != 0 )
            v13 = v56 | 0x42;
        }
        v9 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
      }
      if ( (v13 & 0xF000) == 0x1000 )
      {
        v15 = 1LL;
      }
      else
      {
        v46 = *(_QWORD *)(v14 + 8);
        v47 = v14 + 8;
        if ( v14 + 8 >= 0xFFFFF6FB7DBED000uLL && v47 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v46 & 1) != 0
            && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
          {
            v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v57 )
            {
              v58 = *((_QWORD *)&v57->Flink + ((v47 >> 3) & 0x1FF));
              v59 = v46 | 0x20;
              if ( (v58 & 0x20) == 0 )
                v59 = *(_QWORD *)(v14 + 8);
              v46 = v59;
              if ( (v58 & 0x42) != 0 )
                v46 = v59 | 0x42;
            }
          }
          v9 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
        }
        if ( qword_140C4DD40 && (v46 & 0x10) == 0 )
          v46 &= ~qword_140C4DD40;
        v15 = HIDWORD(v46);
      }
      v10 += v15;
      if ( qword_140C4DD40 && (v13 & 0x10) == 0 )
        v13 &= ~qword_140C4DD40;
      v16 = HIDWORD(v13);
      v69 = v16;
      if ( v16 )
      {
        v17 = *(_QWORD *)(v12 + 8 * v16);
        v18 = v12 + 8 * v16;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v17 & 1) != 0
            && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
          {
            v60 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v60 )
            {
              v61 = *((_QWORD *)&v60->Flink + ((v18 >> 3) & 0x1FF));
              v62 = v17 | 0x20;
              if ( (v61 & 0x20) == 0 )
                v62 = v17;
              LOWORD(v17) = v62;
              if ( (v61 & 0x42) != 0 )
                LOWORD(v17) = v62 | 0x42;
            }
          }
          v9 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
        }
        if ( (v17 & 0xF000) == 0x1000 )
        {
          v19 = 1LL;
        }
        else
        {
          v48 = *(_QWORD *)(v18 + 8);
          v49 = v18 + 8;
          if ( v49 >= 0xFFFFF6FB7DBED000uLL && v49 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v48 & 1) != 0
              && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
            {
              v63 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v63 )
              {
                v64 = v48 | 0x20;
                v65 = *((_QWORD *)&v63->Flink + ((v49 >> 3) & 0x1FF));
                if ( (v65 & 0x20) == 0 )
                  v64 = v48;
                v48 = v64;
                if ( (v65 & 0x42) != 0 )
                  v48 = v64 | 0x42;
              }
            }
            v9 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
          }
          if ( qword_140C4DD40 && (v48 & 0x10) == 0 )
            v48 &= ~qword_140C4DD40;
          v19 = HIDWORD(v48);
        }
        if ( v16 + v19 == BugCheckParameter4 )
          goto LABEL_41;
      }
      if ( BugCheckParameter4 >= *v5 )
        goto LABEL_151;
      if ( v10 > 1 )
      {
        if ( *v5 - BugCheckParameter4 < v10 )
          goto LABEL_151;
        v41 = v5[1];
        v42 = *(_QWORD *)(v41 + 8 * (BugCheckParameter4 >> 6));
        v43 = (_QWORD *)(v41 + 8 * (BugCheckParameter4 >> 6));
        v44 = (_QWORD *)(v41 + 8 * ((BugCheckParameter4 + v10 - 1) >> 6));
        if ( v43 == v44 )
        {
          v45 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << BugCheckParameter4) & v42) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << BugCheckParameter4;
        }
        else
        {
          if ( ((-1LL << BugCheckParameter4) & v42) != -1LL << BugCheckParameter4 )
            goto LABEL_151;
          v50 = v43 + 1;
          if ( v50 != v44 )
          {
            while ( *v50 == -1LL )
            {
              if ( ++v50 == v44 )
                goto LABEL_75;
            }
LABEL_151:
            KeBugCheckEx(0xDAu, 0x504uLL, v14, v10, BugCheckParameter4);
          }
LABEL_75:
          v45 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v10 - 1)) & *v50) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v10 - 1);
        }
        if ( !v45 )
          goto LABEL_151;
      }
      else if ( v10 != 1 || !_bittest64((const signed __int64 *)v5[1], BugCheckParameter4) )
      {
        goto LABEL_151;
      }
      if ( !v7 )
      {
        MiInsertTbFlushEntry(v73, (__int64)(v14 << 25) >> 16, v10, 0LL);
        if ( (unsigned int)MiFlushTbListEarly((__int64)v73, (_KPROCESS *)1) == 1 )
        {
          _InterlockedOr(v66, 0);
          if ( (unsigned int)(KiTbFlushTimeStamp - v8) > 2
            || (v8 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v8) >= 2 )
          {
            goto LABEL_89;
          }
        }
        goto LABEL_40;
      }
      v20 = v10;
      do
      {
        v21 = ZeroPte;
        if ( !MiPteInShadowRange(v14) )
          goto LABEL_23;
        if ( !(unsigned int)MiPteHasShadow(v23, v22, v24, v25) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v21 = ZeroPte | 0x8000000000000000uLL;
          }
LABEL_23:
          *(_QWORD *)v14 = v21;
          goto LABEL_24;
        }
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
          v21 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v14 = v21;
        MiWritePteShadow(v14, v21);
LABEL_24:
        v14 += 8LL;
        --v20;
      }
      while ( v20 );
      v16 = v69;
      v26 = BugCheckParameter4 & 0x1F;
      v27 = v10;
      v28 = (volatile signed __int32 *)(v5[1] + 4 * (BugCheckParameter4 >> 5));
      if ( v26 + v10 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v28, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v26));
          v27 = v10 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v28;
        }
        if ( v27 >= 0x20 )
        {
          v53 = v27 >> 5;
          v27 += -32LL * (v27 >> 5);
          do
          {
            *v28++ = 0;
            --v53;
          }
          while ( v53 );
        }
        if ( v27 )
        {
          v29 = -1 << v27;
LABEL_28:
          _InterlockedAnd(v28, v29);
        }
      }
      else
      {
        if ( v10 != 32 )
        {
          v29 = ~(((1 << v10) - 1) << v26);
          goto LABEL_28;
        }
        *v28 = 0;
      }
      v30 = 512LL;
      if ( (v5[3] & 4) != 0 )
        v30 = 32LL;
      v31 = v30 - 1;
      v32 = BugCheckParameter4 & ~(v30 - 1);
      v33 = (~(v30 - 1) & (v30 + BugCheckParameter4 + v10 - 1)) - v32;
      if ( v33 )
      {
        v34 = v70;
        v35 = v32;
        while ( 1 )
        {
          if ( v35 < *v34 && *v34 - v35 >= v30 )
          {
            v36 = v34[1];
            v37 = *(_QWORD *)(v36 + 8 * (v35 >> 6));
            v38 = (_QWORD *)(v36 + 8 * (v35 >> 6));
            v39 = (_QWORD *)(v36 + 8 * ((v35 + v31) >> 6));
            if ( v38 == v39 )
            {
              v52 = (v37 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v30) << v35)) == 0;
LABEL_80:
              if ( v52 && (unsigned int)RtlInterlockedSetClearRunEx((__int64)v34, v35, v30) == 1 )
                MiReturnSystemPtes(v34, v35, v30, 0LL);
              goto LABEL_37;
            }
            if ( (v37 & (-1LL << v35)) == 0 )
            {
              v51 = v38 + 1;
              if ( v51 != v39 )
              {
                while ( !*v51 )
                {
                  if ( ++v51 == v39 )
                    goto LABEL_79;
                }
                goto LABEL_37;
              }
LABEL_79:
              v52 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v35 + (unsigned __int8)v31)) & *v51) == 0;
              goto LABEL_80;
            }
          }
LABEL_37:
          v35 += v30;
          if ( v35 - v32 >= v33 )
          {
            v16 = v69;
            v5 = v70;
            break;
          }
        }
      }
      v7 = v67;
      v6 = v10 + v71;
      v71 += v10;
LABEL_40:
      v10 = 0LL;
      v9 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
LABEL_41:
      v8 = v68;
      BugCheckParameter4 = v16;
    }
    while ( v16 );
    if ( !v7 )
    {
LABEL_89:
      if ( HIDWORD(v73[1]) )
        MiFlushTbList((__int64)v73, v9);
    }
    v4 = v72;
    ++v7;
    v8 = v68;
    v67 = v7;
    v9 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
  }
  while ( v7 < 2 );
  return v6;
}
