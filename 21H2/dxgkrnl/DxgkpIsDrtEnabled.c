/*
 * XREFs of DxgkpIsDrtEnabled @ 0x1C0301864
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0307188 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C0308DB4 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x1C03445D4 (-DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C035A7A0 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkpIsDrtEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h]
  const wchar_t *v8; // [rsp+40h] [rbp-9h]
  int *v9; // [rsp+48h] [rbp-1h]
  int v10; // [rsp+50h] [rbp+7h]
  int *v11; // [rsp+58h] [rbp+Fh]
  int v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+70h] [rbp+27h]
  __int128 v15; // [rsp+78h] [rbp+2Fh]
  __int128 v16; // [rsp+88h] [rbp+3Fh]
  __int64 v17; // [rsp+98h] [rbp+4Fh]
  int v18; // [rsp+B0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current && (*((_DWORD *)Current + 106) & 0x1000) != 0 )
    return 1;
  v18 = 0;
  v6 = 0LL;
  v13 = 0LL;
  v8 = L"DRTTestEnable";
  v14 = 0;
  v17 = 0LL;
  v9 = &v18;
  v11 = &v18;
  v7 = 288;
  v10 = 67108868;
  v12 = 4;
  v15 = 0LL;
  v16 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v6, 0LL, 0LL);
  if ( v18 == 1484026436 )
    return 1;
  WdLogSingleEntry1(4LL, 51LL);
  return 0;
}
