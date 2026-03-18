/*
 * XREFs of ?vBecome@EPATHOBJ@@QAEXAAVWIDEPATHOBJ@@@Z @ 0x236A18
 * Callers:
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall EPATHOBJ::vBecome(EPATHOBJ *this, struct WIDEPATHOBJ *a2)
{
  int v3; // ecx

  EPATHOBJ::vFreeBlocks(this);
  v3 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(*((_DWORD *)a2 + 2) + 16);
  *(_DWORD *)(*((_DWORD *)this + 2) + 20) = *(_DWORD *)(*((_DWORD *)a2 + 2) + 20);
  *(_DWORD *)(*((_DWORD *)this + 2) + 24) = *(_DWORD *)(*((_DWORD *)a2 + 2) + 24);
  *(_DWORD *)(*((_DWORD *)this + 2) + 56) |= 3u;
  *(_DWORD *)this = *(_DWORD *)this & 0xFFFFFFEC | 0x10;
  *(_DWORD *)(*((_DWORD *)a2 + 2) + 16) = 0;
  EPATHOBJ::vUnlock(a2);
}
