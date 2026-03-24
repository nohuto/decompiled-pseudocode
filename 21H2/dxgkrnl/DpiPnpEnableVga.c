/*
 * XREFs of DpiPnpEnableVga @ 0x1C019A32C
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0199C54 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CA620 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E2438 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiPnpEnableVga(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  _DWORD v13[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v14; // [rsp+38h] [rbp-90h]
  __int64 v15; // [rsp+40h] [rbp-88h]
  __int64 v16; // [rsp+48h] [rbp-80h]
  _DWORD v17[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v18; // [rsp+58h] [rbp-70h]
  __int64 v19; // [rsp+68h] [rbp-60h]
  __int64 v20; // [rsp+70h] [rbp-58h]
  int v21; // [rsp+78h] [rbp-50h]
  int v22; // [rsp+7Ch] [rbp-4Ch]
  int v23; // [rsp+80h] [rbp-48h]
  int v24; // [rsp+84h] [rbp-44h]
  int v25; // [rsp+88h] [rbp-40h]
  int v26; // [rsp+8Ch] [rbp-3Ch]

  v13[1] = 0;
  v16 = 0LL;
  v6 = (unsigned __int8)a2;
  v7 = (unsigned __int8)a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v9, v10);
  v14 = 0LL;
  v13[0] = 7;
  v15 = v7;
  if ( qword_1C00B2DC0 )
    v14 = *(_QWORD *)(*(_QWORD *)(qword_1C00B2DC0 + 64) + 152LL);
  v22 = 0;
  v21 = 0;
  v20 = 0LL;
  v26 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v17[0] = 6;
  v17[1] = 64;
  v23 = 48;
  v24 = v7;
  v25 = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17, 0x100000000LL);
  LOBYTE(v11) = v6;
  return SMgrGdiCallout(
           v13,
           0x100000000LL,
           v11,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0),
           a3,
           a4);
}
