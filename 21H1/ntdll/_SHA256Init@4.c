/*
 * XREFs of _SHA256Init@4 @ 0x4B2EE6E0
 * Callers:
 *     _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0 (_RtlDeriveCapabilitySidsFromName@12.c)
 *     _SHA256Final@8 @ 0x4B2EE630 (_SHA256Final@8.c)
 * Callees:
 *     <none>
 */

void __thiscall SHA256Init(_DWORD *this)
{
  *this = 1779033703;
  this[1] = -1150833019;
  this[2] = 1013904242;
  this[3] = -1521486534;
  this[4] = 1359893119;
  this[5] = -1694144372;
  this[6] = 528734635;
  this[7] = 1541459225;
  this[8] = 0;
  this[9] = 0;
}
