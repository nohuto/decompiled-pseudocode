/*
 * XREFs of sub_1800195DC @ 0x1800195DC
 * Callers:
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 * Callees:
 *     sub_1800191A0 @ 0x1800191A0 (sub_1800191A0.c)
 *     sub_180019C4C @ 0x180019C4C (sub_180019C4C.c)
 *     sub_18001C464 @ 0x18001C464 (sub_18001C464.c)
 *     sub_18001DFF4 @ 0x18001DFF4 (sub_18001DFF4.c)
 */

__int64 __fastcall sub_1800195DC(struct _RTL_CRITICAL_SECTION *a1)
{
  HANDLE LockSemaphore; // rsi
  HANDLE ProcessHeap; // rax
  _BYTE v5[192]; // [rsp+20h] [rbp-C8h] BYREF

  sub_1800191A0((__int64)v5);
  sub_18001DFF4(a1, v5);
  sub_18001C464(v5);
  sub_180019C4C(v5);
  LockSemaphore = a1[6].LockSemaphore;
  a1[6].LockSemaphore = 0LL;
  if ( LockSemaphore )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, LockSemaphore);
  }
  DeleteCriticalSection(a1 + 5);
  return sub_180019C4C(&a1->LockCount);
}
