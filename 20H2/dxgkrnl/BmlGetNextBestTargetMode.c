/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C01368FC
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0133FB0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinNextBestTargetMode @ 0x1C0139F78 (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0005F44 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000A330 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0136B18 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1C0136C94 (BmlCompareTargetModes.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DMMVIDPNSOURCEMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v8; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r12
  struct DMMVIDPNSOURCEMODE *v19; // rdi
  int v20; // ebx
  bool v21; // zf
  _QWORD *v22; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // [rsp+88h] [rbp+30h]

  v8 = (unsigned __int16)a3;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a6;
  if ( !a4 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !a2 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( *(_QWORD *)(a5 + 144) )
  {
    v16 = 0xFFFFFFFFLL;
    v17 = 0LL;
    *a7 = -1;
    if ( a6 != -1 )
    {
      v17 = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)a4 + 24, a6);
      if ( !v17 )
      {
        v35 = -1071774959;
        goto LABEL_23;
      }
    }
    v18 = 104 * v8;
    v19 = 0LL;
    *(_DWORD *)(v18 + a1 + 100) = 0;
    *(_DWORD *)(v18 + a1 + 104) = 0;
    v20 = *(_DWORD *)(a1 + 8) & 8;
    if ( v20 )
      WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
    v21 = v20 == 0;
    v22 = (_QWORD *)*((_QWORD *)a4 + 6);
    v40 = !v21;
    if ( v22 == (_QWORD *)((char *)a4 + 48) )
      goto LABEL_22;
    NextMode = (struct DMMVIDPNSOURCEMODE *)(v22 - 1);
    if ( !NextMode )
      goto LABEL_22;
    do
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
      v24[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
      v24[4] = *((unsigned int *)NextMode + 21);
      v24[5] = *((unsigned int *)NextMode + 22);
      v27 = *((unsigned int *)NextMode + 23);
      v24[6] = v27;
      v24[7] = *((unsigned int *)NextMode + 24);
      ++*(_DWORD *)(v18 + a1 + 100);
      if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v17
        || (LOBYTE(v26) = v40, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(
                                                   a1,
                                                   (unsigned __int16)v8,
                                                   NextMode,
                                                   v26)) )
      {
        WdLogNewEntry5_WdTrace(v27, v24, v25, v26);
      }
      else
      {
        ++*(_DWORD *)(v18 + a1 + 104);
        if ( (unsigned int)BmlCompareTargetModes(a1, a2, (unsigned __int16)v8, (_DWORD)NextMode, (__int64)v19, v40) == 1
          && (!v17 || (unsigned int)BmlCompareTargetModes(a1, a2, (unsigned __int16)v8, (_DWORD)NextMode, v17, v40) == -1) )
        {
          WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
          v19 = NextMode;
        }
      }
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a4, NextMode);
    }
    while ( NextMode );
    if ( !v19 )
    {
LABEL_22:
      v35 = -1071774970;
LABEL_23:
      WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
      return v35;
    }
    v32 = *(_QWORD *)(a2 + 48);
    *a7 = *((_DWORD *)v19 + 6);
    v33 = *(_QWORD *)(v32 + 8);
    if ( !v33 )
    {
      v39 = WdLogNewEntry5_WdAssertion(a7, v12);
      WdLogEvent5_WdAssertion(v39);
      v33 = *(_QWORD *)(v32 + 8);
    }
    DxgkLogCodePointPacket(
      0x21u,
      v8,
      *((_DWORD *)v19 + 21),
      *((_DWORD *)v19 + 22),
      *(_QWORD *)(*(_QWORD *)(v33 + 16) + 316LL));
    return 0LL;
  }
  else
  {
    v38 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v38 + 24) = a5;
    *(_QWORD *)(v38 + 32) = v8;
    WdLogEvent5_WdAssertion(v38);
    return 3223192328LL;
  }
}
