/*
 * XREFs of ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01500B8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0098EEC (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0098FE0 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014D538 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C014F5C0 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall SetDisplayConfigHandlePreferredScaling(
        struct D3DKMT_GETPATHSMODALITY *a1,
        enum _DXGK_DIAG_SDC_STAGE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // r8
  __int64 v17; // r9
  struct D3DKMT_GETPATHSMODALITY *v19; // [rsp+30h] [rbp+8h]

  v5 = *((unsigned __int16 *)a1 + 10);
  if ( !(_WORD)v5 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
    LOWORD(v5) = *((_WORD *)a1 + 10);
  }
  v19 = AllocPathsModality(v5);
  if ( v19 )
  {
    if ( (int)((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))qword_1C0252A98)(
                v19,
                a1) < 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (int)((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02528D0)(47LL, v19) < 0 )
    {
      ConvertPreferredScalingToAdapterDefault(a1, v15, (__int64)v16, v17);
    }
    else
    {
      v8 = ReplacePreferredScaling((__int64)v19, (__int64)a1, v16, v17);
      if ( v8 < 0 )
      {
        v9 = 20;
        goto LABEL_10;
      }
    }
    v8 = 0;
    goto LABEL_13;
  }
  v8 = -1073741801;
  v9 = 19;
LABEL_10:
  *(_DWORD *)a2 = v9;
LABEL_13:
  FreePathsModality(v19);
  return (unsigned int)v8;
}
