/*
 * XREFs of ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01D61A4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0316668 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiInternal::GetCurrentSourceResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 (__fastcall *v4)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rdi
  const wchar_t *v15; // r9
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  void (__fastcall *v19)(__int64, __int64); // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+40h] BYREF

  v4 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v7 = *(unsigned int *)a3;
  v17[0] = 0;
  v16 = 0LL;
  v23 = 0LL;
  v9 = v4(this, v7, &v23, &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = v9;
    WdLogSingleEntry1(2LL, v9);
    v15 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (status = 0x%I64x)";
  }
  else
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v17,
      v23,
      *((_QWORD *)a2 + 2),
      (__int64)this);
    v22 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 24))(v23, &v22);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = *(_DWORD *)(v22 + 4);
      if ( v12 == 1 || v12 > 2 && v12 <= 4 )
      {
        if ( *(_DWORD *)(v22 + 8) && *(_DWORD *)(v22 + 12) )
        {
          *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v22 + 8);
LABEL_7:
          (*(void (__fastcall **)(__int64))(v16 + 32))(v23);
          goto LABEL_8;
        }
        WdLogSingleEntry1(1LL, v22);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid mode from call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (pPinnedVidPnSourceModeInfo = 0x%I64x)",
          v22,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, *(int *)(v22 + 4));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed call to determine source resolution due to invalid type. (Type = 0x%I64x)",
          *(int *)(v22 + 4),
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v10 = -1073741823;
      goto LABEL_7;
    }
    v14 = v11;
    WdLogSingleEntry1(2LL, v11);
    v15 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (status = 0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v14, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
  if ( v17[0] )
    v19(v20, v18);
  return v10;
}
