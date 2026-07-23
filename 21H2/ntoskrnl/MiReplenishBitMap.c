/*
 * XREFs of MiReplenishBitMap @ 0x140205D50
 * Callers:
 *     MiInsertCachedPte @ 0x1402EA450 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x140319FD0 (MiEmptyPteBins.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x1402063F8 (MiFlushTbListEarly.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiAttemptCoalesce @ 0x140353C10 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiReplenishBitMap(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // r14
  unsigned __int64 Process; // rcx
  __int64 v7; // r13
  unsigned int v8; // r15d
  int v9; // r12d
  unsigned __int64 v10; // r10
  ULONG_PTR v11; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  ULONG_PTR v15; // r11
  struct _LIST_ENTRY *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  struct _LIST_ENTRY *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  ULONG_PTR v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // r9
  struct _LIST_ENTRY *v28; // r8
  __int64 v29; // rax
  __int16 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  struct _LIST_ENTRY *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r9
  _QWORD *v39; // rax
  _QWORD *v40; // r8
  bool v41; // zf
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdx
  ULONG_PTR v44; // rbx
  __int64 v45; // rdx
  ULONG_PTR v46; // r10
  unsigned __int64 v47; // r9
  volatile signed __int32 *v48; // r8
  unsigned int v49; // eax
  unsigned __int64 v50; // rdx
  signed __int32 v52[8]; // [rsp+0h] [rbp-158h] BYREF
  int v53; // [rsp+30h] [rbp-128h]
  __int64 v54; // [rsp+38h] [rbp-120h]
  ULONG_PTR v55; // [rsp+40h] [rbp-118h]
  _QWORD v56[24]; // [rsp+50h] [rbp-108h] BYREF

  v55 = a2;
  v4 = a2;
  v54 = a1;
  v5 = a1;
  memset(v56, 0, 0xB8uLL);
  v7 = 0LL;
  v8 = 0;
  if ( a3 == 1 )
  {
    LODWORD(v56[1]) = 20;
    v56[3] = 0LL;
    _InterlockedOr(v52, 0);
    v9 = KiTbFlushTimeStamp;
  }
  else
  {
    v8 = 1;
    v9 = 0;
  }
  v53 = v9;
  v10 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    v11 = 0LL;
    BugCheckParameter4 = v4;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v5 + 16);
      v14 = *(_QWORD *)(v13 + 8 * BugCheckParameter4);
      v15 = v13 + 8 * BugCheckParameter4;
      if ( v15 >= v10
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)((__int64 (*)(void))MiPteHasShadow)()
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v16 = *(struct _LIST_ENTRY **)(Process + 1928);
        if ( v16 )
        {
          v17 = *((_QWORD *)&v16->Flink + ((v15 >> 3) & 0x1FF));
          v18 = v14 | 0x20;
          Process = (unsigned __int8)v17;
          LOBYTE(Process) = v17 & 0x20;
          if ( (v17 & 0x20) == 0 )
            v18 = v14;
          v14 = v18;
          if ( (v17 & 0x42) != 0 )
            v14 = v18 | 0x42;
        }
      }
      if ( (v14 & 0xF000) == 0x1000 )
      {
        v19 = 1LL;
      }
      else
      {
        v20 = *(_QWORD *)(v15 + 8);
        if ( v15 + 8 >= v10
          && v15 + 8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(Process, v20)
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v22 = *(struct _LIST_ENTRY **)(Process + 1928);
          if ( v22 )
          {
            v23 = *((_QWORD *)&v22->Flink + ((v21 >> 3) & 0x1FF));
            v24 = v20 | 0x20;
            Process = (unsigned __int8)v23;
            LOBYTE(Process) = v23 & 0x20;
            if ( (v23 & 0x20) == 0 )
              v24 = v20;
            v20 = v24;
            if ( (v23 & 0x42) != 0 )
              v20 = v24 | 0x42;
          }
        }
        if ( qword_140C4DF80 && (v20 & 0x10) == 0 )
          v20 &= ~qword_140C4DF80;
        v19 = HIDWORD(v20);
      }
      v11 += v19;
      if ( qword_140C4DF80 && (v14 & 0x10) == 0 )
        v14 &= ~qword_140C4DF80;
      v25 = HIDWORD(v14);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v13 + 8 * v25);
        v27 = v13 + 8 * v25;
        if ( v27 >= v10
          && v27 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(Process, v26)
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v28 = *(struct _LIST_ENTRY **)(Process + 1928);
          if ( v28 )
          {
            v29 = *((_QWORD *)&v28->Flink + ((v27 >> 3) & 0x1FF));
            v30 = v26 | 0x20;
            Process = (unsigned __int8)v29;
            LOBYTE(Process) = v29 & 0x20;
            if ( (v29 & 0x20) == 0 )
              v30 = v26;
            LOWORD(v26) = v30;
            if ( (v29 & 0x42) != 0 )
              LOWORD(v26) = v30 | 0x42;
          }
        }
        if ( (v26 & 0xF000) == 0x1000 )
        {
          v31 = 1LL;
        }
        else
        {
          v32 = *(_QWORD *)(v27 + 8);
          if ( v27 + 8 >= v10
            && v27 + 8 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(Process, v32)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v34 = *(struct _LIST_ENTRY **)(Process + 1928);
            if ( v34 )
            {
              v35 = *((_QWORD *)&v34->Flink + ((v33 >> 3) & 0x1FF));
              v36 = v32 | 0x20;
              Process = (unsigned __int8)v35;
              LOBYTE(Process) = v35 & 0x20;
              if ( (v35 & 0x20) == 0 )
                v36 = v32;
              v32 = v36;
              if ( (v35 & 0x42) != 0 )
                v32 = v36 | 0x42;
            }
          }
          if ( qword_140C4DF80 && (v32 & 0x10) == 0 )
            v32 &= ~qword_140C4DF80;
          v31 = HIDWORD(v32);
        }
        if ( v25 + v31 == BugCheckParameter4 )
          goto LABEL_117;
      }
      if ( BugCheckParameter4 >= *(_QWORD *)v5 )
        goto LABEL_123;
      if ( v11 > 1 )
      {
        if ( *(_QWORD *)v5 - BugCheckParameter4 < v11 )
          goto LABEL_123;
        v37 = *(_QWORD *)(v5 + 8);
        v38 = *(_QWORD *)(v37 + 8 * (BugCheckParameter4 >> 6));
        v39 = (_QWORD *)(v37 + 8 * (BugCheckParameter4 >> 6));
        v40 = (_QWORD *)(v37 + 8 * ((v11 + BugCheckParameter4 - 1) >> 6));
        if ( v39 == v40 )
        {
          Process = BugCheckParameter4;
          v41 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v11) << BugCheckParameter4) & v38) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v11) << BugCheckParameter4;
        }
        else
        {
          if ( ((-1LL << BugCheckParameter4) & v38) != -1LL << BugCheckParameter4 )
            goto LABEL_123;
          v42 = v39 + 1;
          if ( v42 != v40 )
          {
            while ( *v42 == -1LL )
            {
              if ( ++v42 == v40 )
                goto LABEL_79;
            }
LABEL_123:
            KeBugCheckEx(0xDAu, 0x504uLL, v15, v11, BugCheckParameter4);
          }
LABEL_79:
          v43 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v11 + (unsigned __int8)BugCheckParameter4 - 1);
          Process = v43 & *v42;
          v41 = Process == v43;
        }
        if ( !v41 )
          goto LABEL_123;
        v10 = 0xFFFFF6FB7DBED000uLL;
      }
      else if ( v11 != 1 || !_bittest64(*(const signed __int64 **)(v5 + 8), BugCheckParameter4) )
      {
        goto LABEL_123;
      }
      if ( !v8 )
        break;
      v44 = v11;
      do
      {
        v45 = ZeroPte;
        if ( v15 < v10 || v15 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_99;
        if ( !(unsigned int)MiPteHasShadow(Process, ZeroPte) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v45 & 1) != 0 )
            v45 |= 0x8000000000000000uLL;
LABEL_99:
          *(_QWORD *)v15 = v45;
          goto LABEL_100;
        }
        if ( !HIBYTE(word_140C4E048) && (v45 & 1) != 0 )
          v45 |= 0x8000000000000000uLL;
        *(_QWORD *)v15 = v45;
        MiWritePteShadow(v15);
        v10 = 0xFFFFF6FB7DBED000uLL;
LABEL_100:
        v15 += 8LL;
        --v44;
      }
      while ( v44 );
      v5 = v54;
      v9 = v53;
      v46 = BugCheckParameter4 & 0x1F;
      Process = BugCheckParameter4 >> 5;
      v47 = v11;
      v48 = (volatile signed __int32 *)(*(_QWORD *)(v54 + 8) + 4 * (BugCheckParameter4 >> 5));
      if ( v46 + v11 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          Process = BugCheckParameter4 & 0x1F;
          _InterlockedAnd(v48, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v46));
          v47 = v11 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v48;
        }
        if ( v47 >= 0x20 )
        {
          v50 = v47 >> 5;
          v47 += -32LL * (v47 >> 5);
          do
          {
            *v48++ = 0;
            --v50;
          }
          while ( v50 );
        }
        if ( v47 )
        {
          Process = v47;
          v49 = -1 << v47;
          goto LABEL_112;
        }
      }
      else
      {
        if ( v11 == 32 )
        {
          *v48 = 0;
          goto LABEL_113;
        }
        Process = BugCheckParameter4 & 0x1F;
        v49 = ~(((1 << v11) - 1) << v46);
LABEL_112:
        _InterlockedAnd(v48, v49);
      }
LABEL_113:
      if ( *(_QWORD *)(v5 + 88) > 0x40000uLL )
        MiAttemptCoalesce(v5, BugCheckParameter4, v11, v47);
      v7 += v11;
LABEL_116:
      v11 = 0LL;
      v10 = 0xFFFFF6FB7DBED000uLL;
LABEL_117:
      BugCheckParameter4 = v25;
      if ( !v25 )
      {
        if ( !v8 )
          goto LABEL_119;
        goto LABEL_121;
      }
    }
    MiInsertTbFlushEntry(v56, (__int64)(v15 << 25) >> 16, v11, 0LL);
    if ( (unsigned int)MiFlushTbListEarly(v56, 1LL) != 1 )
      goto LABEL_116;
    _InterlockedOr(v52, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v9) <= 2 && ((v9 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v9) < 2) )
      goto LABEL_116;
LABEL_119:
    if ( HIDWORD(v56[1]) )
      MiFlushTbList(v56);
LABEL_121:
    v4 = v55;
    ++v8;
    v10 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v8 < 2 );
  return v7;
}
