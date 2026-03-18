/*
 * XREFs of ?InitializeCABCState@DXGADAPTER@@AEAAJXZ @ 0x1C01FFE80
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::InitializeCABCState(DXGADAPTER *this)
{
  int v1; // eax
  __int64 v3; // [rsp+40h] [rbp-19h] BYREF
  int v4; // [rsp+48h] [rbp-11h]
  const WCHAR *v5; // [rsp+50h] [rbp-9h]
  int *v6; // [rsp+58h] [rbp-1h]
  int v7; // [rsp+60h] [rbp+7h]
  int *v8; // [rsp+68h] [rbp+Fh]
  int v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+80h] [rbp+27h]
  __int128 v12; // [rsp+88h] [rbp+2Fh]
  __int128 v13; // [rsp+98h] [rbp+3Fh]
  __int64 v14; // [rsp+A8h] [rbp+4Fh]
  DXGADAPTER *v15; // [rsp+C0h] [rbp+67h] BYREF
  int v16; // [rsp+C8h] [rbp+6Fh] BYREF
  int v17; // [rsp+D0h] [rbp+77h] BYREF

  v15 = this;
  v16 = 0;
  v17 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v5 = L"DisableCABC";
  v6 = &v16;
  v8 = &v17;
  v4 = 288;
  v7 = 0x4000000;
  v9 = 4;
  v12 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v1 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v3, 0LL, 0LL);
  if ( v1 < 0 )
    WdLogSingleEntry1(3LL, v1);
  LOBYTE(v15) = v16 == 0;
  return ZwUpdateWnfStateData(&WNF_DXGK_CABC_ON_OR_OFF, &v15, 1LL, 0LL, 0LL, 0, 0);
}
