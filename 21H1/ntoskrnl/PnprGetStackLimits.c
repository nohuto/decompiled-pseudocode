/*
 * XREFs of PnprGetStackLimits @ 0x140509AC8
 * Callers:
 *     PnprRecopyMirrorPages @ 0x140509E3C (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AA6C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14032BCA0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1403F6520 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
