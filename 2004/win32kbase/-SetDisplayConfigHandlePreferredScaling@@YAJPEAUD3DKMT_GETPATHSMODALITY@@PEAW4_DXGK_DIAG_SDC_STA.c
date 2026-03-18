/*
 * XREFs of ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0149D68
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B285C (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C00B2950 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01471E8 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C0149270 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall SetDisplayConfigHandlePreferredScaling(
        struct D3DKMT_GETPATHSMODALITY *a1,
        enum _DXGK_DIAG_SDC_STAGE *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // r8
  struct D3DKMT_GETPATHSMODALITY *v16; // [rsp+30h] [rbp+8h]

  v4 = *((unsigned __int16 *)a1 + 10);
  if ( !(_WORD)v4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, a2, a3);
    WdLogEvent5_WdAssertion(v6);
    LOWORD(v4) = *((_WORD *)a1 + 10);
  }
  v16 = AllocPathsModality(v4);
  if ( v16 )
  {
    if ( (int)((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))qword_1C024CA78)(
                v16,
                a1) < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
      WdLogEvent5_WdAssertion(v12);
    }
    if ( (int)((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C024C8B0)(47LL, v16) < 0 )
    {
      ConvertPreferredScalingToAdapterDefault(a1, v13, (__int64)v14);
    }
    else
    {
      v7 = ReplacePreferredScaling((__int64)v16, (__int64)a1, v14);
      if ( v7 < 0 )
      {
        v8 = 20;
        goto LABEL_10;
      }
    }
    v7 = 0;
    goto LABEL_13;
  }
  v7 = -1073741801;
  v8 = 19;
LABEL_10:
  *(_DWORD *)a2 = v8;
LABEL_13:
  FreePathsModality(v16);
  return (unsigned int)v7;
}
