/*
 * XREFs of ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02C0E40
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 */

void __fastcall EPOINTL::vScale(EPOINTL *this, const struct POINTFL *a2)
{
  int *v2; // rbx
  float v3; // xmm2_4
  int v4; // esi
  unsigned int v6; // r8d

  v2 = (int *)((char *)this + 4);
  v3 = *((float *)a2 + 1);
  v4 = *((_DWORD *)this + 1);
  if ( !(unsigned int)bFToL((float)*(int *)this * *(float *)a2, (int *)this, 6u)
    || !(unsigned int)bFToL((float)v4 * v3, v2, v6) )
  {
    *v2 = 0;
    *(_DWORD *)this = 0;
  }
}
