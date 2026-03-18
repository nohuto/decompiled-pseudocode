/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01C3D18
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0001BC0 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0160498 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C019F49C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01C43A4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C44E0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1C01C4AF8 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C18E4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v16; // rdx
  DXGADAPTER *v17; // rcx
  bool IsAdapterSessionized; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int *v25; // rbx
  signed __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // r9
  struct DXGDEVICE *v33; // r11
  int v34; // r8d
  struct DXGDEVICE *v35; // rax
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v36; // ebx
  signed __int64 v37; // r15
  signed __int64 v38; // rdi
  __int64 v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rdx
  struct DXGDEVICE *v42; // r9
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v46; // esi
  int v47; // r8d
  __int64 v48; // rbx
  const wchar_t *v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rcx
  unsigned int v70; // r8d
  __int64 v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // rdi
  BLTQUEUE *v78; // rcx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v80; // [rsp+28h] [rbp-60h]
  __int64 v81; // [rsp+30h] [rbp-58h]
  __int64 v82; // [rsp+38h] [rbp-50h]
  __int64 v83; // [rsp+40h] [rbp-48h]
  int v84; // [rsp+50h] [rbp-38h] BYREF
  __int64 v85; // [rsp+58h] [rbp-30h]
  signed __int64 i; // [rsp+90h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 1972LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 1972LL, 0LL, 0LL, 0LL, 0LL);
  }
  v14 = a5;
  if ( *((_DWORD *)this + 24) < a5 )
  {
    v48 = a5;
    v46 = -1073741811;
    WdLogSingleEntry3(2LL, a2, a5, -1073741811LL);
    v83 = 0LL;
    v49 = L"Device 0x%I64x: Invalid Output (0x%I64x) specified, returning 0x%I64x";
    v82 = 0LL;
    v81 = -1073741811LL;
    v80 = v48;
    goto LABEL_107;
  }
  if ( !a3 || !a4 )
  {
    v46 = -1073741811;
    WdLogSingleEntry5(2LL, a2, a3, a4, a3, -1073741811LL);
    v83 = -1073741811LL;
    v49 = L"Device 0x%I64x: Invalid parameter (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
    v82 = (__int64)a3;
    v81 = (__int64)a4;
    v80 = (__int64)a3;
LABEL_107:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v49, (__int64)a2, v80, v81, v82, v83);
    return v46;
  }
  v84 = 0;
  Current = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 2006LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 2006LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 224LL))(&v84, 0LL, 0LL);
  if ( !v84 )
  {
    v46 = -1073741790;
    WdLogSingleEntry2(3LL, a2, -1073741790LL);
    return v46;
  }
  v17 = (DXGADAPTER *)*((_QWORD *)this + 2);
  LODWORD(i) = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v17, v16, (unsigned int *)&i, 0LL);
  if ( IsAdapterSessionized )
  {
    if ( (_DWORD)v22 )
    {
      CurrentProcess = PsGetCurrentProcess(IsAdapterSessionized, v19, v20, v21);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      if ( (_DWORD)i == ProcessSessionId )
        goto LABEL_11;
      v59 = PsGetCurrentProcess(v56, v55, v57, v58);
      v60 = PsGetProcessSessionId(v59);
      v61 = (unsigned int)i;
      v46 = -1073741790;
      WdLogSingleEntry4(2LL, a2, (unsigned int)i, v60, -1073741790LL);
      v66 = PsGetCurrentProcess(v63, v62, v64, v65);
      v67 = PsGetProcessSessionId(v66);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Remote session trying acquire ownership of a different sessions adapter, device 0x%I64x, AdapterSession"
                  "  = 0x%I64x, Current Session  = 0x%I64x",
        (__int64)a2,
        v61,
        v67,
        -1073741790LL,
        0LL);
      LOBYTE(v68) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v68) )
        return v46;
      DbgPrintEx(
        0x65u,
        0,
        "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
    }
    else
    {
      v50 = (unsigned int)i;
      v46 = -1073741790;
      v51 = IsAdapterSessionized;
      WdLogSingleEntry5(2LL, a2, 0LL, IsAdapterSessionized, (unsigned int)i, -1073741790LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Console session is trying to acquire ownership of a session adapter, device 0x%I64x, RemoteSession = 0x"
                  "%I64x, bIsAdapterSessionized = 0x%I64x, AdapterSessionId = 0x%I64x, returning 0x%I64x",
        (__int64)a2,
        0LL,
        v51,
        v50,
        -1073741790LL);
      LOBYTE(v52) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v52) )
        return v46;
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why console app is taking sessionized output ownership");
    }
