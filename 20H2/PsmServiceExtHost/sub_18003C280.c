/*
 * XREFs of sub_18003C280 @ 0x18003C280
 * Callers:
 *     PsmCrmSuspendNotification @ 0x18003C270 (PsmCrmSuspendNotification.c)
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 */

__int64 __fastcall sub_18003C280(int a1)
{
  void **v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  RtlAcquireSRWLockShared(&unk_1800B3D60);
  v1 = (void **)qword_1800B3DC0;
  if ( qword_1800B3DC0 )
  {
    RtlAcquireSRWLockExclusive((char *)qword_1800B3DC0 + 8);
    *((_DWORD *)v1 + 4) = GetCurrentThreadId();
  }
  result = RtlReleaseSRWLockShared(&unk_1800B3D60);
  if ( v1 )
  {
    sub_18002B954(v1, &v3, 4uLL, 1);
    *((_DWORD *)v1 + 4) = 0;
    return RtlReleaseSRWLockExclusive(v1 + 1);
  }
  return result;
}
