/*
 * XREFs of MiReplenishBitMap @ 0x140288BB0
 * Callers:
 *     MiInsertCachedPte @ 0x140245C00 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x14030F280 (MiEmptyPteBins.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140289258 (MiFlushTbListEarly.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiAttemptCoalesce @ 0x140348EC0 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
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
  ULONG_PTR v39; // r10
  unsigned __int64 v40; // r9
  unsigned int v41; // eax
  signed __int32 v43[8]; // [rsp+0h] [rbp-158h] BYREF
  int v44; // [rsp+30h] [rbp-128h]
  __int64 v45; // [rsp+38h] [rbp-120h]
  ULONG_PTR v46; // [rsp+40h] [rbp-118h]
  _QWORD v47[24]; // [rsp+50h] [rbp-108h] BYREF

  v46 = a2;
  v4 = a2;
  v45 = a1;
  v5 = a1;
  memset(v47, 0, 0xB8uLL);
  v9 = 0LL;
  v10 = 0;
  if ( a3 == 1 )
  {
    LODWORD(v47[1]) = 20;
    v47[3] = 0LL;
    _InterlockedOr(v43, 0);
    v11 = KiTbFlushTimeStamp;
  }
  else
  {
    v10 = 1;
    v11 = 0;
  }
  v44 = v11;
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
        if ( qword_140C4DF40 && (v22 & 0x10) == 0 )
          v22 &= ~qword_140C4DF40;
        v21 = HIDWORD(v22);
      }
      v13 += v21;
      if ( qword_140C4DF40 && (v16 & 0x10) == 0 )
        v16 &= ~qword_140C4DF40;
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
          if ( qword_140C4DF40 && (v28 & 0x10) == 0 )
            v28 &= ~qword_140C4DF40;
          v6 = HIDWORD(v28);
        }
        if ( v25 + v6 == BugCheckParameter4 )
          goto LABEL_117;
      }
      if ( BugCheckParameter4 >= *(_QWORD *)v5 )
        goto LABEL_123;
      if ( v13 > 1 )
      {
        if ( *(_QWORD *)v5 - BugCheckParameter4 < v13 )
          goto LABEL_123;
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
            goto LABEL_123;
          v36 = (_QWORD *)(v33 + 8);
          if ( v36 != (_QWORD *)v8 )
          {
            while ( *v36 == -1LL )
            {
              if ( ++v36 == (_QWORD *)v8 )
                goto LABEL_79;
            }
LABEL_123:
            KeBugCheckEx(0xDAu, 0x504uLL, v17, v13, BugCheckParameter4);
          }
LABEL_79:
          v37 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v13 + (unsigned __int8)BugCheckParameter4 - 1);
          Process = v37 & *v36;
          v35 = Process == v37;
        }
        if ( !v35 )
          goto LABEL_123;
        v12 = 0xFFFFF6FB7DBED000uLL;
      }
      else if ( v13 != 1 || !_bittest64(*(const signed __int64 **)(v5 + 8), BugCheckParameter4) )
      {
        goto LABEL_123;
      }
      if ( !v10 )
        break;
      v38 = v13;
      do
      {
        v6 = ZeroPte;
        if ( v17 < v12 || v17 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_99;
        if ( !(unsigned int)MiPteHasShadow(Process, ZeroPte, v8, v15) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v6 & 1) != 0 )
            v6 |= 0x8000000000000000uLL;
LABEL_99:
          *(_QWORD *)v17 = v6;
          goto LABEL_100;
        }
        if ( !HIBYTE(word_140C4E008) && (v6 & 1) != 0 )
          v6 |= 0x8000000000000000uLL;
        *(_QWORD *)v17 = v6;
        MiWritePteShadow(v17, v6);
        v12 = 0xFFFFF6FB7DBED000uLL;
LABEL_100:
        v17 += 8LL;
        --v38;
      }
      while ( v38 );
      v5 = v45;
      v11 = v44;
      v39 = BugCheckParameter4 & 0x1F;
      Process = BugCheckParameter4 >> 5;
      v40 = v13;
      v8 = *(_QWORD *)(v45 + 8) + 4 * (BugCheckParameter4 >> 5);
      if ( v39 + v13 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          v6 = 32 - (unsigned int)(BugCheckParameter4 & 0x1F);
          Process = BugCheckParameter4 & 0x1F;
          _InterlockedAnd((volatile signed __int32 *)v8, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v39));
          v40 = v13 - v6;
          v8 += 4LL;
        }
        if ( v40 >= 0x20 )
        {
          v6 = v40 >> 5;
          v40 += -32LL * (v40 >> 5);
          do
          {
            *(_DWORD *)v8 = 0;
            v8 += 4LL;
            --v6;
          }
          while ( v6 );
        }
        if ( v40 )
        {
          Process = v40;
          v41 = -1 << v40;
          goto LABEL_112;
        }
      }
      else
      {
        if ( v13 == 32 )
        {
          *(_DWORD *)v8 = 0;
          goto LABEL_113;
        }
        Process = BugCheckParameter4 & 0x1F;
        v41 = ~(((1 << v13) - 1) << v39);
LABEL_112:
        _InterlockedAnd((volatile signed __int32 *)v8, v41);
      }
LABEL_113:
      if ( *(_QWORD *)(v5 + 88) > 0x40000uLL )
        MiAttemptCoalesce(v5, BugCheckParameter4, v13);
      v9 += v13;
LABEL_116:
      v13 = 0LL;
      v12 = 0xFFFFF6FB7DBED000uLL;
LABEL_117:
      BugCheckParameter4 = v25;
      if ( !v25 )
      {
        if ( !v10 )
          goto LABEL_119;
        goto LABEL_121;
      }
    }
    MiInsertTbFlushEntry(v47, (__int64)(v17 << 25) >> 16, v13, 0LL);
    if ( (unsigned int)MiFlushTbListEarly(v47, 1LL) != 1 )
      goto LABEL_116;
    _InterlockedOr(v43, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v11) <= 2
      && ((v11 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v11) < 2) )
    {
      goto LABEL_116;
    }
LABEL_119:
    if ( HIDWORD(v47[1]) )
      MiFlushTbList(v47);
LABEL_121:
    v4 = v46;
    ++v10;
    v12 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v10 < 2 );
  return v9;
}
