/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x140235A70
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140235900 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rbx
  __int64 v9; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v1 = a1 + 12;
  result = (unsigned int)a1[10] + 4095LL;
  v3 = (unsigned __int64)&a1[2 * ((result + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12) + 12];
  while ( (unsigned __int64)v1 < v3 )
  {
    v4 = 48LL * *v1 - 0x58000000000LL;
    v5 = (unsigned __int8)MiLockPageInline(v4);
    v6 = MiCapturePageFileInfoInline((unsigned __int64 *)(v4 + 16), 1, 0);
    v7 = *(_BYTE *)(v4 + 34);
    v8 = v6;
    if ( (v7 & 0x10) == 0 )
      *(_BYTE *)(v4 + 34) = v7 | 0x10;
    v9 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v12 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    if ( v8 )
      result = MiReleasePageFileInfo(v9, v8, 0LL);
    ++v1;
  }
  return result;
}
