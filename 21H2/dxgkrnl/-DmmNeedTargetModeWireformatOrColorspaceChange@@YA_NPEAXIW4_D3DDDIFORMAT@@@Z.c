/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C014E444
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014D6D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00056AC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007EE0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0124D74 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0142A04 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(__int64 a1, __int64 a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char **v15; // r13
  int NumPathsFromSource; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // edx
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  unsigned int v35; // edx
  __int64 v36; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned int v43; // r9d
  __int64 v44; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v45; // [rsp+28h] [rbp-18h] BYREF
  __int64 v46; // [rsp+30h] [rbp-10h] BYREF
  __int64 v47; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v48; // [rsp+88h] [rbp+48h] BYREF

  v4 = (unsigned int)a2;
  v5 = (_QWORD *)a1;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(a1, a2) + 304369) )
    return 0;
  if ( !v5 )
  {
    v38 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v38 + 24) = 0LL;
LABEL_37:
    WdLogEvent5_WdError(v38);
    return 0;
  }
  v8 = v5[337];
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 88)) == 0 )
  {
    v38 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v38 + 24) = v5;
    goto LABEL_37;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, v9);
  v10 = *(_QWORD *)(v9 + 88);
  v11 = 1;
  v44 = 0LL;
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v10 + 32), 1u);
    v12 = *(_QWORD *)(v9 + 88);
  }
  else
  {
    v12 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v44, v12);
  if ( v44 )
  {
    v45 = 0LL;
    v15 = (char **)(v44 + 96);
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v44 + 96), (unsigned int)v4, &v45);
    v19 = NumPathsFromSource;
    if ( NumPathsFromSource < 0 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      v39[3] = v4;
      v39[4] = v15;
    }
    else
    {
      v20 = 0LL;
      if ( !v45 )
        goto LABEL_35;
      while ( 1 )
      {
        v48 = -1;
        v21 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, (unsigned int)v4, v20, &v48);
        v19 = v21;
        if ( v21 < 0 )
          break;
        v24 = v48;
        if ( v48 == -1 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v23, v22);
          WdLogEvent5_WdAssertion(v40);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v15, v4, v24);
        v5 = Path;
        if ( !Path )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
          v39[3] = v44;
          v39[4] = v4;
          v39[5] = v24;
          goto LABEL_57;
        }
        v26 = *((_QWORD *)Path + 12);
        if ( !v26 )
          goto LABEL_41;
        v27 = *(_QWORD *)(v26 + 104);
        if ( v27 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v27 + 96), 1u);
          v28 = *(_QWORD *)(v26 + 104);
        }
        else
        {
          v28 = 0LL;
        }
        v29 = *(_QWORD *)(v28 + 144);
        v46 = v28;
        if ( !v29 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v27, v13);
          WdLogEvent5_WdAssertion(v41);
          v29 = *(_QWORD *)(v28 + 144);
        }
        v30 = *(_DWORD *)(v29 + 132);
        v31 = *(_DWORD *)(v29 + 136);
        if ( (a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F) && v31 != 12 && v31 != 32 )
          goto LABEL_32;
        if ( a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F )
        {
          if ( v31 != 30 )
            goto LABEL_32;
        }
        else if ( v31 == 12 || v31 == 32 )
        {
          goto LABEL_32;
        }
        if ( v31 == 30 && a3 != D3DDDIFMT_A16B16G16R16 && a3 != D3DDDIFMT_A16B16G16R16F )
          goto LABEL_32;
        if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
        {
          v42 = v30;
          v43 = v30;
          v33 = v30 >> 8;
          v35 = v30 >> 20;
          v34 = v43 >> 14;
          v32 = v42 >> 2;
          if ( (((unsigned __int8)v32 | (unsigned __int8)(v33 | v34 | v35)) & 0xC) == 0 )
            goto LABEL_32;
        }
        else
        {
          v32 = v30 >> 2;
          v33 = v30 >> 8;
          v34 = v30 >> 14;
          v35 = v30 >> 20;
        }
        if ( a3 != D3DDDIFMT_A2B10G10R10
          && a3 != D3DDDIFMT_A2R10G10B10
          && (((unsigned __int8)v35 | (unsigned __int8)(v34 | v33 | v32)) & 0xC) != 0 )
        {
LABEL_32:
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v46, 0LL);
          goto LABEL_33;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v46, 0LL);
        if ( ++v20 >= v45 )
          goto LABEL_35;
      }
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v39[3] = v20;
      v39[4] = v4;
    }
    v39[5] = v19;
  }
  else
  {
LABEL_41:
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v39[3] = v5;
  }
LABEL_57:
  WdLogEvent5_WdError(v39);
LABEL_35:
  v11 = 0;
LABEL_33:
  auto_rc<DMMVIDPN const>::reset(&v44, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40), v36);
  return v11;
}
