/*
 * XREFs of ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0102BAC
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C009BB08 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiGetPixel @ 0x1C0102880 (NtGdiGetPixel.c)
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 *     NtGdiExtFloodFill @ 0x1C02B8910 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bIsCMYKColor(DC *this)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 30);
  v2 = 1;
  if ( (v1 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)this + 122) + 248LL) || (v1 & 0x10000000) == 0 )
    return 0;
  return v2;
}
