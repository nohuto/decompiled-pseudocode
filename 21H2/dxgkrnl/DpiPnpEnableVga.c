/*
 * XREFs of DpiPnpEnableVga @ 0x1C01F5F10
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01F5298 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  _DWORD v11[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h]
  __int64 v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+48h] [rbp-21h]
  _DWORD v15[2]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v16; // [rsp+58h] [rbp-11h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  __int64 v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  int v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+84h] [rbp+1Bh]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]

  v11[1] = 0;
  v14 = 0LL;
  v6 = a2;
  v7 = a1;
  Global = DXGGLOBAL_GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
  v12 = 0LL;
  v11[0] = 7;
  v13 = v7;
  if ( qword_1C0130748 )
    v12 = *(_QWORD *)(*(_QWORD *)(qword_1C0130748 + 64) + 152LL);
  v20 = 0;
  v19 = 0;
  v18 = 0LL;
  v24 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v15[0] = 6;
  v15[1] = 64;
  v21 = 48;
  v22 = v7;
  v23 = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, 0x100000000LL);
  LOBYTE(v9) = v6;
  return SMgrGdiCallout(
           v11,
           0x100000000LL,
           v9,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0),
           a3,
           a4);
}
