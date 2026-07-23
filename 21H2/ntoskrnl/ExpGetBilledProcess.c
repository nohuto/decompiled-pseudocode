/*
 * XREFs of ExpGetBilledProcess @ 0x14022CFE8
 * Callers:
 *     ExReturnPoolQuota @ 0x14022CF2C (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x1403CDE70 (ExQueryPoolBlockSize.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

_BYTE *__fastcall ExpGetBilledProcess(__int64 a1)
{
  _BYTE *BugCheckParameter4; // rcx

  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
    return 0LL;
  BugCheckParameter4 = (_BYTE *)(a1 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(a1 + 8));
  if ( BugCheckParameter4
    && ((unsigned __int64)BugCheckParameter4 < 0xFFFF800000000000uLL || (*BugCheckParameter4 & 0x7F) != 3) )
  {
    KeBugCheckEx(0xC2u, 0xDuLL, a1 + 16, *(unsigned int *)(a1 + 4), (ULONG_PTR)BugCheckParameter4);
  }
  return BugCheckParameter4;
}
