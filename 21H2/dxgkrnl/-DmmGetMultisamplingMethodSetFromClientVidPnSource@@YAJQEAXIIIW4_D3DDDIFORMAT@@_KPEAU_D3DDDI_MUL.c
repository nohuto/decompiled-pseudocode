/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C039B524
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C02F8F20 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0068EC4 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01AA288 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r14
  unsigned __int64 *v10; // r12
  __int64 v12; // rsi
  struct VIDPN_MGR *v13; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  DMMVIDPNSOURCEMODESET *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  int v23; // eax
  D3DKMDT_HVIDPN v24; // rbx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r14
  ADAPTER_DISPLAY *v28; // rcx
  int IsSupportedVidPn; // eax
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rcx
  D3DKMDT_HVIDPN v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rcx
  ADAPTER_DISPLAY *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // r14
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // [rsp+28h] [rbp-81h]
  DMMVIDPNSOURCEMODESET *v47; // [rsp+58h] [rbp-51h] BYREF
  __int64 v48; // [rsp+60h] [rbp-49h] BYREF
  struct _DXGKARG_ISSUPPORTEDVIDPN v49; // [rsp+68h] [rbp-41h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v50; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v51[88]; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v52; // [rsp+F8h] [rbp+4Fh] BYREF
  unsigned int v53; // [rsp+100h] [rbp+57h]
  unsigned int v54; // [rsp+108h] [rbp+5Fh]
  unsigned int v55; // [rsp+110h] [rbp+67h]

  v55 = a4;
  v54 = a3;
  v53 = a2;
  v8 = a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v12 = *((_QWORD *)this + 349);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v13 = *(struct VIDPN_MGR **)(v12 + 104);
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v48, (__int64)v13);
  a8 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13, (__int64 *)&a8);
  v15 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v16 = IndexedSet<DMMVIDPNSOURCE>::FindById(a8[38], v8);
    v17 = v16;
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, v8);
      v15 = -1071774972;
      goto LABEL_87;
    }
    v18 = *(_QWORD *)(v16 + 104);
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
      v19 = *(DMMVIDPNSOURCEMODESET **)(v17 + 104);
    }
    else
    {
      v19 = 0LL;
    }
    v20 = *((_QWORD *)v19 + 18);
    v47 = v19;
    if ( !v20 )
    {
      WdLogSingleEntry1(2LL, v17);
      v15 = 1075708679;
LABEL_86:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v47, 0LL);
      goto LABEL_87;
    }
    v21 = a5;
    BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                  v19,
                  v54,
                  v55,
                  a5,
                  (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v20 + 72));
    if ( !BestMatch )
    {
      WdLogSingleEntry5(7LL, v54, v55, v21, v8, this);
      v15 = -1071774970;
      goto LABEL_86;
    }
    v23 = DMMVIDPNSOURCEMODESET::PinMode(v19, *((_DWORD *)BestMatch + 6));
    v15 = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry5(2LL, v8, v54, v55, v21, v23);
      goto LABEL_86;
    }
    v52 = v8 | 0xFFFFFFFF00000000uLL;
    v24 = (D3DKMDT_HVIDPN)((unsigned __int64)a8 & -(__int64)(a8 + 11 != 0LL));
    if ( v24 )
    {
      if ( *(_DWORD *)(((unsigned __int64)a8 & -(__int64)(a8 + 11 != 0LL)) + 0x40) == 1833172997 )
      {
        v25 = (unsigned __int64)a8 & -(__int64)(a8 + 11 != 0LL);
        goto LABEL_30;
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
    }
    v25 = 0LL;
LABEL_30:
    if ( !*(_BYTE *)(v25 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v25 + 96)) )
    {
      WdLogSingleEntry1(2LL, v24);
LABEL_50:
      v33 = *((_QWORD *)v13 + 1);
      if ( !v33 )
      {
        WdLogSingleEntry0(1LL);
        v33 = *((_QWORD *)v13 + 1);
      }
      WdLogSingleEntry2(7LL, v24, *(_QWORD *)(v33 + 16));
      v34 = (unsigned int)v8;
      LODWORD(v31) = -1071774970;
      goto LABEL_74;
    }
    if ( ((unsigned __int16)((2 << *(_BYTE *)(v25 + 172)) - 1) & *(_WORD *)(v25 + 174)) != 0 )
      WdLogSingleEntry0(1LL);
    v26 = *((_QWORD *)v13 + 1);
    if ( !v26 )
    {
      WdLogSingleEntry0(1LL);
      v26 = *((_QWORD *)v13 + 1);
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v28 = (ADAPTER_DISPLAY *)*((_QWORD *)v13 + 1);
    *(_QWORD *)&v49.IsVidPnSupported = 0LL;
    v49.hDesiredVidPn = v24;
    if ( !v28 )
    {
      WdLogSingleEntry0(1LL);
      v28 = (ADAPTER_DISPLAY *)*((_QWORD *)v13 + 1);
    }
    IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v28, &v49);
    v31 = IsSupportedVidPn;
    if ( IsSupportedVidPn >= 0 )
    {
      if ( !v49.IsVidPnSupported )
      {
        LODWORD(v8) = v53;
        goto LABEL_50;
      }
      if ( v24 && *((_DWORD *)v24 + 16) == 1833172997 )
        v35 = v24;
      else
        v35 = 0LL;
      if ( ((unsigned __int16)((2 << *((_BYTE *)v35 + 172)) - 1) & *((_WORD *)v35 + 87)) != 0 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v51,
        (__int64)(v35 + 38),
        3u,
        v30,
        v46,
        *((_QWORD *)v35 + 17));
      v36 = *((_QWORD *)v13 + 1);
      if ( !v36 )
      {
        WdLogSingleEntry0(1LL);
        v36 = *((_QWORD *)v13 + 1);
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v37 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v37 + 168)) )
      {
        WdLogSingleEntry0(1LL);
      }
      *((_DWORD *)&v50.EnumPivot + 2) = 0;
      v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v13 + 1);
      v50.hConstrainingVidPn = v24;
      v50.EnumPivotType = D3DKMDT_EPT_VIDPNSOURCE;
      v50.EnumPivot = (DXGK_ENUM_PIVOT)v52;
      if ( !v38 )
      {
        WdLogSingleEntry0(1LL);
        v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v13 + 1);
      }
      v39 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v38, &v50);
      LODWORD(v31) = v39;
      if ( v39 >= 0 )
        LODWORD(v31) = 0;
      else
        WdLogSingleEntry4(2LL, v24, v50.EnumPivot.VidPnSourceId, v50.EnumPivot.VidPnTargetId, v39);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51, v40);
      if ( (int)v31 >= 0 )
      {
        v45 = *(_QWORD *)(v17 + 168) >> 3;
        if ( v10 )
          *v10 = 8 * v45;
        if ( a6 >= v45 )
        {
          if ( a7 )
            memmove(a7, *(const void **)(v17 + 160), 8 * v45);
          v15 = 0;
        }
        else
        {
          WdLogSingleEntry2(7LL, a6, v45);
          if ( !v10 )
            WdLogSingleEntry0(1LL);
          v15 = -1073741789;
        }
        goto LABEL_86;
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41);
      v43[3] = v24;
      v43[4] = 3LL;
      v43[5] = &v52;
      v44 = *((_QWORD *)v13 + 1);
      if ( !v44 )
      {
        WdLogSingleEntry0(1LL);
        v44 = *((_QWORD *)v13 + 1);
      }
      v43[6] = *(_QWORD *)(v44 + 16);
      v43[7] = (int)v31;
    }
    else
    {
      WdLogSingleEntry3(2LL, v24, v27, IsSupportedVidPn);
      v32 = *((_QWORD *)v13 + 1);
      if ( !v32 )
      {
        WdLogSingleEntry0(1LL);
        v32 = *((_QWORD *)v13 + 1);
      }
      WdLogSingleEntry3(2LL, v24, *(_QWORD *)(v32 + 16), v31);
    }
    v34 = v53;
    if ( (_DWORD)v31 != -1071774970 )
    {
      WdLogSingleEntry5(2LL, v54, v55, a5, v53, (int)v31);
      goto LABEL_76;
    }
LABEL_74:
    WdLogSingleEntry3(3LL, a8, v34, this);
LABEL_76:
    v15 = v31;
    goto LABEL_86;
  }
  WdLogSingleEntry1(7LL, ClientVidPnFromLastClientCommitedVidPn);
LABEL_87:
  auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v48 + 40));
  return v15;
}
