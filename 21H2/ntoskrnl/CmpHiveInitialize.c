/*
 * XREFs of CmpHiveInitialize @ 0x14068AF4C
 * Callers:
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14091972C (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpInitSecurityCache @ 0x14068B018 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x14068B054 (HvHiveInitialize.c)
 */

__int64 (__fastcall *__fastcall CmpHiveInitialize(__int64 a1, _QWORD *a2))(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  memset((void *)a1, 0, 0x12D8uLL);
  HvHiveInitialize(a1);
  *(_QWORD *)(a1 + 4776) = 0LL;
  *(_DWORD *)(a1 + 4232) = 1;
  *(_QWORD *)(a1 + 1616) = a1 + 1608;
  *(_QWORD *)(a1 + 1608) = a1 + 1608;
  ExInitializePushLock((PEX_RUNDOWN_REF)(a1 + 1640));
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_DWORD *)(a1 + 2956) = 16;
  *(_QWORD *)(a1 + 4128) = a1 + 4120;
  *(_QWORD *)(a1 + 4120) = a1 + 4120;
  *(_QWORD *)(a1 + 1632) = a1 + 1624;
  *(_QWORD *)(a1 + 1624) = a1 + 1624;
  CmpInitSecurityCache(a1);
  *(_DWORD *)(a1 + 4800) = 0;
  result = CmpLateUnloadHiveWorker;
  *(_QWORD *)(a1 + 4808) = 0LL;
  *a2 = 0LL;
  a2[3] = a1;
  a2[2] = CmpLateUnloadHiveWorker;
  *(_QWORD *)(a1 + 4816) = a2;
  return result;
}
