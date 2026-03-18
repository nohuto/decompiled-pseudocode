/*
 * XREFs of PnprGetStackLimits @ 0x14050DA48
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14050DDBC (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x1409B1490 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1403FC380 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  struct _KPRCB *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