LABEL_68:
    __debugbreak();
    return v46;
  }
  if ( (_DWORD)v22 )
  {
    v46 = -1073741790;
    WdLogSingleEntry5(3LL, a2, v22, IsAdapterSessionized, (unsigned int)i, -1073741790LL);
    LOBYTE(v69) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v69) )
    {
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why remote app is taking console output ownership");
      goto LABEL_68;
    }
    return v46;
  }
LABEL_11:
  v23 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v23 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v23 + 2800) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2097LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->GetRenderCore()->IsCoreResourceExclusiveOwner())",
      2097LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v24 = 0LL;
  if ( !(_DWORD)v14 )
  {
LABEL_34:
    if ( DXGDEVICE::HasContextWithHintType(a2, D3DKMT_CLIENTHINT_OPENGL) )
      WdLogSingleEntry1(4LL, a2);
    if ( !(_DWORD)v14 )
      return 0LL;
    v36 = a6.0;
    v37 = (char *)a3 - a4;
    v38 = (unsigned int)v14;
    i = (unsigned int)v14;
    while ( 1 )
    {
      v39 = *(unsigned int *)a4;
      v40 = *((_QWORD *)this + 16);
      v41 = 4000 * v39;
      v42 = *(struct DXGDEVICE **)(4000 * v39 + v40 + 728);
      if ( !v42 )
        break;
      v43 = *(_DWORD *)&a4[v37];
      if ( v43 != 4 )
      {
        v47 = *(_DWORD *)(v41 + v40 + 736);
        if ( v42 == a2 )
        {
          if ( v47 != v43 )
          {
            WdLogSingleEntry1(1LL, 2353LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType == pVidPnSourceOwnerType[i]",
              2353LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_40;
        }
        if ( v47 != 1 || v43 == 1 )
        {
          WdLogSingleEntry1(1LL, 2363LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(D3DKMT_VIDPNSOURCEOWNER_SHARED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType) && ("
                      "D3DKMT_VIDPNSOURCEOWNER_SHARED != pVidPnSourceOwnerType[i])",
            2363LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v40 = *((_QWORD *)this + 16);
          LODWORD(v39) = *(_DWORD *)a4;
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          this,
          *(struct DXGDEVICE **)(4000LL * (unsigned int)v39 + v40 + 728),
          v39);
        goto LABEL_51;
      }
LABEL_40:
      if ( *(_DWORD *)&a4[v37] == 4 )
      {
        *(_QWORD *)(4000LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 744) = a2;
      }
      else
      {
        v44 = *((_QWORD *)this + 56);
        if ( v44 )
        {
          v77 = *(_QWORD *)(v44 + 8) + 2920LL * *(unsigned int *)a4;
          if ( (*(_DWORD *)(v77 + 952) & 1) == 0 || a2 != *(struct DXGDEVICE **)(v77 + 360) )
          {
            v78 = (BLTQUEUE *)(*(_QWORD *)(v44 + 8) + 2920LL * *(unsigned int *)a4);
            *(_QWORD *)(v77 + 584) = a2;
            *(_BYTE *)(v77 + 568) = 1;
            if ( (int)BLTQUEUE::IssueCommand(v78) >= 0 && a2 != *(struct DXGDEVICE **)(v77 + 360) )
            {
              *(_QWORD *)(v77 + 360) = a2;
              *(_OWORD *)(v77 + 320) = 0LL;
              *(_OWORD *)(v77 + 336) = 0LL;
              *(_DWORD *)(v77 + 952) &= ~4u;
            }
          }
          v38 = i;
        }
        *(_QWORD *)(4000LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 728) = a2;
        *(_DWORD *)(4000LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 736) = *(_DWORD *)&a4[v37];
        *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)(4000LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 740) = v36;
      }
      *(_QWORD *)(4000LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 752) = *((_QWORD *)a2 + 5);
      ADAPTER_DISPLAY::UpdateGammaRamp(this, *(_DWORD *)a4);
      WdLogSingleEntry4(4LL, a2, *(unsigned int *)a4, *(int *)&a4[v37], v38);
      if ( *(_DWORD *)&a4[v37] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v14 )
        return 0LL;
    }
    if ( *(_DWORD *)(v41 + v40 + 736) )
    {
      WdLogSingleEntry1(1LL, 2373LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
        2373LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_51:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((struct _KTHREAD ***)this + 15), *(_DWORD *)a4, 0LL, 0, 0, 1);
    goto LABEL_40;
  }
  v25 = (unsigned int *)a4;
  v26 = (char *)a3 - a4;
  for ( i = (char *)a3 - a4; ; v26 = i )
  {
    v27 = *(int *)((char *)v25 + v26);
    if ( (int)v27 <= 0 || (int)v27 > 4 )
    {
      v46 = -1073741811;
      WdLogSingleEntry5(2LL, a2, (unsigned int)v24, *(unsigned int *)&a4[4 * v24], v27, -1073741811LL);
      v49 = L"Device 0x%I64x: Invalid OwnerType (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
      v83 = -1073741811LL;
      v82 = a3[v24];
      v81 = *(unsigned int *)&a4[4 * v24];
      v80 = (unsigned int)v24;
      goto LABEL_107;
    }
    v28 = *v25;
    if ( *((_DWORD *)this + 24) <= *v25 )
    {
      v46 = -1073741811;
      WdLogSingleEntry5(2LL, a2, (unsigned int)v24, *v25, v27, -1073741811LL);
      v49 = L"Device 0x%I64x: Invalid VidPnSourceId (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
      v83 = -1073741811LL;
      v82 = a3[v24];
      v81 = *(unsigned int *)&a4[4 * v24];
      v80 = (unsigned int)v24;
      goto LABEL_107;
    }
    if ( *((_QWORD *)a2 + 231) != *((_QWORD *)this + 2) )
    {
      WdLogSingleEntry1(1LL, 2137LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice->GetDisplayAdapter(pVidPnSourceId[i]) == this->GetAdapter()",
        2137LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v28 = *v25;
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4000LL * v28)) )
    {
      LODWORD(v72) = -1071774910;
      WdLogSingleEntry2(3LL, *(unsigned int *)&a4[4 * v24], -1071774910LL);
      return (unsigned int)v72;
    }
    v29 = 0LL;
    if ( (_DWORD)v24 )
    {
      v70 = *v25;
      while ( 1 )
      {
        v71 = *(unsigned int *)&a4[4 * v29];
        v85 = (unsigned int)v29;
        if ( v70 == (_DWORD)v71 )
          break;
        v29 = (unsigned int)(v29 + 1);
        if ( (unsigned int)v29 >= (unsigned int)v24 )
          goto LABEL_22;
      }
      v46 = -1073741811;
      v74 = (unsigned int)v29;
      WdLogSingleEntry5(2LL, a2, v24, (unsigned int)v29, v71, -1073741811LL);
      v49 = L"Device 0x%I64x: All VidPnSourceId have to be distinct but entry 0x%I64x and 0x%I64x have identical value of "
             "0x%I64x, returning 0x%I64x";
      v83 = -1073741811LL;
      v82 = *(unsigned int *)&a4[4 * v85];
      v81 = v74;
      v80 = v24;
      goto LABEL_107;
    }
LABEL_22:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(this, *v25) )
    {
      v75 = *(unsigned int *)&a4[4 * v24];
      v72 = -1071774972LL;
      v76 = (unsigned int)v24;
      goto LABEL_90;
    }
    v30 = *(int *)((char *)v25 + v26);
    if ( (_DWORD)v30 == 1 && !*((_DWORD *)a2 + 108) )
    {
      v46 = -1073741811;
      WdLogSingleEntry5(2LL, a2, (unsigned int)v24, *(unsigned int *)&a4[4 * v24], v30, -1073741811LL);
      v49 = L"Device 0x%I64x: Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_SHARED (0x%I64x 0x%I64x 0x%I64x), returning 0x%I64x";
      v83 = -1073741811LL;
      v82 = a3[v24];
      v81 = *(unsigned int *)&a4[4 * v24];
      v80 = (unsigned int)v24;
      goto LABEL_107;
    }
    if ( (_DWORD)v30 == 3 && *((_DWORD *)a2 + 108) )
    {
      v46 = -1073741811;
      WdLogSingleEntry5(2LL, a2, (unsigned int)v24, *(unsigned int *)&a4[4 * v24], v30, -1073741811LL);
      v49 = L"Device 0x%I64x: No-Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI(0x%I64x 0x%I64x 0x%I64x)"
             ", returning 0x%I64x";
      v83 = -1073741811LL;
      v82 = a3[v24];
      v81 = *(unsigned int *)&a4[4 * v24];
      v80 = (unsigned int)v24;
      goto LABEL_107;
    }
    v31 = *((_QWORD *)this + 16);
    v32 = 4000LL * *v25;
    v33 = *(struct DXGDEVICE **)(v32 + v31 + 728);
    if ( !v33 )
    {
      if ( *(_DWORD *)(v32 + v31 + 736) )
      {
        WdLogSingleEntry1(1LL, 2314LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
          2314LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_33;
    }
    v34 = *(_DWORD *)(v32 + v31 + 736);
    if ( v33 != a2 )
      break;
    if ( v34 != (_DWORD)v30 )
    {
      v46 = -1073741811;
      WdLogSingleEntry5(
        2LL,
        a2,
        *(unsigned int *)&a4[4 * v24],
        *(int *)(4000LL * *(unsigned int *)&a4[4 * v24] + v31 + 736),
        v30,
        -1073741811LL);
      v83 = -1073741811LL;
      v82 = a3[v24];
      v81 = *(int *)(4000LL * *(unsigned int *)&a4[4 * v24] + *((_QWORD *)this + 16) + 736);
      v80 = *(unsigned int *)&a4[4 * v24];
LABEL_86:
      v49 = L"Device 0x%I64x: VidPn 0x%I64x can't change owner type from 0x%I64x to 0x%I64x, returning 0x%I64x";
      goto LABEL_107;
    }
LABEL_33:
    v14 = a5;
    v24 = (unsigned int)(v24 + 1);
    ++v25;
    if ( (unsigned int)v24 >= a5 )
      goto LABEL_34;
  }
  if ( v34 != 1 )
    goto LABEL_88;
  if ( (_DWORD)v30 != 1
    || (*(_DWORD *)(*((_QWORD *)a2 + 5) + 424LL) & 4) == 0
    || (*(_DWORD *)(*((_QWORD *)v33 + 5) + 424LL) & 4) == 0 )
  {
    if ( (_DWORD)v30 == 1 )
    {
LABEL_88:
      LODWORD(v72) = -1071774910;
      WdLogSingleEntry5(
        3LL,
        a2,
        *(int *)(4000LL * *(unsigned int *)&a4[4 * v24] + v31 + 736),
        *(unsigned int *)&a4[4 * v24],
        a3[v24],
        -1071774910LL);
      return (unsigned int)v72;
    }
    v35 = *(struct DXGDEVICE **)(v32 + v31 + 744);
    if ( v35 != a2 )
    {
      if ( !v35 )
        goto LABEL_33;
      v75 = *(int *)((char *)v25 + v26);
      v76 = *v25;
      v72 = -1071774910LL;
LABEL_90:
      WdLogSingleEntry4(3LL, a2, v76, v75, v72);
      return (unsigned int)v72;
    }
    if ( (_DWORD)v30 != 4 )
    {
      v46 = -1073741811;
      WdLogSingleEntry5(2LL, a2, *(unsigned int *)&a4[4 * v24], 4LL, v30, -1073741811LL);
      v83 = -1073741811LL;
      v82 = a3[v24];
      v81 = 4LL;
      v80 = *(unsigned int *)&a4[4 * v24];
      goto LABEL_86;
    }
    goto LABEL_33;
  }
  LODWORD(v72) = -1071774910;
  WdLogSingleEntry5(
    3LL,
    a2,
    *(int *)(4000LL * *(unsigned int *)&a4[4 * v24] + v31 + 736),
    *(unsigned int *)&a4[4 * v24],
    v30,
    -1071774910LL);
  LOBYTE(v73) = 1;
  if ( (unsigned __int8)WdIsDebuggerPresent(v73) )
  {
    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
    __debugbreak();
  }
  return (unsigned int)v72;
}
