/*
 * XREFs of ?lGetStyleState@XCLIPOBJ@@QBEJJ@Z @ 0x223879
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z @ 0x22360C (-bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z.c)
 *     ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C (-bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall XCLIPOBJ::lGetStyleState(XCLIPOBJ *this, unsigned int a2)
{
  return (unsigned __int16)(a2 % *(_DWORD *)(*((_DWORD *)this + 30) + 180)) | ((unsigned __int16)(a2
                                                                                                / *(_DWORD *)(*((_DWORD *)this + 30) + 180)) << 16);
}
