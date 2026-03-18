/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x1402F509C
 * Callers:
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140701B0C (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AD99C (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}
