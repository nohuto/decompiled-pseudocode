/*
 * XREFs of MmUnmapLockedRestartPages @ 0x1408C4CD0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MiReleaseDriverPtes @ 0x14075FEB0 (MiReleaseDriverPtes.c)
 */

void __fastcall MmUnmapLockedRestartPages(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 PteAddress; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiUnmapMdlCommon(v2, (__int64)AnyMultiplexedVm, 0, a1, v3);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  PteAddress = MiGetPteAddress(v2);
  MiReleaseDriverPtes(0, PteAddress, v3);
}
