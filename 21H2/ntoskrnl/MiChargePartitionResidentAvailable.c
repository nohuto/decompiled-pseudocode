/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x14022F028
 * Callers:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiLockPageTablePage @ 0x1402AE6F0 (MiLockPageTablePage.c)
 *     MiProbeLockFrame @ 0x1402AF5D0 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiChargeForLockedPage @ 0x1403337F0 (MiChargeForLockedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // r10
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  signed __int64 v8; // r10
  BOOL v9; // r11d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int CachedResidentAvailable; // eax
  unsigned __int64 v12; // rdx
  struct _KPRCB *v13; // r10
  __int64 v14; // r8
  bool v15; // zf
  signed __int32 v16; // eax
  __int64 *v18; // rcx
  __int64 v19; // rdi
  unsigned __int32 v20; // eax
  unsigned __int64 v21; // r8

  if ( a2 + a3 >= a2 || a3 == 0xFFFFFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 7168);
    v6 = 0LL;
    if ( v5 < 1024 && (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v18 = KiProcessorBlock;
        v19 = (unsigned int)KeNumberProcessors_0;
        do
        {
          if ( *(_DWORD *)(*v18 + 33564) != -1 )
          {
            v20 = _InterlockedExchange((volatile __int32 *)(*v18 + 33564), -1);
            if ( v20 != -1 )
              v6 += v20;
          }
          ++v18;
          --v19;
        }
        while ( v19 );
      }
      if ( v6 >= a2 )
      {
        v21 = v6 - a2;
        if ( v21 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v21);
        return 3LL;
      }
      a2 -= v6;
    }
    if ( v5 <= 0 )
    {
LABEL_45:
      if ( a3 != 0xFFFFFFFFLL )
      {
LABEL_46:
        ++dword_140C4E834;
        if ( v6 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v6);
        return 0LL;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), -(__int64)a2);
      return 3LL;
    }
    while ( 1 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_46;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7168), v5 - a2, v5);
      if ( v5 == v7 )
        break;
      v5 = v7;
      if ( v7 <= 0 )
        goto LABEL_45;
    }
    v8 = v5 - a2;
    v9 = v8 < 1024;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        if ( v8 >= 2048 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
          CachedResidentAvailable = 0;
          goto LABEL_9;
        }
      }
      else if ( CachedResidentAvailable < 0x40 )
      {
LABEL_9:
        if ( v8 > 1024 )
        {
          v12 = 128 - CachedResidentAvailable;
          if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7168), v8 - v12, v8) )
          {
            v13 = KeGetCurrentPrcb();
            v14 = (int)v13->CachedResidentAvailable;
            if ( (_DWORD)v14 != -1 )
            {
              if ( v12 + v14 <= 0x100 )
              {
                do
                {
                  if ( v12 >= 0x80000 )
                    break;
                  v16 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v13->CachedResidentAvailable,
                          v12 + v14,
                          v14);
                  v15 = (_DWORD)v14 == v16;
                  LODWORD(v14) = v16;
                  if ( v15 )
                    return (unsigned int)(v9 + 2);
                }
                while ( v16 != -1 && v12 + v16 <= 0x100 );
              }
              if ( (int)v14 > 192
                && (_DWORD)v14 == _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v13->CachedResidentAvailable,
                                    192,
                                    v14) )
              {
                v12 += (int)v14 - 192;
              }
            }
            if ( v12 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v12);
          }
        }
      }
    }
    return (unsigned int)(v9 + 2);
  }
  ++dword_140C4E830;
  return 0LL;
}
