/*
 * XREFs of CmpLockHashEntryExclusive @ 0x1405DF6A8
 * Callers:
 *     CmpDelayCloseWorker @ 0x1405DF360 (CmpDelayCloseWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1405DF7A0 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v4; // rdi
  __int64 result; // rax

  v2 = (unsigned int)BugCheckParameter4;
  v4 = *(_QWORD *)(BugCheckParameter2 + 1640)
     + 24
     * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1648) - 1) & ((101027
                                                                     * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, v2);
  return result;
}
