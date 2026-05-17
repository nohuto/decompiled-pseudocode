/*
 * XREFs of TppCleanupGroupAddMember @ 0x18000C490
 * Callers:
 *     TpAllocWork @ 0x18000F2E0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x180010960 (TppInitializeTimer.c)
 *     TpSimpleTryPost @ 0x180010BE0 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x180076CD0 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007A804 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x18007FE30 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TppCleanupGroupAddMember(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  v2 = a1[2];
  RtlAcquireSRWLockExclusive(v2 + 8);
  v3 = a1 + 5;
  v4 = *(_QWORD **)(v2 + 24);
  if ( *v4 != v2 + 16 )
    __fastfail(3u);
  *v3 = v2 + 16;
  a1[6] = v4;
  *v4 = v3;
  *(_QWORD *)(v2 + 24) = v3;
  return RtlReleaseSRWLockExclusive(v2 + 8);
}
