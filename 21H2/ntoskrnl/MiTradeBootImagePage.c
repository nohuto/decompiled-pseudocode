/*
 * XREFs of MiTradeBootImagePage @ 0x140A50E60
 * Callers:
 *     MiHandleBootImage @ 0x140A50B14 (MiHandleBootImage.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiWriteValidPteNewPage @ 0x140234AD8 (MiWriteValidPteNewPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeCopyPrivilegedPage @ 0x140513010 (KeCopyPrivilegedPage.c)
 */

__int64 __fastcall MiTradeBootImagePage(unsigned __int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // r15
  _KPROCESS *v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[24]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v19, 0, 0xB8uLL);
  v19[3] = 0LL;
  LODWORD(v19[1]) = 20;
  v18 = 0LL;
  v17 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v17;
  if ( MiPteInShadowRange((unsigned __int64)&v17)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0 )
  {
    v5 = v4;
    if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF));
        if ( (v13 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v13 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
      else
      {
        v4 = v17;
      }
    }
  }
  v8 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v9 = 48 * v8 - 0x58000000000LL;
  v10 = (unsigned __int8)MiLockPageInline(v9, v5, (__int64)Flink, v7);
  MiLockNestedPageAtDpcInline(48 * a2 - 0x58000000000LL);
  MiCopyPfnEntryEx(48 * a2 - 0x58000000000LL, v9);
  if ( (((unsigned int)MiFlags >> 15) & 1) == 0 || ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 3 )
  {
    MiCopyPage(a2, v8, 0LL, 2 * (((unsigned int)MiFlags >> 15) & 1) + 4);
  }
  else
  {
    *(_QWORD *)&v18 = (__int64)(a1 << 25) >> 16;
    KeCopyPrivilegedPage(a2, &v18, v8, &v18, 0LL, 1);
  }
  v17 ^= (v17 ^ (a2 << 12)) & 0xFFFFFFFFF000LL;
  MiWriteValidPteNewPage((__int64 *)a1, v17, 0);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)v19, (__int64)(a1 << 25) >> 16, 1LL, 0);
  MiFlushTbList((__int64)v19, v11);
  if ( (MiFlags & 0x8000) == 0 && ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 3 )
    MiClearPfnImageVerified(v9, 12);
  *(_BYTE *)(v9 + 35) &= ~8u;
  MiDecrementShareCount(v9);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return result;
}
