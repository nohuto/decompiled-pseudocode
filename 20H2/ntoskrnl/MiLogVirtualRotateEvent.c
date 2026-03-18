/*
 * XREFs of MiLogVirtualRotateEvent @ 0x1408CAE74
 * Callers:
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x14052EB00 (MiLogPerfMemoryEvent.c)
 */

void __fastcall MiLogVirtualRotateEvent(__int64 a1, __int64 a2, char a3)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v3[0] = a1;
  v5 = 0;
  v3[1] = a2;
  v4 = a3 & 0xF;
  MiLogPerfMemoryEvent(0x27Fu, 0x20008000u, (__int64)v3, 20, 4200706);
}
