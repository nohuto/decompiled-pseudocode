/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x1407BB214
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403C87B0 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x14064F0C0 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x14064F788 (MiAllocateProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x1408BFB68 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  _DWORD *v2; // r9
  __int64 v3; // r8
  _DWORD *v4; // r9
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  MiGetWsAndMakePageTablesNx();
  BugCheckParameter1[1].ActiveProcessorsPadding[8] = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v8, v2);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads(BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v8, 0LL, v3, v4);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
