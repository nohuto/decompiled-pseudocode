/*
 * XREFs of ExpNodeCreateSystemThread @ 0x1406CFAA8
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x1406CFA54 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     KeSelectIdealProcessor @ 0x14030C074 (KeSelectIdealProcessor.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
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
        __int64 a9)
{
  USHORT v10; // cx
  int v13; // [rsp+50h] [rbp-48h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-40h] BYREF

  v10 = *(_WORD *)(a1 + 146);
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v10, &Affinity, 0LL);
  v13 = (unsigned __int16)KeSelectIdealProcessor(a1, &Affinity, a8, 0LL);
  return PsCreateSystemThreadEx(a9, 0x1FFFFFLL, 0LL, a4, 0LL, a6, a7, &Affinity, &v13);
}
