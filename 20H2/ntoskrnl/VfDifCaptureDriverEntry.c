/*
 * XREFs of VfDifCaptureDriverEntry @ 0x14037DBD4
 * Callers:
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037DC08 (ViDifCheckCallbackInterception.c)
 *     ViDifAllocateCallbackStorage @ 0x14059F208 (ViDifAllocateCallbackStorage.c)
 *     ViDifCaptureDriverEntry @ 0x14059F24C (ViDifCaptureDriverEntry.c)
 */

char __fastcall VfDifCaptureDriverEntry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 CallbackStorage; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( !(unsigned __int8)ViDifCheckCallbackInterception() )
    return 0;
  CallbackStorage = ViDifAllocateCallbackStorage();
  if ( !CallbackStorage )
    return 0;
  *(_QWORD *)(v1 + 64) = CallbackStorage;
  ViDifCaptureDriverEntry(a1);
  return 1;
}
