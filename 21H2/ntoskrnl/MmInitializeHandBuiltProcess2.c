/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x1407D1034
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCD40 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x1406BFD68 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x1406C0430 (MiAllocateProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x1408C4618 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  MiGetWsAndMakePageTablesNx((__int64)BugCheckParameter1, a2, a3, a4);
  BugCheckParameter1[1].ActiveProcessorsPadding[8] = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v8);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((__int64)BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v8, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
