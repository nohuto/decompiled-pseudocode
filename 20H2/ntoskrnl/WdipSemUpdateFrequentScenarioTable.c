/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1409328A4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409326E4 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     WdipSemFastAllocate @ 0x140784BE0 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  PSLIST_ENTRY v4; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C628, 0LL);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C1C620 < 0x80 )
    {
      v4 = WdipSemFastAllocate(5, 0x18u);
      if ( v4 )
      {
        *v4 = *a1;
        v4[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_140C1C620++] = v4;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C628, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
