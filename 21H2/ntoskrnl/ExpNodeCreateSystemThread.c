/*
 * XREFs of ExpNodeCreateSystemThread @ 0x1406D0058
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x1406D0004 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140277F88 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1402E2F80 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1406D0190 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        int a9)
{
  USHORT v10; // cx
  __int64 v12; // [rsp+50h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-40h] BYREF

  v10 = *(_WORD *)(a1 + 146);
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v10, &Affinity, 0LL);
  LODWORD(v12) = (unsigned __int16)KeSelectIdealProcessor(a1, &Affinity, a8, 0LL);
  return PsCreateSystemThreadEx(a9, 0LL, a6, a7, (__int64)&Affinity, (__int64)&v12);
}
