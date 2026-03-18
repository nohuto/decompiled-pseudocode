/*
 * XREFs of MmMarkHiberRange @ 0x140773C4C
 * Callers:
 *     PopHiberInitializeResources @ 0x140773990 (PopHiberInitializeResources.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     PoSetHiberRange @ 0x140387900 (PoSetHiberRange.c)
 */

void __fastcall MmMarkHiberRange(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 PteAddress; // rax
  PVOID v5; // r10
  PVOID v6; // r11

  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v2 + v3);
  PoSetHiberRange(v6, 2u, v5, PteAddress - (_QWORD)v5, 0x20657450u);
}
