/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02D7940
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0151658 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010CB0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0128A60 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012B788 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02DBC34 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02DC8D4 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int *v7; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  VIDPN_MGR *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rsi
  DMMVIDPNTOPOLOGY *v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // eax
  int NumPathsFromSource; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebp
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v38; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39; // eax
  unsigned __int16 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v47; // [rsp+40h] [rbp-48h] BYREF
  __int64 v48[8]; // [rsp+48h] [rbp-40h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v49; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v50; // [rsp+98h] [rbp+10h]
  unsigned __int64 v51; // [rsp+A0h] [rbp+18h]

  v51 = a3;
  v50 = a2;
  v7 = a2;
  LODWORD(v9) = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 334) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 334) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v48, (__int64)v13);
  v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a4);
  v17 = v14;
  if ( !v14 || *(VIDPN_MGR **)(v14 + 48) != v13 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v18[3] = a4;
    LODWORD(a4) = -1073741811;
    v18[4] = -1073741811LL;
LABEL_37:
    WdLogEvent5_WdError(v18);
    goto LABEL_31;
  }
  v19 = 0LL;
  v20 = (DMMVIDPNTOPOLOGY *)(v14 + 96);
  if ( a3 )
  {
    while ( 1 )
    {
      v21 = v7[v19];
      v47 = 0LL;
      v22 = v21;
      v49 = D3DKMDT_VPPI_UNINITIALIZED;
      if ( v19 )
        v22 = v9;
      v9 = v22;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v20, (unsigned int)v21, &v47);
      v26 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 )
          break;
        v27 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( v26 == -1071774919 )
        break;
      if ( v47 > 1 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
        v18[3] = v21;
        a4 = -1073741811LL;
        v18[4] = v47;
        goto LABEL_33;
      }
      v28 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v20, (unsigned int)v21, 0LL, (unsigned int *)&v49);
      v31 = (unsigned int)v49;
      if ( v28 < 0 || v49 == -1 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v32);
      }
      if ( a5 )
        a5[v19] = v31;
      if ( v19 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v20, v21, v31);
        if ( !Path )
        {
          v38 = WdLogNewEntry5_WdAssertion(v36, v35);
          WdLogEvent5_WdAssertion(v38);
        }
        v39 = *((_DWORD *)Path + 26);
        v40 = *((_WORD *)Path + 54);
        v49 = v39;
        if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v13, v20, v21, v31, 0) < 0 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v42, v41);
          WdLogEvent5_WdAssertion(v43);
        }
        v44 = VIDPN_MGR::AddPathToVidPnTopology(v13, v20, v9, v31, v49, v40, 1u, D3DKMDT_MCC_ENFORCE);
        a4 = v44;
        if ( v44 < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v45, v15);
          v18[3] = v31;
          v18[4] = v9;
LABEL_33:
          v18[5] = v17;
          v18[6] = a4;
          goto LABEL_37;
        }
        v7 = v50;
      }
      else
      {
        v33 = VIDPN_MGR::UnpinPathModalityFromSource(v13, v20, v9);
        a4 = v33;
        if ( v33 < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v34, v15);
          v18[3] = v9;
          goto LABEL_36;
        }
      }
      if ( ++v19 >= v51 )
        goto LABEL_30;
    }
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v18[3] = v21;
    a4 = -1073741811LL;
LABEL_36:
    v18[4] = v17;
    v18[5] = a4;
    goto LABEL_37;
  }
LABEL_30:
  LODWORD(a4) = 0;
LABEL_31:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48[0] + 40), v15);
  return (unsigned int)a4;
}
