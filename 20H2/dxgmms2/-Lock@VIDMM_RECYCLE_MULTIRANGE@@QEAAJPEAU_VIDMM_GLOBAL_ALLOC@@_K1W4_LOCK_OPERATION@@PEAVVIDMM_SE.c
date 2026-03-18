/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00639D4
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0064140 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 * Callees:
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0061128 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0062EC0 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00637C8 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0063AF4 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0063BF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0063D08 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00C34C4 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        struct VIDMM_RECYCLE_RANGE **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_RECYCLE_RANGE *a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  struct VIDMM_RECYCLE_RANGE *v7; // r13
  __int64 v8; // rsi
  struct VIDMM_RECYCLE_RANGE *v11; // rcx
  VIDMM_RECYCLE_RANGE *k; // rdi
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // dl
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v22; // r14
  unsigned __int64 i; // rbp
  unsigned __int64 v24; // rax
  VIDMM_RECYCLE_RANGE *v25; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rdx
  int v28; // r13d
  struct VIDMM_RECYCLE_RANGE *v29; // rax
  enum _LOCK_OPERATION v30; // r8d
  VIDMM_RECYCLE_RANGE *v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // ebp
  enum _LOCK_OPERATION v36; // r8d
  VIDMM_RECYCLE_RANGE *v37; // rcx
  VIDMM_RECYCLE_RANGE *j; // rcx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  __int64 v40; // rdx
  VIDMM_RECYCLE_RANGE *v41; // rbx
  VIDMM_RECYCLE_RANGE *v42; // rax
  __int64 v43; // rdx
  VIDMM_RECYCLE_RANGE *v44; // rbx
  VIDMM_RECYCLE_RANGE *v45; // rax
  __int64 v46; // rdx
  VIDMM_RECYCLE_RANGE *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx

  v7 = a4;
  v8 = a3;
  if ( *((_BYTE *)this + 130) )
  {
    v19 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v19 + 24) = 270LL;
    *(_QWORD *)(v19 + 32) = 52LL;
    *(_QWORD *)(v19 + 40) = 12LL;
    *(_OWORD *)(v19 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  this[28] = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 12);
  if ( v8 || (v11 = this[6], v7 != (struct VIDMM_RECYCLE_RANGE *)(this[5] - v11)) || v11 != this[4] )
  {
    NextRange = this[8];
    v22 = (unsigned __int64)this[6] + v8;
    for ( i = (unsigned __int64)v7 + v22; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
    {
      if ( *((_QWORD *)NextRange + 5) > v22 )
        break;
    }
    v24 = *((_QWORD *)NextRange + 5);
    v25 = NextRange;
    v26 = *((_QWORD *)NextRange + 4);
    if ( v24 < i )
    {
      while ( 1 )
      {
        v29 = VIDMM_RECYCLE_RANGE::GetNextRange(v25);
        v31 = v29;
        if ( !v29 || *((_QWORD *)v29 + 5) >= i )
          break;
        v28 = VIDMM_RECYCLE_RANGE::Lock(v29, a2, v30, a6);
        v25 = v31;
        if ( v28 < 0 )
        {
          while ( 1 )
          {
            PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v25);
            v41 = PreviousRange;
            if ( PreviousRange == NextRange )
              break;
            VIDMM_RECYCLE_RANGE::Unlock(PreviousRange, v40);
            v25 = v41;
          }
          return (unsigned int)v28;
        }
      }
      v32 = *((_QWORD *)v29 + 5);
      if ( v22 != v26 )
      {
        v33 = v22 - *((_QWORD *)NextRange + 4);
        LOBYTE(a5) = 1;
        VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v33, (bool *)&a5);
        if ( (_BYTE)a5 )
          NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      if ( v32 != i )
      {
        v34 = i - *((_QWORD *)v31 + 4);
        LOBYTE(a5) = 1;
        VIDMM_RECYCLE_RANGE::SplitAt(v31, v34, (bool *)&a5);
      }
      v35 = VIDMM_RECYCLE_RANGE::Lock(NextRange, a2, v30, a6);
      v37 = v31;
      if ( v35 < 0 )
      {
        while ( 1 )
        {
          v42 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v37);
          v44 = v42;
          if ( v42 == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(v42, v43);
          v37 = v44;
        }
      }
      else
      {
        v35 = VIDMM_RECYCLE_RANGE::Lock(v31, a2, v36, a6);
        if ( v35 >= 0 )
        {
          v7 = a4;
          v8 = a3;
LABEL_53:
          ++*((_DWORD *)this + 23);
          if ( a7 )
            *((_BYTE *)this + 129) = 1;
          else
            *((_BYTE *)this + 128) = 1;
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded((VIDMM_RECYCLE_MULTIRANGE *)this);
          v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v49, v48);
          v16[4] = v8;
LABEL_12:
          v16[3] = this;
          v16[5] = v7;
          WdLogEvent5_WdEvent(v16);
          *((_DWORD *)this + 54) = 4;
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)this, v17);
          return 0LL;
        }
        for ( j = v31; ; j = v47 )
        {
          v45 = VIDMM_RECYCLE_RANGE::GetPreviousRange(j);
          v47 = v45;
          if ( v45 == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(v45, v46);
        }
        VIDMM_RECYCLE_RANGE::Unlock(NextRange, v46);
      }
      return (unsigned int)v35;
    }
    if ( v22 == v26 )
    {
      if ( v24 == i )
      {
LABEL_46:
        result = VIDMM_RECYCLE_RANGE::Lock(v25, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( (int)result < 0 )
          return result;
        goto LABEL_53;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v26, (bool *)&a5);
    }
    else
    {
      v27 = v22 - v26;
      if ( v24 != i )
      {
        v25 = VIDMM_RECYCLE_RANGE::SplitMiddle(NextRange, v27, i - v26);
        goto LABEL_46;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v27, (bool *)&a5);
      if ( (_BYTE)a5 )
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    }
    v25 = NextRange;
    goto LABEL_46;
  }
  for ( k = this[8]; ; k = VIDMM_RECYCLE_RANGE::GetNextRange(k) )
  {
    v13 = VIDMM_RECYCLE_RANGE::Lock(k, a2, (enum _LOCK_OPERATION)a3, a6);
    if ( v13 < 0 )
      break;
    if ( k == this[9] )
    {
      ++*((_DWORD *)this + 23);
      if ( a7 )
        *((_BYTE *)this + 129) = 1;
      else
        *((_BYTE *)this + 128) = 1;
      VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded((VIDMM_RECYCLE_MULTIRANGE *)this);
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
      v16[4] = 0LL;
      goto LABEL_12;
    }
  }
  while ( k != this[8] )
  {
    k = VIDMM_RECYCLE_RANGE::GetPreviousRange(k);
    VIDMM_RECYCLE_RANGE::Unlock(k, v20);
  }
  return (unsigned int)v13;
}
