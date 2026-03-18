/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x1C01D3230
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 SetCancelRotationDelayHintWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 1;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    v3 = *(_QWORD *)(v2 + 24) + 304LL;
    v5[1] = v2;
    v5[0] = v3;
    HMAssignmentLock(v5);
  }
  else
  {
    UserSetLastError(5LL, v1, v2);
    return 0;
  }
  return v0;
}
