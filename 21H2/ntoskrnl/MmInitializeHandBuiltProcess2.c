/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x1407D0EC4
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCBD0 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x140711718 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x140711DE0 (MiAllocateProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x1408C44B8 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v5; // r9
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v9[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  MiGetWsAndMakePageTablesNx((__int64)BugCheckParameter1, a2, a3, a4);
  BugCheckParameter1[1].ActiveProcessorsPadding[8] = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v9, v5);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads(BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v9, 0);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
