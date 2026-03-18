/*
 * XREFs of MiLogSectionObjectEvent @ 0x1408C4390
 * Callers:
 *     MiCreateSection @ 0x1405FAF70 (MiCreateSection.c)
 *     MiSectionDelete @ 0x1405FF160 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x14052B130 (MiLogPerfMemoryEvent.c)
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
