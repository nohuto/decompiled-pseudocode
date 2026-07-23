/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x14092CA74
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x14092C8B4 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     WdipSemFastAllocate @ 0x1407765E0 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  PSLIST_ENTRY v4; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C7C8, 0LL);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C1C7C0 < 0x80 )
    {
      v4 = WdipSemFastAllocate(5, 0x18u);
      if ( v4 )
      {
        *v4 = *a1;
        v4[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_140C1C7C0++] = v4;
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
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C7C8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
