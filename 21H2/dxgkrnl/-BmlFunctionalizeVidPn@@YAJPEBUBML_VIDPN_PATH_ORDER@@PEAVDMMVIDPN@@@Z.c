/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C013E374
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C013DB84 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02EC678 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007EE0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00084B8 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C01390FC (BmlIsSecondaryClonePath.c)
 *     BmlFunctionalizePath @ 0x1C013E560 (BmlFunctionalizePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02EBD88 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r13
  unsigned __int16 v7; // si
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int16 v22; // si
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DMMVIDPNPRESENTPATH *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r14d
  unsigned __int16 v33; // si
  __int64 v34; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DMMVIDPNPRESENTPATH *v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v36 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !a2 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v37);
  }
  v6 = *((_QWORD *)a2 + 6);
  if ( !v6 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v38);
  }
  v7 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  LOBYTE(v9) = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v10 = 104LL * v7;
      v11 = *(_QWORD *)((char *)a1 + v10 + 16);
      *(_WORD *)((char *)a1 + v10 + 64) = 0;
      *(_WORD *)((char *)a1 + v10 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v11 + 24),
               *(_DWORD *)(v11 + 28));
      if ( !Path )
        break;
      if ( BmlIsSecondaryClonePath((__int64)a1, v7, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v10 + 66) )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v8, v17);
          v39[4] = a2;
          v39[3] = v7;
          v39[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 24LL);
          v40 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 28LL);
          v39[7] = a1;
LABEL_33:
          v39[6] = v40;
          WdLogEvent5_WdWarning(v39);
          return 3223192345LL;
        }
      }
      else
      {
        v18 = *((_QWORD *)Path + 11);
        v19 = *(_QWORD *)(v18 + 104);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
          v20 = *(_QWORD *)(v18 + 104);
        }
        else
        {
          v20 = 0LL;
        }
        v21 = *(_QWORD *)(v20 + 144);
        v55 = v20;
        if ( v21 )
        {
          if ( *(_WORD *)((char *)a1 + v10 + 66) )
            goto LABEL_31;
        }
        else if ( !*(_WORD *)((char *)a1 + v10 + 66) )
        {
LABEL_31:
          v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v8, v17);
          v41[4] = a2;
          v41[3] = v7;
          v41[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 24LL);
          v41[6] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 28LL);
          v41[7] = a1;
          WdLogEvent5_WdWarning(v41);
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v55, 0LL);
          return 3223192328LL;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v55, 0LL);
      }
      v9 = *(unsigned __int8 *)a1;
      if ( ++v7 >= v9 )
        goto LABEL_16;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v39[3] = a1;
    v39[4] = v7;
    v39[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 24LL);
    v40 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 28LL);
    v39[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v22 = 0;
  if ( (_BYTE)v9 )
  {
    do
    {
      v23 = v22;
      v24 = *((_QWORD *)a1 + 13 * v22 + 2);
      v27 = DMMVIDPNTOPOLOGY::FindPath(
              (struct DMMVIDPN *)((char *)a2 + 96),
              *(_DWORD *)(v24 + 24),
              *(_DWORD *)(v24 + 28));
      if ( !v27 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v42);
      }
      v32 = BmlFunctionalizePath(a1, a2, v22, v27);
      if ( v32 < 0 )
      {
        if ( v32 != -1071774970 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
          v47[3] = a2;
          v47[4] = a1;
          v47[5] = v22;
          return (unsigned int)v32;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = v22;
        v45 = *(_QWORD *)(v6 + 8);
        if ( !v45 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v44, v43);
          WdLogEvent5_WdAssertion(v46);
          v45 = *(_QWORD *)(v6 + 8);
        }
        DxgkLogCodePointPacket(0x11u, v22, 0, 0, *(_QWORD *)(*(_QWORD *)(v45 + 16) + 316LL));
        if ( !v22 )
          return 3223192326LL;
        --v22;
      }
      else
      {
        ++v22;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = v23;
      }
      v9 = *(unsigned __int8 *)a1;
    }
    while ( v22 < v9 );
  }
  v33 = 0;
  if ( (_BYTE)v9 )
  {
    do
    {
      v34 = *((_QWORD *)a1 + 13 * v33 + 2);
      if ( (*(_QWORD *)v34 & 0x20000000000000LL) != 0 )
      {
        if ( (*(_QWORD *)v34 & 0x20200LL) != 0x20200 )
        {
          v48 = WdLogNewEntry5_WdAssertion(0x20000000000000LL, v8);
          WdLogEvent5_WdAssertion(v48);
        }
        v51 = DMMVIDPNTOPOLOGY::FindPath(
                (struct DMMVIDPN *)((char *)a2 + 96),
                *(_DWORD *)(v34 + 24),
                *(_DWORD *)(v34 + 28));
        if ( !v51 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v50, v49);
          WdLogEvent5_WdAssertion(v52);
        }
        if ( (int)BmlGetRecommendedContentSizeForPath(a1, v33, v51, v34) < 0 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v53, v8);
          WdLogEvent5_WdAssertion(v54);
        }
      }
      ++v33;
    }
    while ( v33 < *(unsigned __int8 *)a1 );
  }
  return 0LL;
}
