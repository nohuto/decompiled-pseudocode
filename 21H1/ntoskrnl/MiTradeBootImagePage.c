/*
 * XREFs of MiTradeBootImagePage @ 0x140A42A24
 * Callers:
 *     MiHandleBootImage @ 0x140A426D8 (MiHandleBootImage.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWriteValidPteNewPage @ 0x1402F19B0 (MiWriteValidPteNewPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeCopyPrivilegedPage @ 0x14050D310 (KeCopyPrivilegedPage.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _KPROCESS *v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 result; // rax
  __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v21; // zf
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[24]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v24, 0, 0xB8uLL);
  v24[3] = 0LL;
  LODWORD(v24[1]) = 20;
  v23 = 0LL;
  v22 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v22;
  if ( MiPteInShadowRange((unsigned __int64)&v22)
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
        v18 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v22 >> 3) & 0x1FF));
        if ( (v18 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v18 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
      else
      {
        v4 = v22;
      }
    }
  }
  v8 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v9 = 48 * v8 - 0x58000000000LL;
  v10 = (unsigned __int8)MiLockPageInline(v9, v5, (__int64)Flink, v7);
  MiLockNestedPageAtDpcInline(48 * a2 - 0x58000000000LL, v11, v12, v13);
  MiCopyPfnEntryEx(48 * a2 - 0x58000000000LL, v9);
  if ( (((unsigned int)MiFlags >> 15) & 1) == 0 || ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 3 )
  {
    MiCopyPage(a2, v8, 0LL, 2 * (((unsigned int)MiFlags >> 15) & 1) + 4);
  }
  else
  {
    *(_QWORD *)&v23 = (__int64)(a1 << 25) >> 16;
    KeCopyPrivilegedPage(a2, &v23, v8, &v23, 0LL, 1);
  }
  v22 ^= (v22 ^ (a2 << 12)) & 0xFFFFFFFFF000LL;
  MiWriteValidPteNewPage((__int64 *)a1, v22, 0);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)v24, (__int64)(a1 << 25) >> 16, 1LL, 0);
  MiFlushTbList((__int64)v24, v14);
  if ( (MiFlags & 0x8000) == 0 && ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 3 )
    MiClearPfnImageVerified(v9, 12LL, v15, v16);
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
        v21 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v21 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return result;
}
