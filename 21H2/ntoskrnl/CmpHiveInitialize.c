/*
 * XREFs of CmpHiveInitialize @ 0x1406F80F8
 * Callers:
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140872FA8 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpInitSecurityCache @ 0x1406F8190 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x1406F81CC (HvHiveInitialize.c)
 */

__int64 __fastcall CmpHiveInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x12E8uLL);
  HvHiveInitialize(a1);
  *(_QWORD *)(a1 + 4816) = 0LL;
  *(_DWORD *)(a1 + 4272) = 1;
  *(_QWORD *)(a1 + 1608) = a1 + 1600;
  *(_QWORD *)(a1 + 1600) = a1 + 1600;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 1632));
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_DWORD *)(a1 + 2996) = 16;
  *(_QWORD *)(a1 + 4168) = a1 + 4160;
  *(_QWORD *)(a1 + 4160) = a1 + 4160;
  *(_QWORD *)(a1 + 1624) = a1 + 1616;
  *(_QWORD *)(a1 + 1616) = a1 + 1616;
  return CmpInitSecurityCache(a1);
}
