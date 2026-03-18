/*
 * XREFs of ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01409D8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0140C40 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkUpdateGdiInfo @ 0x1C0144140 (DxgkUpdateGdiInfo.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02A8480 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryWin32DpiValues(unsigned int *a1, struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  int v4; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(int *); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(int *); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+24h] [rbp-14h]
  unsigned int *v17; // [rsp+28h] [rbp-10h]

  v4 = -1073741275;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  if ( Current )
    v6 = *((_QWORD *)Current + 11);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(int *))(v6 + 352);
    if ( v7 )
    {
      if ( a1 && (v15 = 0, v16 = 4, v17 = a1, v4 = v7(&v15), v4 < 0) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v9, v8);
        *(_QWORD *)(v14 + 24) = 1443LL;
      }
      else
      {
        if ( !a2 )
          return (unsigned int)v4;
        v10 = *(__int64 (__fastcall **)(int *))(v6 + 352);
        v15 = 1;
        v16 = 32;
        v17 = (unsigned int *)a2;
        v4 = v10(&v15);
        if ( v4 >= 0 )
          return (unsigned int)v4;
        v14 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v14 + 24) = 1456LL;
      }
      WdLogEvent5_WdAssertion(v14);
    }
  }
  return (unsigned int)v4;
}
