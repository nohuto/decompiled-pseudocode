/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x14030FB40
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1403458AC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rbx
  __int64 v12; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v3 = a1 + 12;
  result = (unsigned int)a1[10] + 4095LL;
  v5 = (result + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12;
  v6 = (unsigned __int64)&a1[2 * v5 + 12];
  while ( (unsigned __int64)v3 < v6 )
  {
    v7 = 48LL * *v3 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v7, v5, a3);
    v9 = MiCapturePageFileInfoInline((unsigned __int64 *)(v7 + 16), 1, 0);
    v10 = *(_BYTE *)(v7 + 34);
    v11 = v9;
    if ( (v10 & 0x10) == 0 )
      *(_BYTE *)(v7 + 34) = v10 | 0x10;
    v12 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = -1LL << ((unsigned __int8)v8 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)v5;
          v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)result & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v15 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( v11 )
      result = MiReleasePageFileInfo(v12, v11, 0LL);
    ++v3;
  }
  return result;
}
