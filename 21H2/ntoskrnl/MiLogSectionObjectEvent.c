/*
 * XREFs of MiLogSectionObjectEvent @ 0x1408C7AF0
 * Callers:
 *     MiSectionDelete @ 0x140701EE0 (MiSectionDelete.c)
 *     MiCreateSection @ 0x14071CAF0 (MiCreateSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x140530840 (MiLogPerfMemoryEvent.c)
 */

__int64 __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = MiSectionControlArea(a1);
  v5[0] = v2;
  v5[1] = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  return MiLogPerfMemoryEvent((v3 != 1) + 647, 0x20400001u, (__int64)v5, 16, 4200706);
}
