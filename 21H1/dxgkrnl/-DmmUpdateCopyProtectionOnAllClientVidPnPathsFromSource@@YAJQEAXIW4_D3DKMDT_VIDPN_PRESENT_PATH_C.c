/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C012A170
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012B854 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0013690 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C00136E0 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E2410 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02E4C00 (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        __int64 a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a3,
        int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char **v16; // rbp
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int updated; // eax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+20h] [rbp-48h] BYREF
  char **v48; // [rsp+28h] [rbp-40h]
  __int64 v49; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v50; // [rsp+70h] [rbp+8h] BYREF
  int v51; // [rsp+88h] [rbp+20h]

  v51 = a4;
  v4 = 0;
  v5 = a3;
  v6 = (unsigned int)a2;
  if ( !a1 )
  {
    v30 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v30 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v30);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v31);
  }
  v10 = *((_QWORD *)a1 + 334);
  if ( !v10 )
  {
    v30 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v30 + 24) = a1;
    goto LABEL_22;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v49, v11);
    v12 = *(_QWORD *)(v11 + 88);
    v47 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v13 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v47, v13);
    if ( v47 )
    {
      v16 = (char **)(v47 + 96);
      v17 = 0LL;
      v48 = (char **)(v47 + 96);
      while ( 1 )
      {
        v50 = -1;
        v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v16, (unsigned int)v6, v17, &v50);
        v23 = v18;
        if ( v18 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
          v46[3] = v17;
          v46[4] = v6;
          v46[5] = v16;
          v46[6] = v23;
          goto LABEL_42;
        }
        if ( v50 == -1 )
          goto LABEL_19;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v16, v6, v50);
        if ( !Path )
        {
          v34 = WdLogNewEntry5_WdAssertion(v25, v24);
          WdLogEvent5_WdAssertion(v34);
        }
        v27 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v27 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v25, v24);
          WdLogEvent5_WdAssertion(v35);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v27 + 104) && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, 2LL) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, (unsigned int)v5) )
        {
          v45 = WdLogNewEntry5_WdWarning(v37, v36, v38);
          WdLogEvent5_WdWarning(v45);
          goto LABEL_40;
        }
        v39 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, (unsigned int)v5);
        v23 = v39;
        if ( v39 == -1071774970 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v41);
          v44[3] = v5;
          v44[4] = v6;
          v44[5] = v50;
          v44[6] = a1;
          WdLogEvent5_WdDmmEvent(v44);
LABEL_40:
          LODWORD(v23) = -1071774970;
          goto LABEL_42;
        }
        if ( v39 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
          v43[3] = v5;
          v43[4] = v6;
          v43[5] = v50;
          v43[6] = v23;
          WdLogEvent5_WdError(v43);
          goto LABEL_42;
        }
        *((_DWORD *)Path + 44) = v51;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v23) = updated;
        if ( updated < 0 )
          goto LABEL_42;
LABEL_18:
        v16 = v48;
        ++v17;
      }
    }
    v33 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdError(v33);
    LODWORD(v23) = -1071774884;
LABEL_42:
    v4 = v23;
LABEL_19:
    auto_rc<DMMVIDPN const>::reset(&v47, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v49 + 40), v28);
    return v4;
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v32 + 24) = a1;
    WdLogEvent5_WdError(v32);
    return 3223192373LL;
  }
}
