/*
 * XREFs of ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0017968
 * Callers:
 *     GreSetDCOrg @ 0x1C00178A0 (GreSetDCOrg.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vCalcFillOrigin(DC *this)
{
  int v2; // r8d
  int v3; // ecx
  int v4; // ecx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
    v3 = *((_DWORD *)this + 256);
  else
    v3 = *((_DWORD *)this + 254);
  *((_DWORD *)this + 294) = *((_DWORD *)this + 31) + v3;
  if ( v2 )
    v4 = *((_DWORD *)this + 257);
  else
    v4 = *((_DWORD *)this + 255);
  *((_DWORD *)this + 295) = *((_DWORD *)this + 32) + v4;
}
