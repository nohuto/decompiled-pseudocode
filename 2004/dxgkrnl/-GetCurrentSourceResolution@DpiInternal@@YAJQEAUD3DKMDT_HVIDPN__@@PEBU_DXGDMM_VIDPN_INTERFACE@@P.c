/*
 * XREFs of ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C0143428
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0141DF0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFA38 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B848 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v23[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  void (__fastcall *v25)(__int64, __int64); // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp-10h]
  int v27; // [rsp+58h] [rbp-8h]
  __int64 v28; // [rsp+88h] [rbp+28h] BYREF
  __int64 v29; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v7 = *(unsigned int *)a3;
  v22 = 0LL;
  v29 = 0LL;
  v23[0] = 0;
  v9 = v4(this, v7, &v29, &v22);
  v12 = v9;
  if ( v9 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v18 + 24) = v12;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v12;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v23,
    v29,
    *((_QWORD *)a2 + 2),
    (__int64)this);
  v28 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v22 + 24))(v29, &v28);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v16 = *(_DWORD *)(v28 + 4);
    if ( v16 == 1 || v16 > 2 && v16 <= 4 )
    {
      if ( *(_DWORD *)(v28 + 8) && *(_DWORD *)(v28 + 12) )
      {
        *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v28 + 8);
LABEL_7:
        (*(void (__fastcall **)(__int64))(v22 + 32))(v29);
        goto LABEL_8;
      }
      v21 = WdLogNewEntry5_WdAssertion(v15, v28);
      *(_QWORD *)(v21 + 24) = v28;
      WdLogEvent5_WdAssertion(v21);
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v15, v28);
      *(_QWORD *)(v20 + 24) = *(int *)(v28 + 4);
      WdLogEvent5_WdError(v20);
    }
    LODWORD(v12) = -1073741823;
    goto LABEL_7;
  }
  v19 = WdLogNewEntry5_WdError(v15, v14);
  *(_QWORD *)(v19 + 24) = v12;
  WdLogEvent5_WdError(v19);
LABEL_8:
  if ( v23[0] )
    v25(v26, v24);
  return (unsigned int)v12;
}
