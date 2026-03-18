/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01488B0
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0140928 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000CE7C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000CFDC (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0016AF8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0139AF0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C0148CC4 (-HasOpenGlContext@DXGDEVICE@@QEAAEXZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C0149AF4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0157B44 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0162BF8 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0213F74 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        PERESOURCE **this,
        struct _ERESOURCE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  DXGADAPTER *v20; // rcx
  bool IsAdapterSessionized; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _BOOL8 v25; // r15
  ERESOURCE_THREAD OwnerThread; // rax
  __int64 v27; // rbx
  char *v28; // r12
  signed __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r8
  PERESOURCE *v37; // r9
  __int64 v38; // r8
  struct _ERESOURCE *v39; // r10
  struct DXGDEVICE *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v43; // ebx
  signed __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // r9
  PERESOURCE *v47; // rcx
  __int64 v48; // rdx
  struct DXGDEVICE *v49; // r10
  int v50; // eax
  PERESOURCE *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v56; // rax
  int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r15
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v90[4]; // [rsp+30h] [rbp-38h] BYREF
  signed __int64 i; // [rsp+70h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v58 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v58 + 24) = 1930LL;
    WdLogEvent5_WdAssertion(v58);
  }
  v12 = a5;
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v27) = -1073741811;
    v79[4] = v12;
    v79[5] = -1073741811LL;
LABEL_100:
    v79[3] = a2;
    goto LABEL_101;
  }
  if ( !a3 || !a4 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v27) = -1073741811;
    v79[4] = a3;
    v79[5] = a4;
    v79[6] = a3;
    v79[7] = -1073741811LL;
    goto LABEL_100;
  }
  v90[0] = 0;
  Current = DXGPROCESS::GetCurrent(v11, v10);
  if ( !Current )
  {
    v59 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v59 + 24) = 1964LL;
    WdLogEvent5_WdAssertion(v59);
  }
  v18 = (*(int (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 224LL))(v90, 0LL, 0LL);
  if ( !v90[0] )
  {
    v56 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    *(_QWORD *)(v56 + 24) = a2;
    *(_QWORD *)(v56 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v56);
    return 3221225506LL;
  }
  v20 = (DXGADAPTER *)this[2];
  LODWORD(i) = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v20, v16, (unsigned int *)&i, 0LL);
  v25 = IsAdapterSessionized;
  if ( IsAdapterSessionized )
  {
    if ( (_DWORD)v18 )
    {
      CurrentProcess = PsGetCurrentProcess(v23, v22);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      if ( (_DWORD)i == ProcessSessionId )
        goto LABEL_11;
      v64 = WdLogNewEntry5_WdError(v23, v22);
      v65 = (unsigned int)i;
      v66 = v64;
      *(_QWORD *)(v64 + 24) = a2;
      *(_QWORD *)(v64 + 32) = v65;
      v68 = PsGetCurrentProcess(v65, v67);
      *(_QWORD *)(v66 + 40) = (unsigned int)PsGetProcessSessionId(v68);
      *(_QWORD *)(v66 + 48) = -1073741790LL;
      WdLogEvent5_WdError(v66);
      LOBYTE(v69) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v69) )
        return 3221225506LL;
      DbgPrintEx(
        0x65u,
        0,
        "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
    }
    else
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v60[5] = v25;
      v60[6] = (unsigned int)i;
      v60[3] = a2;
      v60[4] = 0LL;
      v60[7] = -1073741790LL;
      WdLogEvent5_WdError(v60);
      LOBYTE(v61) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v61) )
        return 3221225506LL;
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why console app is taking sessionized output ownership");
    }
LABEL_68:
    __debugbreak();
    return 3221225506LL;
  }
  if ( (_DWORD)v18 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v70[6] = (unsigned int)i;
    v70[3] = a2;
    v70[4] = v18;
    v70[5] = v25;
    v70[7] = -1073741790LL;
    WdLogEvent5_WdWarning(v70);
    LOBYTE(v71) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v71) )
    {
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why remote app is taking console output ownership");
      goto LABEL_68;
    }
    return 3221225506LL;
  }
