/*
 * XREFs of ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EE580
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02EC588 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EDB9C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EDC94 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EE334 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02ED300 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  int v1; // r9d
  bool v2; // zf

  v1 = *((_DWORD *)this + 6);
  v2 = *((_BYTE *)this + 60) == 0;
  *((_WORD *)this + 5) = 0;
  return BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
           this,
           (struct _LUID *)((char *)this + 12),
           *((_DWORD *)this + 5),
           v1,
           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)this + 7),
           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)this + 8),
           *((_BYTE *)this + 53) != 0,
           !v2);
}
