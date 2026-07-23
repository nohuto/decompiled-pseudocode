/*
 * XREFs of MiLockPageTablePage @ 0x1402AE6F0
 * Callers:
 *     MiLockPageTableRange @ 0x1402474BC (MiLockPageTableRange.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1402AF5D0 (MiProbeLockFrame.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  unsigned __int32 v12; // eax
  unsigned int i; // ebp
  bool v14; // zf
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  struct _KPRCB *v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // eax
  char v21; // r9
  unsigned __int64 v22; // rax
  char v23; // r8
  unsigned __int64 v24; // rdi
  struct _KPRCB *v25; // r8
  __int64 v26; // rdx
  signed __int32 v27; // eax
  int v28; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v4 = a1;
  if ( a2 == 1 )
  {
    v5 = a1;
  }
  else
  {
    v5 = 0LL;
    if ( !a2 )
      v5 = a1;
  }
  v30 = v5;
  v6 = 1;
  while ( 1 )
  {
LABEL_6:
    if ( a2 == 1 )
      v4 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_17;
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    if ( a2 == 1 && v4 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    v7 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v7 >= 0x10000 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
    if ( a2 == 2 )
    {
      v8 = 3LL;
    }
    else
    {
      v8 = 1LL;
      if ( !a2 )
        v8 = 4LL;
    }
    v9 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL));
    if ( (ULONG_PTR *)v9 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( v8 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v12 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - v8,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v12;
          LODWORD(CachedResidentAvailable) = v12;
          if ( v14 )
            goto LABEL_27;
        }
        while ( v8 <= v12 );
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v9, v8, 512LL) )
      return 0LL;
LABEL_27:
    for ( i = 0; ; ++i )
    {
      v14 = i == v8;
      if ( i >= v8 )
        goto LABEL_38;
      v28 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v28);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      if ( a2 == 1 && v4 != 48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        break;
      v15 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( v15 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_54;
      }
      else if ( v15 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v6 = 0;
LABEL_37:
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v14 = i == v8;
LABEL_38:
        if ( !v14 )
        {
          v16 = v8 - i;
          if ( (ULONG_PTR *)v9 == &MiSystemPartition )
          {
            v17 = KeGetCurrentPrcb();
            v18 = (int)v17->CachedResidentAvailable;
            if ( (_DWORD)v18 != -1 )
            {
              if ( v16 + v18 <= 0x100 )
              {
                do
                {
                  if ( v16 >= 0x80000 )
                    break;
                  v19 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v17->CachedResidentAvailable,
                          v16 + v18,
                          v18);
                  v14 = (_DWORD)v18 == v19;
                  LODWORD(v18) = v19;
                  if ( v14 )
                    return v6;
                }
                while ( v19 != -1 && v16 + v19 <= 0x100 );
              }
              if ( (int)v18 > 192
                && (_DWORD)v18 == _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v17->CachedResidentAvailable,
                                    192,
                                    v18) )
              {
                v16 += (int)v18 - 192;
              }
            }
          }
          if ( v16 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 7168), v16);
        }
        return v6;
      }
      *(_QWORD *)(v4 + 24) ^= ((v15 + 0x10000) ^ *(_QWORD *)(v4 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_54:
      if ( v15 >= 0x10000 )
        goto LABEL_37;
      v21 = *(_BYTE *)(v4 + 34);
      v22 = 0LL;
      if ( (v21 & 0x10) == 0 )
      {
        v23 = *(_BYTE *)(v4 + 34);
        if ( (*(_DWORD *)(v4 + 16) & 0x400LL) == 0 && (v21 & 8) == 0 )
        {
          v22 = MiCapturePageFileInfoInline((unsigned __int64 *)(v4 + 16), 1, 0);
          v23 = *(_BYTE *)(v4 + 34);
        }
        *(_BYTE *)(v4 + 34) = v23 | 0x10;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 )
        MiReleasePageFileInfo(v9, v22, 1);
      v4 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v24 = v8 - i;
    if ( (ULONG_PTR *)v9 == &MiSystemPartition )
    {
      v25 = KeGetCurrentPrcb();
      v26 = (int)v25->CachedResidentAvailable;
      if ( (_DWORD)v26 != -1 )
      {
        if ( v24 + v26 <= 0x100 )
        {
          do
          {
            if ( v24 >= 0x80000 )
              break;
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)&v25->CachedResidentAvailable, v24 + v26, v26);
            v14 = (_DWORD)v26 == v27;
            v5 = v30;
            LODWORD(v26) = v27;
            if ( v14 )
              goto LABEL_6;
          }
          while ( v27 != -1 && v24 + v27 <= 0x100 );
        }
        if ( (int)v26 > 192
          && (_DWORD)v26 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v25->CachedResidentAvailable,
                              192,
                              v26) )
        {
          v24 += (int)v26 - 192;
        }
      }
    }
    v5 = v30;
    if ( v24 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 7168), v24);
  }
  if ( v7 < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
