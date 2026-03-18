/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C01BD518
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C01BD268 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C01BE814 (BmlDoesTargetModeSupportWireFormat.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C01BE8EC (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C03AB970 (-IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C03ABA18 (-ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v4; // ecx
  DMMVIDPNTOPOLOGY *v5; // r9
  unsigned int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DMMVIDPNTARGETMODE *v16; // rsi
  __int64 v17; // rdx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v18; // ebx
  __int64 v19; // r15
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // esi
  struct DMMVIDPNTARGETMODE *v24; // rcx
  unsigned int v25; // eax
  _BOOL8 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rcx
  int v33; // ecx
  bool v34; // al
  __int64 v35; // r14
  unsigned int v36; // ebx
  bool v37; // cf
  __int64 v38; // rax
  const struct DMMVIDPNSOURCEMODESET *v39; // r14
  __int64 v40; // r15
  __int64 v41; // rcx
  char v42; // r8
  int v43; // ecx
  int v44; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-34h]
  struct DMMVIDPNTARGETMODE *v46; // [rsp+38h] [rbp-30h]
  __int64 v47; // [rsp+40h] [rbp-28h] BYREF
  __int64 v48; // [rsp+48h] [rbp-20h] BYREF
  const struct DMMVIDPNSOURCEMODESET *v49; // [rsp+50h] [rbp-18h] BYREF
  DMMVIDPNTOPOLOGY *i; // [rsp+58h] [rbp-10h]
  unsigned int v51; // [rsp+B0h] [rbp+48h] BYREF
  int v52; // [rsp+B8h] [rbp+50h]
  __int64 v53; // [rsp+C0h] [rbp+58h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v54; // [rsp+C8h] [rbp+60h] BYREF

  v53 = a3;
  v52 = a2;
  v4 = 0;
  v45 = 0;
  if ( !*a1 )
    return 0LL;
  v5 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
  v6 = -1073741811;
  for ( i = (DMMVIDPNTOPOLOGY *)(a3 + 96); ; v5 = i )
  {
    v7 = v4;
    v8 = 120LL * v4;
    v9 = *(_QWORD *)&a1[v8 + 16];
    v10 = *(unsigned int *)(v9 + 28);
    v11 = *(unsigned int *)(v9 + 24);
    Path = DMMVIDPNTOPOLOGY::FindPath(v5, *(_DWORD *)(v9 + 24), *(_DWORD *)(v9 + 28));
    v13 = Path;
    if ( !Path )
      break;
    v14 = *((_QWORD *)Path + 12);
    v15 = *(_QWORD *)(v14 + 104);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
      v15 = *(_QWORD *)(v14 + 104);
    }
    v16 = *(struct DMMVIDPNTARGETMODE **)(v15 + 144);
    v48 = v15;
    v46 = v16;
    if ( !v16 )
    {
      WdLogSingleEntry2(2LL, *(unsigned int *)(*(_QWORD *)&a1[120 * v7 + 16] + 28LL), v53);
      v6 = -1071774967;
      goto LABEL_68;
    }
    v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 12) + 96LL) + 112LL);
    if ( v17 )
    {
      MONITOR_MGR::AcquireMonitorShared(&v47, v17);
      if ( v47 )
      {
        v18.0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v47 + 364);
        ExReleaseResourceLite((PERESOURCE)(v47 + 24));
        KeLeaveCriticalRegion();
        v19 = v53;
        goto LABEL_10;
      }
      WdLogSingleEntry1(2LL, -1073741275LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>(&v47);
      v28 = -1073741275LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v28 = -1073741811LL;
    }
    v19 = v53;
    WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL), v53, v28);
    v18.Value = 0;
LABEL_10:
    v20 = *(_QWORD *)&a1[v8 + 16];
    v51 = 0;
    v21 = *((_DWORD *)v16 + 32);
    v54.0 = v18.0;
    v31 = (*(_BYTE *)v20 & 8) == 0;
    v44 = v21;
    if ( v31 )
      goto LABEL_16;
    v22 = *(_DWORD *)(v20 + 204);
    v23 = *(_DWORD *)(v20 + 208);
    if ( !(unsigned __int8)BmlDoesTargetModeSupportWireFormat(v46, v22) )
    {
      v32 = *(_QWORD *)&a1[v8 + 16];
      if ( (*(_BYTE *)(v32 + 8) & 8) != 0 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v32 + 28));
        v6 = -1071774902;
        goto LABEL_68;
      }
      v16 = v46;