LABEL_11:
  OwnerThread = a2->OwnerTable[1].OwnerThread;
  if ( !OwnerThread
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(OwnerThread + 2704) + 16LL)) )
  {
    v72 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v72 + 24) = 2055LL;
    WdLogEvent5_WdAssertion(v72);
  }
  v27 = 0LL;
  if ( !(_DWORD)v12 )
  {
LABEL_34:
    if ( DXGDEVICE::HasOpenGlContext((DXGDEVICE *)a2) )
    {
      v84 = WdLogNewEntry5_WdEvent(v42, v41);
      *(_QWORD *)(v84 + 24) = a2;
      WdLogEvent5_WdEvent(v84);
    }
    if ( !(_DWORD)v12 )
      return 0LL;
    v43 = a6.0;
    v44 = (char *)a3 - a4;
    v45 = v12;
    while ( 1 )
    {
      v46 = *(unsigned int *)a4;
      v47 = this[14];
      v48 = 3968 * v46;
      v49 = (struct DXGDEVICE *)v47[496 * v46 + 86];
      if ( !v49 )
        break;
      v50 = *(_DWORD *)&a4[v44];
      if ( v50 != 4 )
      {
        v57 = (int)v47[(unsigned __int64)v48 / 8 + 87];
        if ( v49 == (struct DXGDEVICE *)a2 )
        {
          if ( v57 != v50 )
          {
            v85 = WdLogNewEntry5_WdAssertion(v47, v48);
            *(_QWORD *)(v85 + 24) = 2311LL;
            WdLogEvent5_WdAssertion(v85);
          }
          goto LABEL_40;
        }
        if ( v57 != 1 || v50 == 1 )
        {
          v86 = WdLogNewEntry5_WdAssertion(v47, v48);
          *(_QWORD *)(v86 + 24) = 2321LL;
          WdLogEvent5_WdAssertion(v86);
          v47 = this[14];
          LODWORD(v46) = *(_DWORD *)a4;
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          (ADAPTER_DISPLAY *)this,
          (struct DXGDEVICE *)v47[496 * (unsigned int)v46 + 86],
          v46);
        goto LABEL_51;
      }
LABEL_40:
      if ( *(_DWORD *)&a4[v44] == 4 )
      {
        this[14][496 * *(unsigned int *)a4 + 88] = a2;
      }
      else
      {
        v51 = this[48];
        if ( v51 )
        {
          v88 = (__int64)v51[1] + 2904 * *(unsigned int *)a4;
          *(_QWORD *)(v88 + 576) = a2;
          *(_BYTE *)(v88 + 560) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v88) >= 0 )
          {
            *(_QWORD *)(v88 + 352) = a2;
            *(_OWORD *)(v88 + 312) = 0LL;
            *(_OWORD *)(v88 + 328) = 0LL;
            *(_DWORD *)(v88 + 936) &= ~4u;
          }
        }
        this[14][496 * *(unsigned int *)a4 + 86] = a2;
        LODWORD(this[14][496 * *(unsigned int *)a4 + 87]) = *(_DWORD *)&a4[v44];
        HIDWORD(this[14][496 * *(unsigned int *)a4 + 87]) = v43;
      }
      this[14][496 * *(unsigned int *)a4 + 89] = (PERESOURCE)a2->ExclusiveWaiters;
      ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, *(_DWORD *)a4);
      v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v53, v52);
      v54[3] = a2;
      v54[4] = *(unsigned int *)a4;
      v54[5] = *(int *)&a4[v44];
      v54[6] = v12;
      WdLogEvent5_WdEvent(v54);
      if ( *(_DWORD *)&a4[v44] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v45 )
        return 0LL;
    }
    if ( LODWORD(v47[(unsigned __int64)v48 / 8 + 87]) )
    {
      v87 = WdLogNewEntry5_WdAssertion(v47, v48);
      *(_QWORD *)(v87 + 24) = 2331LL;
      WdLogEvent5_WdAssertion(v87);
    }
LABEL_51:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], *(unsigned int *)a4, 0LL, 0LL, 0, 1);
    goto LABEL_40;
  }
  v28 = a4;
  v29 = (char *)a3 - a4;
  for ( i = (char *)a3 - a4; ; v29 = i )
  {
    v30 = *(_DWORD *)&v28[v29];
    if ( v30 <= 0 )
      goto LABEL_74;
    if ( v30 > 4 )
      goto LABEL_74;
    v23 = *(unsigned int *)v28;
    if ( *((_DWORD *)this + 20) <= (unsigned int)v23 )
      goto LABEL_74;
    if ( a2[17].Reserved2 != this[2] )
    {
      v73 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v73 + 24) = 2095LL;
      WdLogEvent5_WdAssertion(v73);
      LODWORD(v23) = *(_DWORD *)v28;
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[14][496 * (unsigned int)v23]) )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v82 = *(unsigned int *)&a4[4 * v27];
      LODWORD(v27) = -1071774910;
      v80[3] = v82;
      v80[4] = -1071774910LL;
      goto LABEL_89;
    }
    v34 = 0LL;
    if ( !(_DWORD)v27 )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)v28 == *(_DWORD *)&a4[4 * v34] )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
        v79[4] = (unsigned int)v27;
        v79[5] = (unsigned int)v34;
        v79[3] = a2;
        v74 = *(unsigned int *)&a4[4 * v34];
        goto LABEL_76;
      }
      v34 = (unsigned int)(v34 + 1);
    }
    while ( (unsigned int)v34 < (unsigned int)v27 );
    v12 = a5;
