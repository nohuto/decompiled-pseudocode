/*
 * XREFs of MmTryIdentifyPage @ 0x140532D68
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409B00E0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiIsPageSecured @ 0x140251878 (MiIsPageSecured.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmTryIdentifyPage(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __m128i *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rcx
  unsigned __int64 *v7; // r10
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v2 = 1;
  v3 = (__m128i *)(48 * a1 - 0x58000000000LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( _interlockedbittestandset64(&v3[1].m128i_i32[2], 0x3FuLL) )
  {
    v2 = 0;
  }
  else
  {
    if ( (v3[2].m128i_i8[3] & 0x40) != 0 || MiIsPageOnBadList((__int64)v3) || MiIsPageSecured(v6) )
      v2 = 0;
    else
      MiIdentifyPfn(v3, v7);
    _InterlockedAnd64(&v3[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
