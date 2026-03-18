/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x1407BE384
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403C95C0 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x1406B4490 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x1406B4B58 (MiAllocateProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x1408C0EB8 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v5[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  MiGetWsAndMakePageTablesNx();
  BugCheckParameter1[1].ActiveProcessorsPadding[8] = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v5);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads(BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v5, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
