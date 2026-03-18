/*
 * XREFs of ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C03AED9C
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03AE4D0 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C004D540 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(__int64 a1)
{
  int MultiScreenDefaultShellTopology; // eax
  char v3; // bl
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  DXGADAPTER *v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  LOWORD(v9) = 0;
  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v9);
  v3 = 1;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = (unsigned __int16)v9;
  }
  else
  {
    WdLogSingleEntry1(1LL, MultiScreenDefaultShellTopology);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    Global = DXGGLOBAL_GetGlobal();
    v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a1 + 12), &v9);
    v7 = v6;
    if ( v6 )
    {
      v8 = *((_QWORD *)v6 + 349);
      if ( (!*(_BYTE *)(v8 + 289) || !*(_BYTE *)(v8 + 290))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 27) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v3 = 0;
      }
      DXGADAPTER::ReleaseReference(v7);
    }
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a1 + 28))
      && (!*(_BYTE *)(a1 + 52) || *(_BYTE *)(a1 + 60) || v3) )
    {
      return 3LL;
    }
    else
    {
      return 4LL;
    }
  }
  return result;
}
