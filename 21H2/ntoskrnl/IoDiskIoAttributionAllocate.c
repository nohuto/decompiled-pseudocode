/*
 * XREFs of IoDiskIoAttributionAllocate @ 0x1406D4D48
 * Callers:
 *     PspSetJobIoAttribution @ 0x1406D4A68 (PspSetJobIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1406D4DF0 (PspIoRateEntryActivate.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionReference @ 0x140557488 (IoDiskIoAttributionReference.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

struct _EX_RUNDOWN_REF *__fastcall IoDiskIoAttributionAllocate(unsigned __int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax

  result = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(64LL, 184LL, 1095003977LL);
  v5 = result;
  if ( result )
  {
    result[5].Count = 0LL;
    result[2].Count = -1LL;
    result[4].Count = 1LL;
    do
    {
      v6 = _InterlockedExchangeAdd64(&IopDiskIoAttributionKey, 1uLL);
      v5[3].Count = v6 + 1;
    }
    while ( v6 == -1 );
    ExInitializePushLock(v5 + 21);
    if ( a1 )
      v5[20].Count = a1;
    else
      ExWaitForRundownProtectionRelease(v5 + 21);
    if ( a2 )
    {
      IoDiskIoAttributionReference(a2);
      v5[22].Count = a2;
    }
    return v5;
  }
  return result;
}
