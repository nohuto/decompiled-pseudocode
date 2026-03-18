/*
 * XREFs of bIsSurfaceAllowedInDC @ 0x1C00D1088
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsSurfaceAllowedInDC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  int v4; // edx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  if ( gAllowPrinterSurfaceInDisplayDC || (SURFACE *)a1 == SURFACE::pdibDefault || !a2 || !*(_QWORD *)(a1 + 40) )
    return 1;
  v4 = *(_DWORD *)(a2 + 40) & 1;
  if ( (!v4 || (*(_DWORD *)(a1 + 112) & 0x40000) == 0) && (!v2 || v4 == (*(_DWORD *)(v2 + 40) & 1)) )
    return 1;
  return v3;
}
