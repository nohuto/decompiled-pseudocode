/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140860DAC
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403DC188 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiAllocateProcessVads @ 0x1406C3F0C (MiAllocateProcessVads.c)
 *     MiInsertProcessVads @ 0x14070A1B8 (MiInsertProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x140968018 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  _DWORD *v2; // r9
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v6[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  MiGetWsAndMakePageTablesNx();
  BugCheckParameter1[1].ActiveProcessors.StaticBitmap[28] = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v6, v2);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((__int64)BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v6, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
