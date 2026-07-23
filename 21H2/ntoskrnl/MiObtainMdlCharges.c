/*
 * XREFs of MiObtainMdlCharges @ 0x140295560
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainMdlCharges(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // eax
  unsigned __int64 v3; // rdi
  int v5; // r14d
  _WORD *Pool; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rbp
  unsigned __int64 v11; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax

  v1 = a1[5];
  v2 = *((_DWORD *)a1 + 2);
  v3 = v1 >> 4;
  v5 = 0;
  if ( !(v1 >> 4) )
    v3 = 1LL;
  if ( (v2 & 0x40) != 0 )
  {
    v3 = a1[4];
LABEL_13:
    v5 = 1;
    goto LABEL_5;
  }
  if ( (v2 & 0x20) != 0 && a1[4] )
  {
    v3 = a1[4];
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_5:
    if ( (int)MiAcquireNonPagedResources(*a1, v1, a1[6], 2LL) < 0 )
      goto LABEL_26;
    Pool = MiAllocatePool(64, 8 * v1 + 48, 0x69646D4Du);
    if ( Pool )
      break;
    v10 = *a1;
    MiReturnCommit(*a1, v1, v7, v8);
    v11 = v1;
    if ( (ULONG_PTR *)v10 == &MiSystemPartition )
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
            v15 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v1 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v14 = (_DWORD)CachedResidentAvailable == v15;
            LODWORD(CachedResidentAvailable) = v15;
            if ( v14 )
              goto LABEL_26;
          }
          while ( v15 != -1 && v1 + v15 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v11 = v1 + (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v11 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 7168), v11);
LABEL_26:
    if ( (a1[1] & 4) != 0 )
      return 3221225626LL;
    v16 = *(_QWORD *)(*a1 + 7168);
    if ( v16 <= 0 )
      return 3221225626LL;
    v17 = a1[6];
    if ( v16 <= v17 )
      return 3221225626LL;
    v18 = *(_QWORD *)(*a1 + 7464);
    v19 = v16 - v17;
    v20 = *(_QWORD *)(*a1 + 7592);
    if ( v18 < v20 )
    {
      v21 = v20 - v18;
      if ( v21 < v19 )
        v19 = v21;
    }
    if ( v1 <= v19 )
    {
      if ( v1 <= v3 )
      {
        if ( v5 == 1 || v3 == 1 )
          return 3221225626LL;
        while ( v1 < v3 )
          v3 >>= 1;
        if ( !v3 )
          v3 = 1LL;
      }
      v1 -= v3;
    }
    else
    {
      v1 = v19;
    }
    v22 = *((_DWORD *)a1 + 2);
    if ( (v22 & 0x40) != 0 )
    {
      v23 = a1[4] - 1;
    }
    else
    {
      if ( (v22 & 0x20) == 0 )
        goto LABEL_49;
      v24 = a1[4];
      if ( !v24 )
        goto LABEL_49;
      v23 = v24 - 1;
    }
    v1 &= ~v23;
LABEL_49:
    if ( !v1 )
      return 3221225626LL;
  }
  *(_QWORD *)Pool = 0LL;
  Pool[5] = 0;
  Pool[4] = 8 * (v1 + 6);
  *((_DWORD *)Pool + 10) = (_DWORD)v1 << 12;
  *((_QWORD *)Pool + 4) = 0LL;
  *((_DWORD *)Pool + 11) = 0;
  *((_QWORD *)Pool + 3) = 0LL;
  a1[5] = v1;
  a1[8] = (__int64)Pool;
  if ( (ULONG_PTR *)*a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFF8, v1);
  return 0LL;
}
