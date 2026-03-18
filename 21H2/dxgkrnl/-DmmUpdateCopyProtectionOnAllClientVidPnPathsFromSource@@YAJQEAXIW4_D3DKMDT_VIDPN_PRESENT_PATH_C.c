/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C01BC4FC
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01BC490 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C001F2A4 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C001F2FC (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BCB6C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C03A827C (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a3,
        int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  DMMVIDPNTOPOLOGY **v12; // rbp
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v19; // rdi
  int v21; // eax
  int updated; // eax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  DMMVIDPNTOPOLOGY **v25; // [rsp+58h] [rbp-40h]
  __int64 v26; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+8h] BYREF
  int v28; // [rsp+B8h] [rbp+20h]

  v28 = a4;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a1 + 349);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v9);
    v10 = *(_QWORD *)(v9 + 128);
    v24 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v9 + 128);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v24, v11);
    if ( v24 )
    {
      v12 = (DMMVIDPNTOPOLOGY **)(v24 + 96);
      v13 = 0LL;
      v25 = (DMMVIDPNTOPOLOGY **)(v24 + 96);
      while ( 1 )
      {
        v27 = -1;
        v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v12, v6, v13, &v27);
        v17 = v14;
        if ( v14 < 0 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
          v23[3] = v13;
          v23[4] = v6;
          v23[5] = v12;
          v23[6] = v17;
          goto LABEL_40;
        }
        if ( v27 == -1 )
          goto LABEL_19;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v12, v6, v27);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        v19 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v19 )
          WdLogSingleEntry0(1LL);
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v19 + 108)
               && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5) )
        {
          WdLogSingleEntry0(3LL);
          goto LABEL_38;
        }
        v21 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
        LODWORD(v17) = v21;
        if ( v21 == -1071774970 )
        {
          WdLogSingleEntry4(7LL, v5, v6, v27, a1);
LABEL_38:
          LODWORD(v17) = -1071774970;
          goto LABEL_40;
        }
        if ( v21 < 0 )
        {
          WdLogSingleEntry4(2LL, v5, v6, v27, v21);
          goto LABEL_40;
        }
        *((_DWORD *)Path + 44) = v28;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v17) = updated;
        if ( updated < 0 )
          goto LABEL_40;
LABEL_18:
        v12 = v25;
        ++v13;
      }
    }
    WdLogSingleEntry1(2LL, a1);
    LODWORD(v17) = -1071774884;
LABEL_40:
    v4 = v17;
LABEL_19:
    auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
