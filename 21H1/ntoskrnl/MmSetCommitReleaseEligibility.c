/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14052740C
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebp
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  int v9; // edx
  unsigned int v10; // ebx
  char v11; // dl
  __int64 v12; // r8
  _DWORD *v13; // r9
  _OWORD v15[3]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  memset(v15, 0, sizeof(v15));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v15, a4);
  }
  SharedVm = MiGetSharedVm(a1 + 1664);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = *(_DWORD *)(a1 + 1848);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
    v10 = -1073741558;
  }
  else
  {
    if ( a2 )
      v11 = HIBYTE(v9) & 0x9F | 0x20;
    else
      v11 = HIBYTE(v9) & 0x9F;
    *(_BYTE *)(a1 + 1851) = v11;
    v10 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1664, v8);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v15, 0LL, v12, v13);
  return v10;
}
