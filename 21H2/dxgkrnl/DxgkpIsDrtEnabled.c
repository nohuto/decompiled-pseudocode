/*
 * XREFs of DxgkpIsDrtEnabled @ 0x1C0261638
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0231D94 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C02668B8 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkpIsDrtEnabled(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+38h] [rbp-11h]
  const wchar_t *v9; // [rsp+40h] [rbp-9h]
  int *v10; // [rsp+48h] [rbp-1h]
  int v11; // [rsp+50h] [rbp+7h]
  int *v12; // [rsp+58h] [rbp+Fh]
  int v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+70h] [rbp+27h]
  __int128 v16; // [rsp+78h] [rbp+2Fh]
  __int128 v17; // [rsp+88h] [rbp+3Fh]
  __int64 v18; // [rsp+98h] [rbp+4Fh]
  int v19; // [rsp+B0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current && (*((_BYTE *)Current + 348) & 1) != 0 )
    return 1;
  v19 = 0;
  v7 = 0LL;
  v14 = 0LL;
  v9 = L"DRTTestEnable";
  v15 = 0;
  v18 = 0LL;
  v10 = &v19;
  v12 = &v19;
  v8 = 288;
  v11 = 67108868;
  v13 = 4;
  v16 = 0LL;
  v17 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v7, 0LL, 0LL);
  if ( v19 == 1484026436 )
    return 1;
  v6 = WdLogNewEntry5_WdEvent(v4, v3);
  *(_QWORD *)(v6 + 24) = 51LL;
  WdLogEvent5_WdEvent(v6);
  return 0;
}
