/*
 * XREFs of MiObtainMdlCharges @ 0x1402651B8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainMdlCharges(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  int v3; // ecx
  int v4; // r14d
  unsigned __int64 v5; // rsi
  __int64 Pool; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax

  v1 = a1[5];
  v3 = *((_DWORD *)a1 + 2);
  v4 = 0;
  v5 = v1 >> 4;
  if ( !(v1 >> 4) )
    v5 = 1LL;
  if ( (v3 & 0x40) != 0 )
  {
    v5 = a1[4];
LABEL_15:
    v4 = 1;
    goto LABEL_5;
  }
  if ( (v3 & 0x20) != 0 && a1[4] )
  {
    v5 = a1[4];
    goto LABEL_15;
  }
  while ( 1 )
  {
LABEL_5:
    if ( (v3 & 0x400) == 0 && (int)MiAcquireNonPagedResources(*a1, v1, a1[6], 2LL) < 0 )
      goto LABEL_29;
    Pool = MiAllocatePool(64LL, 8 * v1 + 48, 1768189261LL);
    if ( Pool )
      break;
    if ( (a1[1] & 0x400) == 0 )
    {
      v8 = *a1;
      MiReturnCommit(*a1, v1);
      v9 = v1;
      if ( (ULONG_PTR *)v8 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v1 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v1 >= 0x80000 )
                break;
              v13 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      v1 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v12 = (_DWORD)CachedResidentAvailable == v13;
              LODWORD(CachedResidentAvailable) = v13;
              if ( v12 )
                goto LABEL_29;
            }
            while ( v13 != -1 && v1 + v13 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v9 = v1 + (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v9 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16960), v9);
    }
LABEL_29:
    if ( (a1[1] & 4) != 0 )
      return 3221225626LL;
    v14 = *(_QWORD *)(*a1 + 16960);
    if ( v14 <= 0 )
      return 3221225626LL;
    v15 = a1[6];
    if ( v14 <= v15 )
      return 3221225626LL;
    v16 = *(_QWORD *)(*a1 + 17256);
    v17 = v14 - v15;
    v18 = *(_QWORD *)(*a1 + 17496);
    if ( v16 < v18 )
    {
      v19 = v18 - v16;
      if ( v19 < v17 )
        v17 = v19;
    }
    if ( v1 <= v17 )
    {
      if ( v1 <= v5 )
      {
        if ( v4 || v5 == 1 )
          return 3221225626LL;
        while ( v1 < v5 )
          v5 >>= 1;
        if ( !v5 )
          v5 = 1LL;
      }
      v1 -= v5;
    }
    else
    {
      v1 = v17;
    }
    v3 = *((_DWORD *)a1 + 2);
    if ( (v3 & 0x40) != 0 )
    {
      v20 = a1[4] - 1;
    }
    else
    {
      if ( (v3 & 0x20) == 0 )
        goto LABEL_52;
      v21 = a1[4];
      if ( !v21 )
        goto LABEL_52;
      v20 = v21 - 1;
    }
    v1 &= ~v20;
LABEL_52:
    if ( !v1 )
      return 3221225626LL;
  }
  *(_QWORD *)Pool = 0LL;
  *(_WORD *)(Pool + 10) = 0;
  *(_WORD *)(Pool + 8) = 8 * (v1 + 6);
  *(_DWORD *)(Pool + 40) = (_DWORD)v1 << 12;
  *(_QWORD *)(Pool + 32) = 0LL;
  *(_DWORD *)(Pool + 44) = 0;
  *(_QWORD *)(Pool + 24) = 0LL;
  a1[5] = v1;
  a1[8] = Pool;
  if ( (ULONG_PTR *)*a1 == &MiSystemPartition && (a1[1] & 0x400) == 0 )
    _InterlockedExchangeAdd64(&qword_140C53530, v1);
  return 0LL;
}
