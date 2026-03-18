/*
 * XREFs of MiTradeBootImagePage @ 0x140B05434
 * Callers:
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiWriteValidPteNewPage @ 0x14026EDE4 (MiWriteValidPteNewPage.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeCopyPrivilegedPage @ 0x14056B044 (KeCopyPrivilegedPage.c)
 */

__int64 __fastcall MiTradeBootImagePage(unsigned __int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  __m128i *v6; // rsi
  unsigned __int64 v7; // r14
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-C8h]
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[24]; // [rsp+50h] [rbp-B0h] BYREF

  v17 = (__int64 *)a1;
  memset(v19, 0, 0xB8uLL);
  v19[3] = 0LL;
  LODWORD(v19[1]) = 20;
  v16 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = (__int64)(a1 << 25) >> 16;
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFFLL;
  v6 = (__m128i *)(48 * v5 - 0x220000000000LL);
  v7 = (unsigned __int8)MiLockPageInline((__int64)v6);
  MiLockNestedPageAtDpcInline(48 * a2 - 0x220000000000LL);
  MiCopyPfnEntryEx((__m128i *)(48 * a2 - 0x220000000000LL), v6);
  v8 = ((unsigned int)MiFlags >> 14) & 1;
  if ( !v8 || (((unsigned __int64)v6[2].m128i_i64[1] >> 60) & 7) == 3 )
  {
    MiCopyPage(a2, v5, 0LL, 2 * v8 + 4);
  }
  else
  {
    v18 = v4;
    KeCopyPrivilegedPage(a2, &v18, v5, &v18, 0LL, 1);
  }
  v16 ^= (v16 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL;
  MiWriteValidPteNewPage(v17, v16, 0);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6[1].m128i_i64[1] |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)v19, v4, 1LL, 0);
  MiFlushTbList((__int64)v19);
  if ( (MiFlags & 0x4000) == 0 && (((unsigned __int64)v6[2].m128i_i64[1] >> 60) & 7) == 3 )
    MiClearPfnImageVerified(48 * v5 - 0x220000000000LL, 12);
  v6[2].m128i_i8[3] &= ~8u;
  MiDecrementShareCount(48 * v5 - 0x220000000000LL, v9, v10, v11);
  _InterlockedAnd64(&v6[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
