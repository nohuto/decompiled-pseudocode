/*
 * XREFs of MiReplenishBitMap @ 0x140203840
 * Callers:
 *     MiEmptyPteBins @ 0x140203670 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1402482D0 (MiInsertCachedPte.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140203350 (MiFlushTbListEarly.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     RtlInterlockedSetClearRunEx @ 0x140276A80 (RtlInterlockedSetClearRunEx.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiReturnSystemPtes @ 0x1402E6E74 (MiReturnSystemPtes.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

ULONG_PTR __fastcall MiReplenishBitMap(unsigned __int64 *a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR *v5; // r12
  ULONG_PTR v6; // rsi
  unsigned int v7; // r13d
  int v8; // ebx
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // rbp
  ULONG_PTR BugCheckParameter4; // r15
  ULONG_PTR v12; // r9
  unsigned __int64 v13; // r14
  ULONG_PTR v14; // rdi
  __int64 v15; // rcx
  ULONG_PTR v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  unsigned __int64 v21; // rbx
  ULONG_PTR v22; // r8
  unsigned __int64 v23; // rdx
  volatile signed __int32 *v24; // r9
  unsigned int v25; // eax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r13
  __int64 v28; // rsi
  unsigned __int64 v29; // r15
  unsigned __int64 *v30; // r14
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // r8
  _QWORD *v35; // r9
  ULONG_PTR v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // r9
  _QWORD *v40; // rdx
  bool v41; // zf
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r9
  _QWORD *v46; // r9
  _QWORD *v47; // r8
  bool v48; // zf
  unsigned __int64 v49; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  struct _LIST_ENTRY *v53; // rax
  __int64 v54; // rax
  __int64 v55; // r8
  struct _LIST_ENTRY *v56; // r8
  __int64 v57; // rax
  __int16 v58; // r8
  struct _LIST_ENTRY *v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  signed __int32 v62[8]; // [rsp+0h] [rbp-168h] BYREF
  int v63; // [rsp+30h] [rbp-138h]
  int v64; // [rsp+34h] [rbp-134h]
  ULONG_PTR v65; // [rsp+38h] [rbp-130h]
  unsigned __int64 *v66; // [rsp+40h] [rbp-128h]
  __int64 v67; // [rsp+48h] [rbp-120h]
  ULONG_PTR v68; // [rsp+50h] [rbp-118h]
  _QWORD v69[24]; // [rsp+60h] [rbp-108h] BYREF

  v68 = a2;
  v4 = a2;
  v66 = a1;
  v5 = a1;
  memset(v69, 0, 0xB8uLL);
  v6 = 0LL;
  v7 = 0;
  v67 = 0LL;
  v63 = 0;
  if ( a3 == 1 )
  {
    LODWORD(v69[1]) = 20;
    v69[3] = 0LL;
    _InterlockedOr(v62, 0);
    v8 = KiTbFlushTimeStamp;
  }
  else
  {
    v7 = 1;
    v8 = 0;
    v63 = 1;
  }
  v64 = v8;
  v9 = 0xFFFFF6FB7DBED000uLL;
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
          v51 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
          v52 = v13 | 0x20;
          if ( (v51 & 0x20) == 0 )
            v52 = *(_QWORD *)(v12 + 8 * BugCheckParameter4);
          v13 = v52;
          if ( (v51 & 0x42) != 0 )
            v13 = v52 | 0x42;
        }
        v9 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( (v13 & 0xF000) == 0x1000 )
      {
        v15 = 1LL;
      }
      else
      {
        v42 = *(_QWORD *)(v14 + 8);
        v43 = v14 + 8;
        if ( v14 + 8 >= 0xFFFFF6FB7DBED000uLL && v43 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v42 & 1) != 0
            && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
          {
            v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v53 )
            {
              v54 = *((_QWORD *)&v53->Flink + ((v43 >> 3) & 0x1FF));
              v55 = v42 | 0x20;
              if ( (v54 & 0x20) == 0 )
                v55 = *(_QWORD *)(v14 + 8);
              v42 = v55;
              if ( (v54 & 0x42) != 0 )
                v42 = v55 | 0x42;
            }
          }
          v9 = 0xFFFFF6FB7DBED000uLL;
        }
        if ( qword_140C4DE80 && (v42 & 0x10) == 0 )
          v42 &= ~qword_140C4DE80;
        v15 = HIDWORD(v42);
      }
      v10 += v15;
      if ( qword_140C4DE80 && (v13 & 0x10) == 0 )
        v13 &= ~qword_140C4DE80;
      v16 = HIDWORD(v13);
      v65 = v16;
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
            v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v56 )
            {
              v57 = *((_QWORD *)&v56->Flink + ((v18 >> 3) & 0x1FF));
              v58 = v17 | 0x20;
              if ( (v57 & 0x20) == 0 )
                v58 = v17;
              LOWORD(v17) = v58;
              if ( (v57 & 0x42) != 0 )
                LOWORD(v17) = v58 | 0x42;
            }
          }
          v9 = 0xFFFFF6FB7DBED000uLL;
        }
        if ( (v17 & 0xF000) == 0x1000 )
        {
          v19 = 1LL;
        }
        else
        {
          v44 = *(_QWORD *)(v18 + 8);
          v45 = v18 + 8;
          if ( v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v44 & 1) != 0
              && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
            {
              v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v59 )
              {
                v60 = v44 | 0x20;
                v61 = *((_QWORD *)&v59->Flink + ((v45 >> 3) & 0x1FF));
                if ( (v61 & 0x20) == 0 )
                  v60 = v44;
                v44 = v60;
                if ( (v61 & 0x42) != 0 )
                  v44 = v60 | 0x42;
              }
            }
            v9 = 0xFFFFF6FB7DBED000uLL;
          }
          if ( qword_140C4DE80 && (v44 & 0x10) == 0 )
            v44 &= ~qword_140C4DE80;
          v19 = HIDWORD(v44);
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
        v37 = v5[1];
        v38 = *(_QWORD *)(v37 + 8 * (BugCheckParameter4 >> 6));
        v39 = (_QWORD *)(v37 + 8 * (BugCheckParameter4 >> 6));
        v40 = (_QWORD *)(v37 + 8 * ((BugCheckParameter4 + v10 - 1) >> 6));
        if ( v39 == v40 )
        {
          v9 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << BugCheckParameter4;
          v41 = (v9 & v38) == v9;
        }
        else
        {
          if ( ((-1LL << BugCheckParameter4) & v38) != -1LL << BugCheckParameter4 )
            goto LABEL_151;
          v46 = v39 + 1;
          if ( v46 != v40 )
          {
            while ( *v46 == -1LL )
            {
              if ( ++v46 == v40 )
                goto LABEL_75;
            }
LABEL_151:
            KeBugCheckEx(0xDAu, 0x504uLL, v14, v10, BugCheckParameter4);
          }
LABEL_75:
          v9 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v10 - 1);
          v41 = (v9 & *v46) == v9;
        }
        if ( !v41 )
          goto LABEL_151;
      }
      else if ( v10 != 1 || !_bittest64((const signed __int64 *)v5[1], BugCheckParameter4) )
      {
        goto LABEL_151;
      }
      if ( !v7 )
      {
        MiInsertTbFlushEntry(v69, (__int64)(v14 << 25) >> 16, v10, 0LL);
        if ( (unsigned int)MiFlushTbListEarly((__int64)v69, 1) == 1 )
        {
          _InterlockedOr(v62, 0);
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
        if ( !(unsigned int)MiPteInShadowRange(v14, v9) )
          goto LABEL_23;
        if ( !(unsigned int)MiPteHasShadow() )
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
        if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
          v21 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v14 = v21;
        MiWritePteShadow(v14, v21);
LABEL_24:
        v14 += 8LL;
        --v20;
      }
      while ( v20 );
      v16 = v65;
      v22 = BugCheckParameter4 & 0x1F;
      v23 = v10;
      v24 = (volatile signed __int32 *)(v5[1] + 4 * (BugCheckParameter4 >> 5));
      if ( v22 + v10 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v24, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v22));
          v23 = v10 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v24;
        }
        if ( v23 >= 0x20 )
        {
          v49 = v23 >> 5;
          v23 += -32LL * (v23 >> 5);
          do
          {
            *v24++ = 0;
            --v49;
          }
          while ( v49 );
        }
        if ( v23 )
        {
          v25 = -1 << v23;
LABEL_28:
          _InterlockedAnd(v24, v25);
        }
      }
      else
      {
        if ( v10 != 32 )
        {
          v25 = ~(((1 << v10) - 1) << v22);
          goto LABEL_28;
        }
        *v24 = 0;
      }
      v26 = 512LL;
      if ( (v5[3] & 4) != 0 )
        v26 = 32LL;
      v27 = v26 - 1;
      v28 = BugCheckParameter4 & ~(v26 - 1);
      v29 = (~(v26 - 1) & (v26 + BugCheckParameter4 + v10 - 1)) - v28;
      if ( v29 )
      {
        v30 = v66;
        v31 = v28;
        while ( 1 )
        {
          if ( v31 < *v30 && *v30 - v31 >= v26 )
          {
            v32 = v30[1];
            v33 = *(_QWORD *)(v32 + 8 * (v31 >> 6));
            v34 = (_QWORD *)(v32 + 8 * (v31 >> 6));
            v35 = (_QWORD *)(v32 + 8 * ((v31 + v27) >> 6));
            if ( v34 == v35 )
            {
              v48 = (v33 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v26) << v31)) == 0;
LABEL_80:
              if ( v48 && (unsigned int)RtlInterlockedSetClearRunEx(v30, v31, v26) == 1 )
                MiReturnSystemPtes(v30, v31, v26, 0LL);
              goto LABEL_37;
            }
            if ( (v33 & (-1LL << v31)) == 0 )
            {
              v47 = v34 + 1;
              if ( v47 != v35 )
              {
                while ( !*v47 )
                {
                  if ( ++v47 == v35 )
                    goto LABEL_79;
                }
                goto LABEL_37;
              }
LABEL_79:
              v48 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v31 + (unsigned __int8)v27)) & *v47) == 0;
              goto LABEL_80;
            }
          }
LABEL_37:
          v31 += v26;
          if ( v31 - v28 >= v29 )
          {
            v16 = v65;
            v5 = v66;
            break;
          }
        }
      }
      v7 = v63;
      v6 = v10 + v67;
      v67 += v10;
LABEL_40:
      v10 = 0LL;
      v9 = 0xFFFFF6FB7DBED000uLL;
LABEL_41:
      v8 = v64;
      BugCheckParameter4 = v16;
    }
    while ( v16 );
    if ( !v7 )
    {
LABEL_89:
      if ( HIDWORD(v69[1]) )
        MiFlushTbList(v69);
    }
    v4 = v68;
    ++v7;
    v8 = v64;
    v63 = v7;
    v9 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v7 < 2 );
  return v6;
}
