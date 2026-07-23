/*
 * XREFs of CmpTryToLockHashEntryExclusive @ 0x1406177B8
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1406DBA08 (CmpReferenceHive.c)
 */

char __fastcall CmpTryToLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  char v4; // di
  ULONG_PTR v5; // rsi
  PRTL_BALANCED_NODE v6; // rax

  v2 = (unsigned int)BugCheckParameter4;
  v4 = 1;
  v5 = *(_QWORD *)(BugCheckParameter2 + 1640)
     + 24
     * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1648) - 1) & ((101027
                                                                     * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)));
  v6 = KeAbPreAcquire(v5, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(v5, (ULONG_PTR)v6);
    return 0;
  }
  else
  {
    if ( v6 )
      BYTE2(v6[1].Left) |= 1u;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    if ( !(unsigned __int8)CmpReferenceHive(BugCheckParameter2) )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xDuLL, v2);
  }
  return v4;
}