LABEL_22:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop((ADAPTER_DISPLAY *)this, *(unsigned int *)v28) )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v22, v36);
      v80[3] = a2;
      v80[4] = (unsigned int)v27;
      v81 = *(unsigned int *)&a4[4 * v27];
      v27 = -1071774972LL;
      goto LABEL_87;
    }
    v23 = *(unsigned int *)&v28[i];
    if ( (_DWORD)v23 == 1 && !LODWORD(a2[4].OwnerTable) || (_DWORD)v23 == 3 && LODWORD(a2[4].OwnerTable) )
    {
LABEL_74:
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v79[3] = a2;
      v79[4] = (unsigned int)v27;
      v79[5] = *(unsigned int *)&a4[4 * v27];
      goto LABEL_75;
    }
    v37 = this[14];
    v38 = 496LL * *(unsigned int *)v28;
    v39 = v37[v38 + 86];
    if ( !v39 )
    {
      if ( LODWORD(v37[v38 + 87]) )
      {
        v78 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v78 + 24) = 2272LL;
        WdLogEvent5_WdAssertion(v78);
      }
      goto LABEL_33;
    }
    v22 = LODWORD(v37[v38 + 87]);
    if ( v39 == a2 )
    {
      if ( (_DWORD)v22 != (_DWORD)v23 )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v79[3] = a2;
        v79[4] = *(unsigned int *)&a4[4 * v27];
        v79[5] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v27] + 87]);
        goto LABEL_75;
      }
      goto LABEL_33;
    }
    if ( (_DWORD)v22 != 1 )
      goto LABEL_90;
    if ( (_DWORD)v23 == 1 && *((_BYTE *)a2->ExclusiveWaiters + 346) && *((_BYTE *)v39->ExclusiveWaiters + 346) )
      break;
    if ( (_DWORD)v23 == 1 )
    {
LABEL_90:
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v38 * 8);
      v80[3] = a2;
      v80[4] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v27] + 87]);
      v80[5] = *(unsigned int *)&a4[4 * v27];
      v83 = a3[v27];
      LODWORD(v27) = -1071774910;
      v80[7] = -1071774910LL;
      v80[6] = v83;
      goto LABEL_89;
    }
    v40 = (struct DXGDEVICE *)v37[v38 + 88];
    if ( v40 != (struct DXGDEVICE *)a2 )
    {
      if ( !v40 )
        goto LABEL_33;
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v38 * 8);
      v80[3] = a2;
      v80[4] = *(unsigned int *)&a4[4 * v27];
      v81 = a3[v27];
      v27 = -1071774910LL;
LABEL_87:
      v80[5] = v81;
      v80[6] = v27;
LABEL_89:
      WdLogEvent5_WdWarning(v80);
      return (unsigned int)v27;
    }
    if ( (_DWORD)v23 != 4 )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v79[3] = a2;
      v79[4] = *(unsigned int *)&a4[4 * v27];
      v79[5] = 4LL;
LABEL_75:
      v74 = a3[v27];
LABEL_76:
      LODWORD(v27) = -1073741811;
      v79[6] = v74;
      v79[7] = -1073741811LL;
LABEL_101:
      WdLogEvent5_WdError(v79);
      return (unsigned int)v27;
    }
LABEL_33:
    v27 = (unsigned int)(v27 + 1);
    v28 += 4;
    if ( (unsigned int)v27 >= (unsigned int)v12 )
      goto LABEL_34;
  }
  v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v38 * 8);
  v75[3] = a2;
  v75[4] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v27] + 87]);
  v75[5] = *(unsigned int *)&a4[4 * v27];
  v76 = a3[v27];
  LODWORD(v27) = -1071774910;
  v75[6] = v76;
  v75[7] = -1071774910LL;
  WdLogEvent5_WdWarning(v75);
  LOBYTE(v77) = 1;
  if ( (unsigned __int8)WdIsDebuggerPresent(v77) )
  {
    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
    __debugbreak();
  }
  return (unsigned int)v27;
}
