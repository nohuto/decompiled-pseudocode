/*
 * XREFs of MiLogSectionObjectEvent @ 0x1408CA1D0
 * Callers:
 *     MiSectionDelete @ 0x14067DC40 (MiSectionDelete.c)
 *     MiCreateSection @ 0x14067F4D0 (MiCreateSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x14052EB00 (MiLogPerfMemoryEvent.c)
 */

void __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = MiSectionControlArea(a1);
  v4[0] = v2;
  v4[1] = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  MiLogPerfMemoryEvent((v3 != 1) + 647, 0x20400001u, (__int64)v4, 16, 4200706);
}
