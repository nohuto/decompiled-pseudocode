/*
 * XREFs of MiLockPageTablePage @ 0x14024F390
 * Callers:
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x14024DD50 (MiProbeLockFrame.c)
 *     MiLockPageTableRange @ 0x14035708C (MiLockPageTableRange.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, unsigned __int64 CachedResidentAvailable)
{
  unsigned int v2; // r15d
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int32 v11; // eax
  unsigned int i; // ebp
  bool v13; // zf
  unsigned __int64 v14; // rdi
  struct _KPRCB *v15; // r8
  __int64 v16; // rdx
  signed __int32 v17; // eax
  char v19; // r9
  __int64 v20; // rax
  char v21; // r8
  unsigned __int64 v22; // rdi
  struct _KPRCB *v23; // r8
  signed __int32 v24; // eax
  int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+78h] [rbp+10h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v3 = CachedResidentAvailable;
  v4 = a1;
  if ( (_DWORD)CachedResidentAvailable == 1 )
  {
    v5 = a1;
  }
  else
  {
    v5 = 0LL;
    if ( !(_DWORD)CachedResidentAvailable )
      v5 = a1;
  }
  v27 = v5;
  v6 = 1;
  while ( 1 )
  {
LABEL_6:
    if ( v3 == 1 )
      v4 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_17;
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26, CachedResidentAvailable);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    if ( v3 == 1 && v4 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    v7 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v7 >= 0x10000 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
    if ( v3 == 2 )
    {
      v8 = 3LL;
    }
    else
    {
      v8 = 1LL;
      if ( !v3 )
        v8 = 4LL;
    }
    v9 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL));
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
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - v8,
                  CachedResidentAvailable);
          v13 = (_DWORD)CachedResidentAvailable == v11;
          CachedResidentAvailable = v11;
          if ( v13 )
            goto LABEL_27;
        }
        while ( v8 <= v11 );
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v9, v8, 512LL) )
      return 0LL;
LABEL_27:
    for ( i = 0; ; ++i )
    {
      v13 = i == v8;
      if ( i >= v8 )
        goto LABEL_38;
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25, CachedResidentAvailable);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      if ( v3 == 1 && v4 != 48 * (*(_QWORD *)(v27 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        break;
      CachedResidentAvailable = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( CachedResidentAvailable >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_54;
      }
      else if ( CachedResidentAvailable >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v6 = 0;
LABEL_37:
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 = i == v8;
LABEL_38:
        if ( !v13 )
        {
          v14 = v8 - i;
          if ( (ULONG_PTR *)v9 == &MiSystemPartition )
          {
            v15 = KeGetCurrentPrcb();
            v16 = (int)v15->CachedResidentAvailable;
            if ( (_DWORD)v16 != -1 )
            {
              if ( v14 + v16 <= 0x100 )
              {
                do
                {
                  if ( v14 >= 0x80000 )
                    break;
                  v17 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v15->CachedResidentAvailable,
                          v14 + v16,
                          v16);
                  v13 = (_DWORD)v16 == v17;
                  LODWORD(v16) = v17;
                  if ( v13 )
                    return v6;
                }
                while ( v17 != -1 && v14 + v17 <= 0x100 );
              }
              if ( (int)v16 > 192
                && (_DWORD)v16 == _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v15->CachedResidentAvailable,
                                    192,
                                    v16) )
              {
                v14 += (int)v16 - 192;
              }
            }
          }
          if ( v14 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 7168), v14);
        }
        return v6;
      }
      *(_QWORD *)(v4 + 24) ^= ((CachedResidentAvailable + 0x10000) ^ *(_QWORD *)(v4 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_54:
      if ( CachedResidentAvailable >= 0x10000 )
        goto LABEL_37;
      v19 = *(_BYTE *)(v4 + 34);
      v20 = 0LL;
      if ( (v19 & 0x10) == 0 )
      {
        CachedResidentAvailable = *(unsigned int *)(v4 + 16);
        v21 = *(_BYTE *)(v4 + 34);
        if ( (CachedResidentAvailable & 0x400) == 0 && (v19 & 8) == 0 )
        {
          v20 = MiCapturePageFileInfoInline(v4 + 16, 1LL);
          v21 = *(_BYTE *)(v4 + 34);
        }
        *(_BYTE *)(v4 + 34) = v21 | 0x10;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v20 )
        MiReleasePageFileInfo(v9, v20, 1LL);
      v4 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v8 - i;
    if ( (ULONG_PTR *)v9 == &MiSystemPartition )
    {
      v23 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v23->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v22 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v22 >= 0x80000 )
              break;
            v24 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v23->CachedResidentAvailable,
                    v22 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v13 = (_DWORD)CachedResidentAvailable == v24;
            v5 = v27;
            CachedResidentAvailable = v24;
            if ( v13 )
              goto LABEL_6;
          }
          while ( v24 != -1 && v22 + v24 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v23->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v22 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    v5 = v27;
    if ( v22 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 7168), v22);
  }
  if ( v7 < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
