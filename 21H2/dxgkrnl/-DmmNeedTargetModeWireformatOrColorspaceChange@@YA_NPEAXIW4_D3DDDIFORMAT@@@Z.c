/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C01C5AA0
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(_QWORD *a1, unsigned int a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // rdx
  DMMVIDPNTOPOLOGY **v11; // r12
  int NumPathsFromSource; // eax
  __int64 v13; // r14
  __int64 v14; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v23; // rdx
  DMMVIDPNTOPOLOGY **v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-18h] BYREF
  __int64 v28; // [rsp+30h] [rbp-10h] BYREF
  __int64 v29; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v30; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 304569) )
    return 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 0;
  }
  v6 = a1[349];
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 104)) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 0;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, v7);
  v8 = *(_QWORD *)(v7 + 128);
  v9 = 1;
  v26 = 0LL;
  if ( v8 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v8 + 32), 1u);
    v10 = *(_QWORD *)(v7 + 128);
  }
  else
  {
    v10 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v26, v10);
  if ( v26 )
  {
    v27 = 0LL;
    v11 = (DMMVIDPNTOPOLOGY **)(v26 + 96);
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v26 + 96), v4, &v27);
    if ( NumPathsFromSource < 0 )
    {
      v23 = v4;
      v24 = v11;
LABEL_43:
      v25 = NumPathsFromSource;
LABEL_44:
      WdLogSingleEntry3(2LL, v23, v24, v25);
      goto LABEL_30;
    }
    v13 = 0LL;
    if ( v27 )
    {
      while ( 1 )
      {
        v30 = -1;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v11, v4, v13, &v30);
        if ( NumPathsFromSource < 0 )
          break;
        v14 = v30;
        if ( v30 == -1 )
          WdLogSingleEntry0(1LL);
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v11, v4, v14);
        if ( !Path )
        {
          v23 = v26;
          v25 = v14;
          v24 = (DMMVIDPNTOPOLOGY **)v4;
          goto LABEL_44;
        }
        v16 = *((_QWORD *)Path + 12);
        if ( !v16 )
        {
          WdLogSingleEntry1(2LL, Path);
          goto LABEL_30;
        }
        v17 = *(_QWORD *)(v16 + 104);
        if ( v17 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v17 + 96), 1u);
          v18 = *(_QWORD *)(v16 + 104);
        }
        else
        {
          v18 = 0LL;
        }
        v19 = *(_QWORD *)(v18 + 144);
        v28 = v18;
        if ( !v19 )
        {
          WdLogSingleEntry0(1LL);
          v19 = *(_QWORD *)(v18 + 144);
        }
        v20 = *(_DWORD *)(v19 + 132);
        v21 = *(_DWORD *)(v19 + 136);
        if ( a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F || v21 == 12 || v21 == 32 || v21 == 30 )
        {
LABEL_27:
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v28, 0LL);
          goto LABEL_28;
        }
        if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
        {
          if ( (((unsigned __int8)(v20 >> 2) | (unsigned __int8)(BYTE1(v20) | (v20 >> 14) | (v20 >> 20))) & 0xC) == 0 )
            goto LABEL_27;
        }
        else if ( ((BYTE1(v20) | (unsigned __int8)((v20 >> 20) | (v20 >> 14) | (v20 >> 2))) & 0xC) != 0 )
        {
          goto LABEL_27;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v28, 0LL);
        if ( ++v13 >= v27 )
          goto LABEL_30;
      }
      v24 = (DMMVIDPNTOPOLOGY **)v4;
      v23 = v13;
      goto LABEL_43;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
  }
LABEL_30:
  v9 = 0;
LABEL_28:
  auto_rc<DMMVIDPN const>::reset(&v26, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
  return v9;
}
