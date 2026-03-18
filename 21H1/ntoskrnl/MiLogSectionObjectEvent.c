/*
 * XREFs of MiLogSectionObjectEvent @ 0x1408C3040
 * Callers:
 *     MiCreateSection @ 0x14062FFB0 (MiCreateSection.c)
 *     MiSectionDelete @ 0x1406341A0 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x14052AAE0 (MiLogPerfMemoryEvent.c)
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
