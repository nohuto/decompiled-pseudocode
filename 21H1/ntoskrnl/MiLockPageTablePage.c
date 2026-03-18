/*
 * XREFs of MiLockPageTablePage @ 0x1402A83C0
 * Callers:
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1402A6D80 (MiProbeLockFrame.c)
 *     MiLockPageTableRange @ 0x14031949C (MiLockPageTableRange.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, unsigned __int64 a2, __int64 CurrentPrcb)
{
  unsigned int v3; // r15d
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r9
  unsigned int v8; // r13d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int32 v12; // eax
  unsigned int i; // ebp
  bool v14; // zf
  unsigned __int64 v15; // rdi
  struct _KPRCB *v16; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v18; // eax
  unsigned __int8 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  signed __int32 v23; // eax
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( (_DWORD)a2 == 1 )
  {
    v6 = a1;
  }
  else
  {
    v6 = 0LL;
    if ( !(_DWORD)a2 )
      v6 = a1;
  }
  v26 = v6;
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  v8 = 1;
  while ( 1 )
  {
LABEL_6:
    if ( v4 == 1 )
      v5 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_18;
    v25 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v25, a2, CurrentPrcb, v7);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) );
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( v4 == 1 && v5 != 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    v9 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 >= 0x10000 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
    if ( v4 == 2 )
    {
      v10 = 3LL;
    }
    else
    {
      v10 = 1LL;
      if ( !v4 )
        v10 = 4LL;
    }
    v11 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v5 + 40) >> 39) & 0x3FFLL));
    if ( (ULONG_PTR *)v11 == &MiSystemPartition )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      a2 = *(unsigned int *)(CurrentPrcb + 33564);
      if ( v10 <= a2 )
      {
        do
        {
          if ( (_DWORD)a2 == -1 )
            break;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), a2 - v10, a2);
          v14 = (_DWORD)a2 == v12;
          a2 = v12;
          if ( v14 )
            goto LABEL_28;
        }
        while ( v10 <= v12 );
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v11, v10, 512LL) )
      return 0LL;
LABEL_28:
    for ( i = 0; ; ++i )
    {
      v14 = i == v10;
      if ( i >= v10 )
        goto LABEL_39;
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24, a2, CurrentPrcb, v7);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      if ( v4 == 1 && v5 != 48 * (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        break;
      CurrentPrcb = *(_QWORD *)(v5 + 24);
      a2 = CurrentPrcb & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( a2 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_55;
      }
      else if ( a2 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v8 = 0;
LABEL_38:
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v14 = i == v10;
LABEL_39:
        if ( !v14 )
        {
          v15 = v10 - i;
          if ( (ULONG_PTR *)v11 == &MiSystemPartition )
          {
            v16 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v16->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( v15 + CachedResidentAvailable <= 0x100 )
              {
                do
                {
                  if ( v15 >= 0x80000 )
                    break;
                  v18 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v16->CachedResidentAvailable,
                          v15 + CachedResidentAvailable,
                          CachedResidentAvailable);
                  v14 = (_DWORD)CachedResidentAvailable == v18;
                  LODWORD(CachedResidentAvailable) = v18;
                  if ( v14 )
                    return v8;
                }
                while ( v18 != -1 && v15 + v18 <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&v16->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v15 += (int)CachedResidentAvailable - 192;
              }
            }
          }
          if ( v15 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7168), v15);
        }
        return v8;
      }
      *(_QWORD *)(v5 + 24) = CurrentPrcb ^ ((a2 + 0x10000) ^ CurrentPrcb) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_55:
      if ( a2 >= 0x10000 )
        goto LABEL_38;
      v20 = *(_BYTE *)(v5 + 34);
      v21 = 0LL;
      if ( (v20 & 0x10) == 0 )
      {
        a2 = *(unsigned int *)(v5 + 16);
        CurrentPrcb = v20;
        if ( (a2 & 0x400) == 0 && (v20 & 8) == 0 )
        {
          v21 = MiCapturePageFileInfoInline(v5 + 16, 1LL);
          CurrentPrcb = *(unsigned __int8 *)(v5 + 34);
        }
        LOBYTE(CurrentPrcb) = CurrentPrcb | 0x10;
        *(_BYTE *)(v5 + 34) = CurrentPrcb;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 )
        MiReleasePageFileInfo(v11, v21, 1LL);
      v5 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v10 - i;
    if ( (ULONG_PTR *)v11 == &MiSystemPartition )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      a2 = *(int *)(CurrentPrcb + 33564);
      if ( (_DWORD)a2 != -1 )
      {
        if ( v22 + a2 <= 0x100 )
        {
          do
          {
            if ( v22 >= 0x80000 )
              break;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), v22 + a2, a2);
            v14 = (_DWORD)a2 == v23;
            v6 = v26;
            a2 = v23;
            if ( v14 )
              goto LABEL_6;
          }
          while ( v23 != -1 && v22 + v23 <= 0x100 );
        }
        if ( (int)a2 > 192
          && (_DWORD)a2 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), 192, a2) )
        {
          v22 += (int)a2 - 192;
        }
      }
    }
    v6 = v26;
    if ( v22 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7168), v22);
  }
  if ( v9 < 0x3FFFFFFFFFFEFDFFLL )
  {
    v3 = 1;
    *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ (*(_QWORD *)(v5 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v3;
}
