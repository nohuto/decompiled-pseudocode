/*
 * XREFs of __IsDescendant@8 @ 0x72F90
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z @ 0x72F42 (-WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall _IsDescendant(int a1, int a2)
{
  while ( a1 != a2 )
  {
    if ( (*(_WORD *)(*(_DWORD *)(a2 + 20) + 30) & 0x3FFF) == 0x29D )
      return 0;
    a2 = *(_DWORD *)(a2 + 56);
  }
  return 1;
}
