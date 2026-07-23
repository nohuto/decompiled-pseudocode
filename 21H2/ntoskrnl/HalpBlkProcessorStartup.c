/*
 * XREFs of HalpBlkProcessorStartup @ 0x140A19010
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicInitializeLocalUnit @ 0x140A1AFB0 (HalpBlkApicInitializeLocalUnit.c)
 *     HalpBlkMceInitialize @ 0x140A1B4F0 (HalpBlkMceInitialize.c)
 *     HalpBlkIdleLoop @ 0x140A1B530 (HalpBlkIdleLoop.c)
 */

void __fastcall __noreturn HalpBlkProcessorStartup(unsigned __int64 a1)
{
  _disable();
  __writemsr(0xC0000101, a1);
  __writemsr(0xC0000102, a1);
  HalpBlkApicInitializeLocalUnit(3221225730LL, HIDWORD(a1));
  HalpBlkMceInitialize();
  _InterlockedIncrement64(MK_FP(__GS__, 16LL));
  HalpBlkIdleLoop();
}
