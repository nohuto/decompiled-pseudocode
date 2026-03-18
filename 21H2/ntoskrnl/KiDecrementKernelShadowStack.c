/*
 * XREFs of KiDecrementKernelShadowStack @ 0x140420B50
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405694C0 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_140420B66 @ 0x140420B66 (sub_140420B66.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_140420B66(*_RDX);
  return sub_140420B66(v2);
}
