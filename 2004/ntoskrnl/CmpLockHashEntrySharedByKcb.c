/*
 * XREFs of CmpLockHashEntrySharedByKcb @ 0x1405DF730
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1405DF7A0 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntrySharedByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  ExAcquirePushLockSharedEx(
    *(_QWORD *)(v2 + 1640) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1648) - 1) & (v3 ^ (v3 >> 9))),
    0LL);
  result = CmpReferenceHive(v2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 7uLL, BugCheckParameter4);
  return result;
}
