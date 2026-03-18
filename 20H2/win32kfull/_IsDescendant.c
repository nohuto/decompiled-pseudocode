/*
 * XREFs of _IsDescendant @ 0x1C0091BD8
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     CalcVisRgn @ 0x1C0043F90 (CalcVisRgn.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0091B70 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDescendant(__int64 a1, __int64 a2)
{
  while ( a1 != a2 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(a2 + 40) + 42LL) & 0x2FFF) == 0x29D )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 104);
  }
  return 1LL;
}
