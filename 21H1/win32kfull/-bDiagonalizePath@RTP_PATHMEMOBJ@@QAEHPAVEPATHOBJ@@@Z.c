/*
 * XREFs of ?bDiagonalizePath@RTP_PATHMEMOBJ@@QAEHPAVEPATHOBJ@@@Z @ 0x228189
 * Callers:
 *     ?ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ @ 0x1CCB24 (-ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ.c)
 * Callees:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2281CA (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AAEHXZ.c)
 *     ?bFetchSubPath@RTP_PATHMEMOBJ@@AAEHXZ @ 0x228470 (-bFetchSubPath@RTP_PATHMEMOBJ@@AAEHXZ.c)
 */

int __thiscall RTP_PATHMEMOBJ::bDiagonalizePath(RTP_PATHMEMOBJ *this, struct EPATHOBJ *a2)
{
  int v3; // edx
  int result; // eax

  v3 = *((_DWORD *)this + 2);
  *(_DWORD *)this &= ~8u;
  *((_DWORD *)this + 23) = a2;
  *((_DWORD *)this + 17) = 1;
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(v3 + 20);
  while ( RTP_PATHMEMOBJ::bFetchSubPath(this) )
  {
    result = RTP_PATHMEMOBJ::bDiagonalizeSubPath(this);
    if ( !result )
      return result;
  }
  return 1;
}
