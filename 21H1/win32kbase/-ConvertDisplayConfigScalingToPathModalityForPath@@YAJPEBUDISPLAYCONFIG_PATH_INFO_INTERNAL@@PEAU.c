/*
 * XREFs of ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C014D11C
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C014CC40 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C014FECC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConvertDisplayConfigScalingToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        bool *a3)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi

  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
  {
    v4 = *((unsigned int *)a1 + 28);
    v5 = (_DWORD *)((char *)a2 + 140);
    if ( (_DWORD)v4 == 128 )
    {
      *v5 = 253;
      if ( a3 )
        *a3 = 1;
    }
    else if ( (int)((__int64 (__fastcall *)(__int64, char *, _DWORD *))qword_1C0252980)(v4, (char *)a2 + 16, v5) < 0 )
    {
      return 3221225485LL;
    }
    *((_DWORD *)a2 + 34) = *v5;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  return 0LL;
}
