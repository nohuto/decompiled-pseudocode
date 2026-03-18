/*
 * XREFs of sub_1C000A5B0 @ 0x1C000A5B0
 * Callers:
 *     sub_1C000A350 @ 0x1C000A350 (sub_1C000A350.c)
 * Callees:
 *     sub_1C0001760 @ 0x1C0001760 (sub_1C0001760.c)
 *     sub_1C000AB30 @ 0x1C000AB30 (sub_1C000AB30.c)
 */

__int64 __fastcall sub_1C000A5B0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  PEPROCESS ThreadProcess; // rdi

  v4 = -1073741811;
  if ( (unsigned __int8)(a2 + 2) <= 4u )
  {
    v5 = *(_QWORD *)(a1 + 64);
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
    *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
    if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
    {
      ThreadProcess = PsGetThreadProcess(*(PETHREAD *)(a1 + 96));
      if ( ThreadProcess == (PEPROCESS)PsGetCurrentProcess() )
      {
        sub_1C000AB30(a1, v5, a2);
        sub_1C0001760(a1);
        v4 = 0;
      }
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
  }
  return v4;
}
