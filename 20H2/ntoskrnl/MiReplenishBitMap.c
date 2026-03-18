/*
 * XREFs of MiReplenishBitMap @ 0x14023E340
 * Callers:
 *     MiEmptyPteBins @ 0x14023E170 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x140294850 (MiInsertCachedPte.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x14021EF70 (MiAttemptCoalesce.c)
 *     MiFlushTbListEarly @ 0x14023DC3C (MiFlushTbListEarly.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiIsPteCachingOptimizationEnabled @ 0x1403F4274 (MiIsPteCachingOptimizationEnabled.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiReplenishBitMap(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // r13
  unsigned int v10; // r15d
  int v11; // r12d
  unsigned __int64 v12; // r10
  ULONG_PTR v13; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  ULONG_PTR v17; // r11
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rax
  ULONG_PTR v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  struct _LIST_ENTRY *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  ULONG_PTR v33; // rax
  unsigned __int64 v34; // rdx
  bool v35; // zf
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdx
  ULONG_PTR v38; // rbx
  __int64 v39; // rdx
  ULONG_PTR v40; // r10
  ULONG_PTR v41; // rcx
  unsigned __int64 v42; // r9
  volatile signed __int32 *v43; // r8
  unsigned int v44; // eax
  signed __int32 v46[8]; // [rsp+0h] [rbp-158h] BYREF
  int v47; // [rsp+30h] [rbp-128h]
  __int64 v48; // [rsp+38h] [rbp-120h]
  ULONG_PTR v49; // [rsp+40h] [rbp-118h]
  _QWORD v50[24]; // [rsp+50h] [rbp-108h] BYREF

  v49 = a2;
  v4 = a2;
  v48 = a1;
  v5 = a1;
  memset(v50, 0, 0xB8uLL);
  v9 = 0LL;
  v10 = 0;
  if ( a3 == 1 )
  {
    LODWORD(v50[1]) = 20;
    v50[3] = 0LL;
    _InterlockedOr(v46, 0);
    v11 = KiTbFlushTimeStamp;
  }
  else
  {
    v10 = 1;
    v11 = 0;
  }
  v47 = v11;
  v12 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    v13 = 0LL;
    BugCheckParameter4 = v4;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v5 + 16);
      v16 = *(_QWORD *)(v15 + 8 * BugCheckParameter4);
      v17 = v15 + 8 * BugCheckParameter4;
      if ( v17 >= v12
        && v17 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v6, v8, v15)
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v18 = *(struct _LIST_ENTRY **)(Process + 1928);
        if ( v18 )
        {
          v19 = *((_QWORD *)&v18->Flink + ((v17 >> 3) & 0x1FF));
          v20 = v16 | 0x20;
          Process = (unsigned __int8)v19;
          LOBYTE(Process) = v19 & 0x20;
          if ( (v19 & 0x20) == 0 )
            v20 = v16;
          v16 = v20;
          if ( (v19 & 0x42) != 0 )
            v16 = v20 | 0x42;
        }
      }
      if ( (v16 & 0xF000) == 0x1000 )
      {
        v21 = 1LL;
      }
      else
      {
        v22 = *(_QWORD *)(v17 + 8);
        v8 = v17 + 8;
        if ( v17 + 8 >= v12
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(Process, v22, v8, v15)
          && (v22 & 1) != 0
          && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v23 = *(struct _LIST_ENTRY **)(Process + 1928);
          if ( v23 )
          {
            v24 = *((_QWORD *)&v23->Flink + ((v8 >> 3) & 0x1FF));
            v8 = v22 | 0x20;
            Process = (unsigned __int8)v24;
            LOBYTE(Process) = v24 & 0x20;
            if ( (v24 & 0x20) == 0 )
              v8 = v22;
            v22 = v8;
            if ( (v24 & 0x42) != 0 )
              v22 = v8 | 0x42;
          }
        }
        if ( qword_140C4DDC0 && (v22 & 0x10) == 0 )
          v22 &= ~qword_140C4DDC0;
        v21 = HIDWORD(v22);
      }
      v13 += v21;
      if ( qword_140C4DDC0 && (v16 & 0x10) == 0 )
        v16 &= ~qword_140C4DDC0;
      v25 = HIDWORD(v16);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v15 + 8 * v25);
        v15 += 8 * v25;
        if ( v15 >= v12
          && v15 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(Process, v26, v8, v15)
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v8 = *(_QWORD *)(Process + 1928);
          if ( v8 )
          {
            v27 = *(_QWORD *)(v8 + 8 * ((v15 >> 3) & 0x1FF));
            v8 = v26 | 0x20;
            Process = (unsigned __int8)v27;
            LOBYTE(Process) = v27 & 0x20;
            if ( (v27 & 0x20) == 0 )
              v8 = v26;
            LOWORD(v26) = v8;
            if ( (v27 & 0x42) != 0 )
              LOWORD(v26) = v8 | 0x42;
          }
        }
        if ( (v26 & 0xF000) == 0x1000 )
        {
          v6 = 1LL;
        }
        else
        {
          v28 = *(_QWORD *)(v15 + 8);
          v8 = v15 + 8;
          if ( v15 + 8 >= v12
            && v8 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(Process, v28, v8, v15)
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v29 = *(struct _LIST_ENTRY **)(Process + 1928);
            if ( v29 )
            {
              v30 = *((_QWORD *)&v29->Flink + ((v8 >> 3) & 0x1FF));
              v8 = v28 | 0x20;
              Process = (unsigned __int8)v30;
              LOBYTE(Process) = v30 & 0x20;
              if ( (v30 & 0x20) == 0 )
                v8 = v28;
              v28 = v8;
              if ( (v30 & 0x42) != 0 )
                v28 = v8 | 0x42;
            }
          }
          if ( qword_140C4DDC0 && (v28 & 0x10) == 0 )
            v28 &= ~qword_140C4DDC0;
          v6 = HIDWORD(v28);
        }
        if ( v25 + v6 == BugCheckParameter4 )
          goto LABEL_118;
      }
      if ( BugCheckParameter4 >= *(_QWORD *)v5 )
        goto LABEL_124;
      if ( v13 > 1 )
      {
        if ( *(_QWORD *)v5 - BugCheckParameter4 < v13 )
          goto LABEL_124;
        v31 = *(_QWORD *)(v5 + 8);
        v32 = *(_QWORD *)(v31 + 8 * (BugCheckParameter4 >> 6));
        v33 = v31 + 8 * (BugCheckParameter4 >> 6);
        v8 = v31 + 8 * ((v13 + BugCheckParameter4 - 1) >> 6);
        if ( v33 == v8 )
        {
          Process = BugCheckParameter4;
          v34 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v13) << BugCheckParameter4;
          v15 = v34 & v32;
          v35 = v15 == v34;
        }
        else
        {
          v15 = (-1LL << BugCheckParameter4) & v32;
          if ( v15 != -1LL << BugCheckParameter4 )
            goto LABEL_124;
          v36 = (_QWORD *)(v33 + 8);
          if ( v36 != (_QWORD *)v8 )
          {
            while ( *v36 == -1LL )
            {
              if ( ++v36 == (_QWORD *)v8 )
                goto LABEL_79;
            }
LABEL_124:
            KeBugCheckEx(0xDAu, 0x504uLL, v17, v13, BugCheckParameter4);
          }
LABEL_79:
          v37 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v13 + (unsigned __int8)BugCheckParameter4 - 1);
          Process = v37 & *v36;
          v35 = Process == v37;
        }
        if ( !v35 )
          goto LABEL_124;
        v12 = 0xFFFFF6FB7DBED000uLL;
      }
      else if ( v13 != 1 || !_bittest64(*(const signed __int64 **)(v5 + 8), BugCheckParameter4) )
      {
        goto LABEL_124;
      }
      if ( !v10 )
        break;
      v38 = v13;
      do
      {
        v39 = ZeroPte;
        if ( v17 < v12 || v17 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_99;
        if ( !(unsigned int)MiPteHasShadow(Process, ZeroPte, v8, v15) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v39 & 1) != 0 )
            v39 |= 0x8000000000000000uLL;
LABEL_99:
          *(_QWORD *)v17 = v39;
          goto LABEL_100;
        }
        if ( !HIBYTE(word_140C4DE88) && (v39 & 1) != 0 )
          v39 |= 0x8000000000000000uLL;
        *(_QWORD *)v17 = v39;
        MiWritePteShadow(v17, v39);
        v12 = 0xFFFFF6FB7DBED000uLL;
LABEL_100:
        v17 += 8LL;
        --v38;
      }
      while ( v38 );
      v5 = v48;
      v11 = v47;
      v40 = BugCheckParameter4 & 0x1F;
      v41 = BugCheckParameter4 >> 5;
      v42 = v13;
      v43 = (volatile signed __int32 *)(*(_QWORD *)(v48 + 8) + 4 * (BugCheckParameter4 >> 5));
      if ( v40 + v13 <= 0x20 )
      {
        if ( v13 == 32 )
        {
          *v43 = 0;
          goto LABEL_113;
        }
        v41 = BugCheckParameter4 & 0x1F;
        v44 = ~(((1 << v13) - 1) << v40);
LABEL_112:
        _InterlockedAnd(v43, v44);
        goto LABEL_113;
      }
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        v39 = 32 - (unsigned int)(BugCheckParameter4 & 0x1F);
        v41 = BugCheckParameter4 & 0x1F;
        _InterlockedAnd(v43, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v40));
        v42 = v13 - v39;
        ++v43;
      }
      if ( v42 >= 0x20 )
      {
        v39 = v42 >> 5;
        v42 += -32LL * (v42 >> 5);
        do
        {
          *v43++ = 0;
          --v39;
        }
        while ( v39 );
      }
      if ( v42 )
      {
        v41 = v42;
        v44 = -1 << v42;
        goto LABEL_112;
      }
LABEL_113:
      if ( !(unsigned int)MiIsPteCachingOptimizationEnabled(v41, v39, v43) || *(_QWORD *)(v5 + 88) > 0x40000uLL )
        MiAttemptCoalesce(v5, BugCheckParameter4, v13);
      v9 += v13;
LABEL_117:
      v13 = 0LL;
      v12 = 0xFFFFF6FB7DBED000uLL;
LABEL_118:
      BugCheckParameter4 = v25;
      if ( !v25 )
      {
        if ( !v10 )
          goto LABEL_120;
        goto LABEL_122;
      }
    }
    MiInsertTbFlushEntry(v50, (__int64)(v17 << 25) >> 16, v13, 0LL);
    if ( (unsigned int)MiFlushTbListEarly((__int64)v50, (_KPROCESS *)1) != 1 )
      goto LABEL_117;
    _InterlockedOr(v46, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v11) <= 2
      && ((v11 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v11) < 2) )
    {
      goto LABEL_117;
    }
LABEL_120:
    if ( HIDWORD(v50[1]) )
      MiFlushTbList(v50, v6);
LABEL_122:
    v4 = v49;
    ++v10;
    v12 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v10 < 2 );
  return v9;
}
