/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14052D16C
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  int v7; // edx
  unsigned int v8; // ebx
  char v9; // dl
  _OWORD v11[3]; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0;
  memset(v11, 0, sizeof(v11));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  SharedVm = MiGetSharedVm(a1 + 1664);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = *(_DWORD *)(a1 + 1848);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    if ( a2 )
      v9 = HIBYTE(v7) & 0x9F | 0x20;
    else
      v9 = HIBYTE(v7) & 0x9F;
    *(_BYTE *)(a1 + 1851) = v9;
    v8 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1664, v6);
  if ( v2 )
    KiUnstackDetachProcess((__int64)v11, 0LL);
  return v8;
}
