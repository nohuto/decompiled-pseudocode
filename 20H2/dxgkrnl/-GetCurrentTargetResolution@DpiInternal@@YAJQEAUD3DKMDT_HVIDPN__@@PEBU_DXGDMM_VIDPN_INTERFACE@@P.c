/*
 * XREFs of ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C0142170
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0140C40 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AEA58 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B8A8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiInternal::GetCurrentTargetResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4,
        struct _D3DKMDT_2DREGION *a5)
{
  __int64 (__fastcall *v5)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v22[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h]
  void (__fastcall *v24)(__int64, __int64); // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+50h] [rbp-10h]
  int v26; // [rsp+58h] [rbp-8h]
  __int64 v27; // [rsp+88h] [rbp+28h] BYREF
  __int64 v28; // [rsp+90h] [rbp+30h] BYREF

  v5 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 3);
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v8 = *((unsigned int *)a3 + 1);
  v28 = 0LL;
  v27 = 0LL;
  v22[0] = 0;
  v10 = v5(this, v8, &v27, &v28);
  v13 = v10;
  if ( v10 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v19 + 24) = v13;
    WdLogEvent5_WdError(v19);
  }
  else
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v22,
      v27,
      *((_QWORD *)a2 + 4),
      (__int64)this);
    v21 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v28 + 24))(v27, &v21);
    v13 = v14;
    if ( v14 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v20 + 24) = v13;
      WdLogEvent5_WdError(v20);
    }
    else
    {
      v17 = v21;
      *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v21 + 20);
      LOBYTE(a5->cx) = (unsigned int)(((int)(*(_DWORD *)(v17 + 56) << 29) >> 29) - 2) <= 1;
      (*(void (__fastcall **)(__int64))(v28 + 32))(v27);
    }
    if ( v22[0] )
      v24(v25, v23);
  }
  return (unsigned int)v13;
}