LABEL_16:
      if ( (a1[v8 + 132] & 2) != 0
        && (*(_DWORD *)&a1[v8 + 116] & 1) != 0
        && *((_BYTE *)DXGGLOBAL_GetGlobal() + 304812)
        && ModeSupportsHighDepthColorFormat(v16, &v54)
        && (a1[v8 + 132] & 1) == 0 )
      {
        v34 = 0;
        if ( v52 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v33 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v33 != 36 && v33 != 113 )
            v34 = 1;
        }
        v35 = *((_QWORD *)v13 + 11);
        v36 = 4 * !v34;
        v37 = v34;
        v38 = *(_QWORD *)(v35 + 104);
        v23 = v37 ? 0 : 0xC;
        if ( v38 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v38 + 96));
          v39 = *(const struct DMMVIDPNSOURCEMODESET **)(v35 + 104);
        }
        else
        {
          v39 = 0LL;
        }
        v40 = *(_QWORD *)(v19 + 48);
        v49 = v39;
        v41 = *(_QWORD *)(v40 + 8);
        if ( !v41 )
        {
          WdLogSingleEntry0(1LL);
          v41 = *(_QWORD *)(v40 + 8);
        }
        if ( !IsHDRSourceModeAvailableForPinnedSourceMode(*(const struct DXGADAPTER **)(v41 + 16), v39) )
        {
          v23 = 0;
          v36 = 0;
        }
        if ( (int)PickWireFormatWithPreference(v36, &v44, &v54, &v51) < 0 )
        {
          v51 = v51 & 0xFFFFFF03 | 8;
          v23 = 0;
          WdLogSingleEntry0(3LL);
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v49, 0LL);
      }
      else if ( (a1[v8 + 132] & 6) == 6 && ModeSupportsHighDepthColorFormat(v16, &v54) && (v42 & 1) == 0 )
      {
        v23 = 30;
        if ( (int)PickWireFormatWithPreference(3LL, &v44, &v54, &v51) < 0 )
        {
          v51 = v51 & 0xFFFFFF03 | 8;
          v23 = 0;
          WdLogSingleEntry0(3LL);
        }
      }
      else
      {
        v23 = 0;
        v27 = 1;
        if ( v52 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v43 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v43 == 31 || v43 == 35 )
            v27 = 0;
        }
        if ( (int)PickWireFormatWithPreference(v27, &v44, &v54, &v51) < 0 )
        {
          v51 = v51 & 0xFFFFFF03 | 8;
          WdLogSingleEntry0(3LL);
        }
      }
      goto LABEL_14;
    }
    v51 = v22;
    if ( (unsigned int)(v23 - 31) > 2 )
      goto LABEL_13;
    if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) )
    {
      v29 = *(_QWORD *)(v19 + 48);
      v30 = *(_QWORD *)(v29 + 8);
      if ( !v30 )
      {
        WdLogSingleEntry0(1LL);
        v30 = *(_QWORD *)(v29 + 8);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v30 + 16) + 436LL) & 8) == 0 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL));
LABEL_68:
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v48, 0LL);
        return v6;
      }
    }
    if ( v23 == 32 )
    {
      v31 = (*(_DWORD *)&a1[v8 + 116] & 2) == 0;
    }
    else
    {
LABEL_13:
      if ( v23 != 33 )
        goto LABEL_14;
      v31 = (*(_DWORD *)&a1[v8 + 116] & 4) == 0;
    }
    if ( v31 )
    {
      v6 = -1073741637;
      goto LABEL_68;
    }
LABEL_14:
    v24 = v46;
    *((_DWORD *)v46 + 33) = v51;
    *((_DWORD *)v24 + 34) = v23;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v48, 0LL);
    v25 = *a1;
    v4 = v45 + 1;
    v45 = v4;
    if ( v4 >= v25 )
      return 0LL;
  }
  WdLogSingleEntry5(2LL, v45, a1, v11, v10, v53);
  return 3223192345LL;
}
