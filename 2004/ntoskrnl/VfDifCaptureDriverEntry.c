/*
 * XREFs of VfDifCaptureDriverEntry @ 0x14037BEA4
 * Callers:
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037BED8 (ViDifCheckCallbackInterception.c)
 *     ViDifAllocateCallbackStorage @ 0x14059B768 (ViDifAllocateCallbackStorage.c)
 *     ViDifCaptureDriverEntry @ 0x14059B7AC (ViDifCaptureDriverEntry.c)
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
